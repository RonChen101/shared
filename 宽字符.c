#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <wchar.h>


int
main ()
{
	char * str = "你好a";

//	stdio.h
//	int printf (const char *template, …)
//	printf ("str的长度是：\t\t%lu\n", strlen (str));
//	printf ("str[0]的大小是：\t%lu字节\n", sizeof (str[0]));
//	printf ("str[0]是：\t\t%c\n", str[0]);

//	wchar.h
	wchar_t * wide_char_str = L"你好a";

//	locale.h
	setlocale (LC_ALL, "zh_CN.utf8");

//	stdio.h
//	int wprintf (const wchar_t *template, …)
	wprintf (L"wide_char_str的长度是：\t\t%lu\n", wcslen (wide_char_str));
	wprintf (L"wide_char_str[0]的大小是：\t%lu字节\n", sizeof (wide_char_str));
	wprintf (L"wide_char_str[0]是：\t\t%lc\n", wide_char_str[0]);

//	同一个流中，只能有一种方向，narrow-oriented或wide-oriented，一旦进行IO操作，就无法改变

//	stdio.h
//	int fprintf (FILE *stream, const char *template, …)	
	fprintf (stderr, "str的长度是：\t\t%lu\n", strlen (str));
	fprintf (stderr, "str[0]的大小是：\t%lu字节\n", sizeof (str[0]));
	fprintf (stderr, "str[0]是：\t\t%c\n", str[0]);

//	stdio.h
//	int fwprintf (FILE *stream, const wchar_t *template, …)

	return 0;
}
