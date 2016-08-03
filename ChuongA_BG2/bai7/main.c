#include <stdio.h>
#include <conio.h>

void NhapMang(int *a, int *pn)
{
	int i = 0;
	printf("Nhap so luong phan tu: ");
	scanf("%d", pn);

	for (i = 0; i < (*pn); i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int *a, int n)
{
	int i;

	printf("\nGia tri trong mang: \n");

	for (i = 0; i < n; i++)
		printf("%9d", a[i]);

	printf("\nDia chi tuong ung: \n");

	for (i = 0; i < n; i++)
		printf("%9d", &a[i]);

	printf("\n\n");
}


int ktSNT(int x)
{
	int i;
	if (x < 2)
		return 0;

	for (i = 2; i < x; i++)
		if (x % i == 0)
			return 0;

	return 1;
}


int* TimKiemSNT(int *a, int n)
{
	int i = 0;
	for (; i < n; i++)
		if (ktSNT(a[i]))
			return &a[i];

	return NULL;
}


int main()
{
	int a[20];
	int n = 0;
	int *p = NULL;

	NhapMang(a, &n);
	XuatMang(a, n);

	p = TimKiemSNT(a, n);
	printf("Dia chi ket qua: %d \n", p);

	_getch();
	return 0;
}