#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char hoTen[100], *p1 = NULL, *p2 = NULL;

	printf("Nhap Ho va Ten: ");
	gets(hoTen);

	p1 = strchr(hoTen, ' ');
	*p1 = '\0';
	p2 = strchr(p1 + 1, ' ');
	*p2 = '\0';

	printf("\nHo la: %s", hoTen);
	printf("\nTen Dem la: %s", p1 + 1);
	printf("\nTen la: %s", p2 + 1);

	_getch();
	return 0;
}