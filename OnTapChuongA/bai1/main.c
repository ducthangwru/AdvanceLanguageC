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
	while(*pn <= 0);

	*pa = (int*) malloc (*pn * sizeof(int));

	for(i = 0; i < *pn; i++)
	{
		printf("Nhap phan tu [%d] = ", i);
		scanf("%d", &(*pa)[i]);
	}
}

void XuatMang(int *a, int n)
{
	int i;

	printf("Mang vua nhap la: ");
	for(i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}

int SoLan(int *a, int n, int x)
{
	int i, dem = 0;

	for(i = 0; i < n; i++)
	{
		if(a[i] == x)
			dem++;
	}
	return dem;
}

void SoLanMax(int *a, int n)
{
	int i, max = 0, temp;
	for(i = 0; i < n; i++)
	{
		if(SoLan(a, n, a[i]) > max)
		{
			max = SoLan(a, n, a[i]);
			temp = a[i];
		}
	}

	printf("\n%d xuat hien nhieu nhat %d lan", temp, max);
}

int main()
{
	int *a = NULL, n;

	NhapMang(&a, &n);
	XuatMang(a, n);
	SoLanMax(a, n);

	free(a);
	a = NULL;
	
	getch();
	return 0;
}