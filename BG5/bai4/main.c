#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
	int a[20];
	int n;
} MangMotChieu;

void NhapMang(MangMotChieu *p)
{
	int i;
	do
	{
		printf("Nhap so luong phan tu: ");
		scanf("%d", &p->n);
	}
	while(p->n <= 0);

	for(i = 0; i < p->n; i++)
	{
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d", &p->a[i]);
	}
}

void XuatMang(MangMotChieu mang)
{
	int i;
	printf("Mang vua nhap la: \n");
	for(i = 0; i < mang.n; i++)
	{
		printf("%4d", mang.a[i]);
	}
}

int SoChinhPhuong(int x)
{
	float check = sqrt((float)x);
	if (check  == (int)check)
		return 1;
	else
		return 0;
}

void InSoChinhPhuong(MangMotChieu mang)
{
	int i;

	printf("\nCac So chinh phuong la: \n");
	for(i = 0; i < mang.n; i++)
	{
		if(SoChinhPhuong(mang.a[i]) == 1)
			printf("%4d", mang.a[i]);
	}
}

int main()
{
	MangMotChieu mang;

	NhapMang(&mang);
	XuatMang(mang);
	InSoChinhPhuong(mang);

	_getch();
	return 0;
}