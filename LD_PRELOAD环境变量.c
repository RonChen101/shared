#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *
malloc (size_t size)
{
//	dlfcn.h
//	void * dlsym (void * __restrict __handle, const char * __restrict __name) __THROW __nonnull ((2));
	static void * (* real_malloc) (size_t) = NULL;
	real_malloc = dlsym (RTLD_NEXT, "malloc");
	void * t = real_malloc (size);

	char buf [128];
//	stdio.h
//	int snprintf (char * s, size_t size, const char * template, …)
    int n = snprintf (buf, sizeof (buf), "malloc:\t%s\t%p\t%zu bytes\n", __FILE__, t, size);
//	unistd.h
//	ssize_t write (int filedes, const void * buffer, size_t size)
//	第一个参数为1时，会将第二个参数的内容写入标准输出流stdout
    write (1, buf, n);
	return t;
}

//	编译命令参考：
//		gcc -shared -fPIC -o 动态共享库.so LD_PRELOAD环境变量.c -ldl
