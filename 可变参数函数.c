#include <stdio.h>
#include <stdarg.h>


/**
 * @brief 依次打印第一个参数后的数字
 * @param count	参数数量
 * @param ...	需要打印的数字
 */
void
print (int count, ...);


int
main ()
{
	print (4, 10, 5, 3, 21);

	return 0;
}


void
print (int count, ...)
{
//	stdarg.h
	va_list ap;

//	void va_start (va_list ap, last-required)
	va_start (ap, count);

	for (int i = 0; i < count; i++)
	{
	//	type va_arg (va_list ap, type)
		int t = va_arg (ap, int);
		printf ("%d\t", t);
	}

	printf ("\n");

//	void va_end (va_list ap)
	va_end (ap);
}
