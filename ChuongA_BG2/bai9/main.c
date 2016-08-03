#include <stdio.h>
#include <conio.h>

void NhapMang(int a[], int *pn)
{
	int i;

	do
	{
		printf("Nhap vao so luong phan tu: ");
		scanf("%d", pn);
	} while (*(pn) <= 0 || *(pn) > 100);

	for (i = 0; i < *(pn); i++)
	{
		do
		{
			printf("Nhap phan tu thu %d trong khoang [-500,500]:  ", i);
			scanf("%d", &a[i]);
		} while (a[i] > 500 || a[i] < -500);
	}

}

void XuatMang(int a[], int n)
{
	int i;
	printf("Mang vua nhap la: \n");
	for (i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}
}


int main()
{
	int a[100], MangDem[1001] = { 0 }, i, j, n, max, min;
	int *MangLuu = MangDem + 500, *pViTri = NULL;

	NhapMang(a, &n);
	XuatMang(a, n);

	max = 0;
	min = 1000;

	for (i = 0; i < n; i++)
	{
		MangLuu[a[i]]++;
	}

	for (i = -500; i < 501; i++)
	{
		if(*(MangLuu + i)  > max)
			max = *(MangLuu + i);
		else if(*(MangLuu + i ) < min && *(MangLuu + i) > 0)
			min = *(MangLuu + i);
	}

	for (i = -500; i < 501; i++)
	{
		if (*(MangLuu + i) == max)
			printf("\nSo %d xuat hien nhieu nhat %d lan!", i, max);
		else if (*(MangLuu + i) == min)
			printf("\nSo %d xuat hien it nhat %d lan!", i, min);
	}

	_getch();
	return 0;
}

