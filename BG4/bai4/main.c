#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char str[100], *p = NULL;
	int vitri = -1;

	printf("Nhap chuoi: ");
	gets(str);

	p = strchr(str, 'A');
	vitri = p - str;


	if (vitri >= 0)
		printf("\n Chu A nam o vi tri %d \n", vitri);
	else
		printf("\nKhong tim thay! \n");

	_getch();
	return 0;
}
