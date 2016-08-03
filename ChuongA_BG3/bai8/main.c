#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void NhapMang(int **pa, int *pna, int **pb, int *pnb)
{
	int i;
	printf("NHAP MANG A: \n");
	do
	{
		printf("Nhap so luong phan tu: ");
		scanf("%d", &(*pna));
	}
	while (*pna <= 0);

	*pa = (int*) malloc((*pna) * sizeof(int));

	for(i = 0; i < *pna; i++)
	{
		printf("Nhap phan tu thu %d  ", i);
		scanf("%d", &(*pa)[i]);
	}

	printf("NHAP MANG B: \n");
	do
	{
		printf("Nhap so luong phan tu: ");
		scanf("%d", &(*pnb));
	}
	while (*pnb <= 0);

	*pb = (int*) malloc((*pnb) * sizeof(int));

	for(i = 0; i < *pnb; i++)
	{
		printf("Nhap phan tu thu %d  ", i);
		scanf("%d", &(*pb)[i]);
	}
}

void XuatMang(int a[], int na)
{
	int i;

	for(i = 0; i < na; i++)
		printf("%4d", a[i]);
}

int* GhepMang(int a[], int na, int b[], int nb)
{
	int i;
	int *c = (int*) malloc((na + nb) * sizeof(int));

	for(i = 0; i < na; i++)
		c[i] = a[i];
	for(i = 0; i < nb; i++)
		c[na + i] = b[i];

	return c;
}

int main()
{
	int *a = NULL, *b = NULL, *c = NULL, na, nb;
	
	NhapMang(&a, &na, &b, &nb);
	printf("\nMang A la: \n");
	XuatMang(a, na);

	printf("\nMang B la: \n");
	XuatMang(b, nb);

	c = GhepMang(a, na, b, nb);
	printf("\nMang C la: \n");
	XuatMang(c, na + nb);

	free(a);
	free(b);
	free(c);
	a = NULL;
	b = NULL;
	c = NULL;
	_getch();
	return 0;
}