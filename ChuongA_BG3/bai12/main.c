#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int** NhapMang(int *pnDong, int *pnCot)
{
	int **a = NULL;
	int i, j;

	printf("Nhap so luong dong: ");
	scanf("%d", pnDong);

	printf("Nhap so luong cot: ");
	scanf("%d", pnCot);

	// CẤP PHÁT ĐỘNG
	a = (int**)calloc(*pnDong, sizeof(int*));

	for (i = 0; i < (*pnDong); i++)
		a[i] = (int*)calloc(*pnCot, sizeof(int));


	// NHẬP MẢNG
	for (i = 0; i < (*pnDong); i++)
		for (j = 0; j < (*pnCot); j++)
		{
			printf("Nhap phan tu [%d][ %d ] = ", i, j);
			scanf("%d", &a[i][j]);
		}

	return a;
}


void XuatMang(int **a, int nDong, int nCot)
{
	int i, j;
	for (i = 0; i < nDong; i++)
	{
		for (j = 0; j < nCot; j++)
			printf("%5d", a[i][j]);

		printf("\n");
	}
}


int TinhTongDuongBien(int **a, int nDong, int nCot)
{
	int i, j;
	int tong = 0;

	for (i = 0; i < nDong; i++)
		for (j = 0; j < nCot; j++)
			if (i == 0 || j == 0 || i == nDong - 1 || j == nCot - 1)
				tong += a[i][j];

	return tong;
}


int main()
{
	int **a = NULL;
	int nDong = 0, nCot = 0;
	int tong = 0;

	int i, j;


	a = NhapMang(&nDong, &nCot);
	XuatMang(a, nDong, nCot);


	tong = TinhTongDuongBien(a, nDong, nCot);
	printf("\nTong cac phan tu tren duong bien: %d \n", tong);


	// GIẢI PHÓNG BỘ NHỚ
	for (i = 0; i < nDong; i++)
		free(a[i]);

	free(a);
	a = NULL;

	nDong = nCot = 0;

	_getch();
	return 0;
}