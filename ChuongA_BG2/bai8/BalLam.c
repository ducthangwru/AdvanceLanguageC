#include "BaiLam.h"
#include <stdio.h>

void NhapMang(int a[], int *pn)
{
	int i;

	do
	{
		printf("Nhap vao so luong phan tu: ");
		scanf("%d", pn);
	} while (*(pn) <= 0 || *(pn) > 50);

	for (i = 0; i < *(pn); i++)
	{
		printf("Nhap phan tu a[%d] = ", i);
		scanf("%d", &a[i]);
	}

}

void XuatMang(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}

int KiemTra(int x)
{
	int i;

	if (x < 2)
		return 0;

	for (i = 2; i <= x / 2; i++)
		if (x%i == 0)
			return 0;

	return 1;
}

int* TimKiemSNT(int *a, int n)
{
	int i, vitri = -1;

	for (i = 0; i < n; i++)
	{
		if (KiemTra(a[i]) == 1)
		{
			vitri = i;
			break;
		}
	}

	if(vitri != -1)
		return &a[vitri];
	else
		return NULL;
}


