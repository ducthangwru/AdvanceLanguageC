#include<stdio.h>
#include <conio.h>

void NhapMang(int a[], int *pn)
{
    int i;

    do
    {
        printf("Nhap vao so luong phan tu: ");
        scanf("%d", pn);
    }
    while(*(pn) <= 0 || *(pn) > 100);

    for(i = 0; i < *(pn); i++)
    {
        do
        {
            printf("Nhap phan tu thu %d trong khoang [-100,100]:  ", i);
            scanf("%d", &a[i]);
        }
        while(a[i] > 100 || a[i] < -100);
    }

}

void XuatMang(int a[], int n)
{
    int i;
    printf("Mang vua nhap la: \n");
    for(i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
}

void SapXep(int a[], int n)
{
    int MangDem[201]={0}, i, j;
	int *MangLuu = MangDem + 100;

    for(i = 0; i < n; i++)
        MangLuu[a[i]]++;

    printf("\nMang da sap xep: \n");

    for(i = - 100; i < 101; i++)
    {
        for(j = 0; j < *(MangLuu + i); j++)
        {
            printf("%5d", i);
        }
    }
}

int main()
{
    int a[100], n, i;

    NhapMang(a, &n);
    XuatMang(a, n);

    SapXep(a, n);

	_getch();
    return 0;
}
