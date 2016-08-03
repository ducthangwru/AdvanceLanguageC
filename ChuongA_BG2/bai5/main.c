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

void DaoMang_cach1(int a[], int n)
{
	int i, tam;

	for(i = 0; i < n / 2; i++)
	{
		tam = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tam;
	}
}

void DaoMang_cach2(int a[], int n)
{

	int *pLeft = a, *pRight = a + n - 1;
	int temp;

	DaoMang_cach1(a, n);
	for (; pLeft < pRight; pLeft++, pRight--)
	{
		temp = *pLeft;
		*pLeft = *pRight;
		*pRight = temp;
	}
}

int main()
{
	int a[50], n;

	NhapMang(a, &n);
	printf("\nMang vua nhap la: \n");
	XuatMang(a, n);
	
	printf("\nMang Dao la: \n");
	DaoMang_cach1(a, n);
	XuatMang(a, n);
	printf("\n");
	DaoMang_cach2(a, n);
	XuatMang(a, n);

	getch();
	return 0;
}