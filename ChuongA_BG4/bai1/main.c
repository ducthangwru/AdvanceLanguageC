#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() 
{
	char str[100], *p;
	int dem = 0;

	printf("Nhap vao 1 chuoi: ");
	fflush(stdin);
	gets(str);

	for(p = str; p < str + strlen(str); p++)
	{
		if(*p >= 'A' && *p <= 'Z')
			dem++;
	}

	printf("So ky tu viet hoa trong chuoi la: %d", dem);

	_getch();
	return 0;
}