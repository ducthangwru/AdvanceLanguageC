#include <stdio.h>
#include <stdlib.h>
#include "BaiLam.h"


void NhapMang(int **pa, int *pn)
{
	int i;
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", pn);

	*pa = (int*)malloc((*pn) * sizeof(int));

	for (i = 0; i < (*pn); i++)
	{
		printf("Phan tu [%d] = ", i);
		scanf("%d", &(*pa)[i]);
	}
}

void XuatMang(int a[], int n)
{
	int i = 0;
	for (; i < n; i++)
		printf("%5d", a[i]);

	printf("\n");
}


void BaiLam_v1(int a[], int na)
{
	int *b = NULL;
	int nb = 0;
	int i = 0;

	b = (int*)malloc(na * sizeof(int));
	
	for (i = 0; i < na; i++)
		if (a[i] % 2 != 0)
			b[nb++] = a[i];

	printf("\nMang b la: \n");
	XuatMang(b, nb);

	free(b);
	b = NULL;
	nb = 0;
}


void BaiLam_v2(int a[], int na)
{
	int *b = NULL;
	int nb = 0;

	int i;

	for (i = 0; i < na; i++)
		if (a[i] % 2 != 0)
			nb++;

	b = (int*)malloc(nb * sizeof(int));

	nb = 0;
	for (i = 0; i < na; i++)
		if (a[i] % 2 != 0)
			b[nb++] = a[i];

	printf("\nMang b la: \n");
	XuatMang(b, nb);

	free(b);
	b = NULL;
	nb = 0;
}