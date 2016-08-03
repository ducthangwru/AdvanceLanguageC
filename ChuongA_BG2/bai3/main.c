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
		scanf("%d", &a[i]);
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

void InMangNguoc_cach1(int a[], int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%4d", a[i]);
	}
}

void InMangNguoc_cach2(int a[], int n)
{
	int i;
	
	printf("\n");
	for (i = n - 1; i >= 0; i--)
	{
		printf("%4d", *(a+i));
	}
}

void InMangNguoc_cach3(int a[], int n)
{
	int *p = NULL;

	printf("\n");
	for (p = a + n-1; p >= a; p--)
	{
		printf("%4d", *p);
	}
}

int main()
{
	int a[50], n;

	NhapMang(a, &n);

	printf("Mang vua nhap la: \n");
	XuatMang(a, n);

	printf("\nMang dao la: \n");
	InMangNguoc_cach1(a, n);
	InMangNguoc_cach2(a, n);
	InMangNguoc_cach3(a, n);
	getch();
	return 0;
}