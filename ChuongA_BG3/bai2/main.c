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

void DaoMang(int *a, int n)
{
	int temp, i;

	for( i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

int main()
{
	int *a = NULL, n;

	NhapMang(&a, &n);

	printf("\nMang vua nhap la: \n");
	XuatMang(a, n);

	printf("\nMang Dao la: \n");
	DaoMang(a, n);
	XuatMang(a, n);

	free(a);
	a = NULL;

	getch();
	return 0;
}