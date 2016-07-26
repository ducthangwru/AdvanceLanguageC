#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char str[100], s1[100]= "", s2[100]= "", *p = NULL;
	int vitri;

	printf("Nhap chuoi: ");
	gets(str);

	do
	{
		printf("Nhap vi tri cat: ");
		scanf("%d", &vitri);
	}
	while(vitri < 0 || vitri >= strlen(str));
	
	p = strchr(str, str[vitri]);
	strncpy(s1, str, p - str);
	strcpy(s2, p + 1);

	printf("\ns1 = %s\n", s1);
	printf("\ns2 = %s\n", s2);

	_getch();
	return 0;
}