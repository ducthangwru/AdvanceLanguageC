#include <stdio.h>
#include <conio.h>
#include <string.h>


void Cach1()
{
	char HoTen[100];
	int i;

	printf("CACH 1: \n");
	printf("Nhap Ho va Ten: ");
	gets(HoTen);

	printf("Ho la: ");

	for (i = 0; i < strlen(HoTen); i++)
	{
		if (HoTen[i] == ' ')
			printf("\nTen la: ");
		else
			printf("%c", HoTen[i]);
	}
}


void Cach2()
{
	char HoTen[100], *p = NULL;

	printf("\n\nCACH 3: \n");
	printf("Nhap Ho va Ten:  ");
	gets(HoTen);

	p = strchr(HoTen, ' ');
	*p = '\0';

	printf("Ho la: %s", HoTen);
	printf("\nTen la: %s", p+1);
}


void Cach3()
{
	char HoTen[100], Ho[100] = "", Ten[100] = "", *p = NULL;

	printf("\n\nCACH 2: \n");
	printf("Nhap Ho va Ten:  ");
	gets(HoTen);

	p = strchr(HoTen, ' ');

	strncpy(Ho, HoTen, p - HoTen);
	strcpy(Ten, p + 1);

	printf("Ho la: %s", Ho);
	printf("\nTen la: %s", Ten);
}


void Cach4()
{
	char HoTen[100], *p = NULL;

	printf("\n\nCACH 4: \n");
	printf("Nhap Ho va Ten:  ");
	gets(HoTen);

	p = strtok(HoTen, " ");
	printf("Ho la: %s", p);

	p = strtok('\0', " ");
	printf("\nTen la: %s", p);
}


void Cach5()
{
	char Ho[100], Ten[100];

	printf("\n\nCACH 5: \n");
	printf("Nhap Ho va Ten:  ");
	scanf("%s %s", Ho, Ten);

	printf("Ho la: %s", Ho);
	printf("\nTen la: %s", Ten);
}

int main()
{
	Cach1();
	Cach2();
	Cach3();
	Cach4();
	Cach5();

	_getch();
	return 0;
}
