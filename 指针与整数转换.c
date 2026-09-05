#include <stdint.h>
#include <stdio.h>


int
main ()
{
//	stdint.h
//	#if __WORDSIZE == 64
//	typedef unsigned long int	uintptr_t;
//	#else
//	typedef unsigned int		uintptr_t;
//	#endif
	int a[4]		= {1, 2, 3, 4};
	int * ptr		= a;
	uintptr_t addr	= (uintptr_t) ptr;
	printf ("ptr\t\t= %p\n",			ptr);
	printf ("ptr + 1\t\t= %p\n\n",		ptr + 1);
	printf ("addr\t\t= 0x%lx\n",		addr);
	printf ("addr + 1\t= 0x%lx\n\n",	addr + 1);

//	int * foo = (int *) (addr + 2);
//	printf ("foo\t\t= %p\n",			foo); 
//	printf ("* foo\t\t= 0x%08x\n\n",	* foo);

//	printf ("a[0]\t\t= 0x%08x\n",		a[0]);
//	printf ("a[1]\t\t= 0x%08x\n",		a[1]);
//	printf ("a[2]\t\t= 0x%08x\n",		a[2]);

//	保存顺序是1234，读取顺序是4321
//			保存			|	输出
//			1	2	3	4	|	4	3	2	1
//	a[0]	01	00	00	00	|	00	00	00	01
//	a[1]	02	00	00	00	|	00	00	00	02
//	a[2]	03	00	00	00	|	00	00	00	03
//	foo		00	00	02	00	|	00	02	00	00

	return 0;
}
