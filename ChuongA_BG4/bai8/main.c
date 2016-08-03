#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

char* TaoDongChu(char *tenBanNam, char *tenBanNu)
{
	char *str = (char*) malloc (strlen(tenBanNam) + strlen(tenBanNu) + 6);

	strcpy(str, tenBanNam);
	strcat(str, " yeu ");
	strcat(str, tenBanNu);

	return str;
}


int main()
{
	char tenBanNam[100], tenBanNu[100], *p = NULL;

	printf("Ten ban Nam: ");
	gets(tenBanNam);
	printf("Ten ban Nu: ");
	gets(tenBanNu);

	p = TaoDongChu(tenBanNam, tenBanNu);
	printf("Chuoi tro thanh: %s \n", p);

	free(p);
	p = NULL;
	_getch();
	return 0;
}

