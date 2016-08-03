#include <stdio.h>
#include <conio.h>

int Dem(char *str)
{
	char *p = NULL;
	int dem = 0;

	p = str;

	while(*p != '\0')
	{
		if(*p == ' ')
			dem++;
		p++;
	}
	
	return dem;
}
int main()
{
	char str[100];

	printf("Nhap chuoi: ");
	gets(str);

	printf("Chuoi co %d khoang trang!", Dem(str));

	_getch();
	return 0;
}