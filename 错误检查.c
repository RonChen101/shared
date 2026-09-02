#include <errno.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>


int
main ()
{
//	errno.h
//	printf ("errno为%d\n", errno);
	
	FILE *f = fopen ("./nofile", "r");

//	printf ("errno为%d\n", errno);

//	string.h
//	char * strerror (int errnum);
//	printf ("errno的意思是：%s\n", strerror (errno));
//	换个区域
//	setlocale (LC_ALL, "zh_CN.utf8");
//	printf ("errno的意思是：%s\n", strerror (errno));

//	stdio.h
//	void perror (const char *message);
//	perror ("");

	return 0;
}
