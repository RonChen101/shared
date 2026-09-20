#include <stdio.h>
#include <stdlib.h>

int
main ()
{
	int * a = malloc (2 * sizeof (int));
	free (a);

//	printf ("我调用了malloc吗？\n");

	return 0;
}

//	编译命令参考：
//		gcc LD_PRELOAD测试.c && LD_PRELOAD=./动态共享库.so ./a.out
