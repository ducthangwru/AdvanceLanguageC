#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct 
{
	int cot[20];
} MangMotChieu; 

typedef struct
{
	MangMotChieu *dong;
	int nDong, nCot;
} MangHaiChieu; 

void NhapMang(MangHaiChieu *p)
{
	int i, j;

	do
	{
		printf("Nhap so dong: ");
		scanf("%d", &p->nDong);

		printf("Nhap so cot: ");
		scanf("%d", &p->nCot);
	}
	while(p->nCot <= 0 || p->nDong <= 0);

	p->dong = (MangMotChieu*) malloc (p->nDong * sizeof(MangMotChieu));

	for(i = 0; i < p->nDong; i++)
		for(j = 0; j < p->nCot; j++)
		{
			printf("Nhap phan tu a[%d][%d] = ", i, j);
			scanf("%d", &p->dong[i].cot[j]);
		}
}

void XuatMang(MangHaiChieu mang)
{
	int i, j;

	printf("Mang vua nhap la: \n");
	for(i = 0; i < mang.nDong; i++)
	{
		for(j = 0; j < mang.nCot; j++)
			printf("%4d", mang.dong[i].cot[j]);

		printf("\n");
	}
}

int TinhTong(MangHaiChieu mang)
{
	int sum = 0, i, j;

	for(i = 0; i < mang.nDong; i++)
		for(j = 0; j < mang.nCot; j++)
			sum += mang.dong[i].cot[j];

	return sum;
}


int main()
{
	MangHaiChieu mang;
	
	NhapMang(&mang);
	XuatMang(mang);

	printf("\nTong cac phan tu trong mang la: %d", TinhTong(mang));

	free(mang.dong);
	mang.dong = NULL;
	_getch();
	return 0;
}