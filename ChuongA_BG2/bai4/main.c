#include <stdio.h>
#include <conio.h>

void NhapMang(int a[], int *pn)
{
	int i;
	
	do
	{
		printf("Nhap so phan tu: ");
		scanf("%d", pn);
	}
	while (*pn <= 0 || *pn > 50);

	for(i = 0; i < *pn; i++)
	{
		printf("Nhap phan tu a[%d] = ", i);
		scanf("%d", (a + i));
	}
}

void XuatMang(int a[], int n)
{
	int *p = NULL;
	
	for(p = a; p < (a + n); p++)
	{
		printf("%4d", *p);
	}
}

int TinhTongChan(int a[], int n)
{
	int sum = 0, *p = NULL;

	for(p = a; p < (a+n); p++)
	{
		if (*p % 2 == 0)
			sum += *p;
	}
	return sum;
}

int main()
{
	int a[50], n;

	NhapMang(a, &n);
	XuatMang(a, n);
	printf("\nTong cac phan tu chan la: %d", TinhTongChan(a, n));

	getch();
	return 0;
}