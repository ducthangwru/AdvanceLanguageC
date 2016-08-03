#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void NhapMang(int **pa, int *pn)
{
	int i;

	do
	{
		printf("Nhap so phan tu: ");
		scanf("%d", pn);
	}
	while (*pn <= 0);

	*pa = (int*) malloc (*pn * sizeof(int));

	for(i = 0; i < *pn; i++)
	{
		printf("Nhap phan tu a[%d] = ", i);
		scanf("%d", &(*pa)[i]);
	}
}

void XuatMang(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%4d", a[i]);
}

int TinhTong(int *a, int n)
{
	int i, sum = 0;
	for (i = 0; i < n; i++)
		sum += a[i];

	return sum;
}

int main()
{
	int *a = NULL, n;

	NhapMang(&a, &n);
	XuatMang(a, n);
	printf("\nTong cac phan tu la: %d", TinhTong(a, n));

	free(a);
	a = NULL;

	getch();
	return 0;
}