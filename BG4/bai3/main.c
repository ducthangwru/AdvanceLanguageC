#include <stdio.h>
#include <conio.h>

int  my_strlen_cach1(char *s)
{
	int i = 0;
	while(s[i] != '\0')
		i++;

	return i;
}

int my_strlen_cach2(char *s)
{
	char *p = s;
	while(*p != '\0')
	{
		p++;
	}

	return p - s;
}

int main()
{
	char str[100];

	printf("Nhap chuoi: ");
	gets(str);

	printf("\nChuoi co do dai la: %d\n", my_strlen_cach1(str));
	printf("\nChuoi co do dai la: %d\n", my_strlen_cach2(str));

	_getch();
	return 0;
}