#include <stdio.h>
#include <conio.h>

void NhapMang(int *a, int *pn)
{
	int i = 0;
	printf("Nhap so luong phan tu: ");
	scanf("%d", pn);

	for (i = 0; i < (*pn); i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int *a, int n)
{
	int i;

	printf("\nGia tri trong mang: \n");

	for (i = 0; i < n; i++)
		printf("%9d", a[i]);

	printf("\nDia chi tuong ung: \n");

	for (i = 0; i < n; i++)
		printf("%9d", &a[i]);
	
	printf("\n\n");
}


int* TimKiem(int *a, int n, int GiaTri)
{
	int i = 0;
	for (; i < n; i++)
		if (a[i] == GiaTri)
			return &a[i];

	return NULL;
}


int main()
{
	int a[] = { 5, 9, 1, 6, 7, 3, 7 };
	int n = sizeof(a) / sizeof(*a);

	int GiaTriTimKiem = 0;
	int *p = NULL;

	XuatMang(a, n);

	printf("Nhap vao gia tri tim kiem: ");
	scanf("%d", &GiaTriTimKiem);

	p = TimKiem(a, n, GiaTriTimKiem);

	if (p != NULL)
		printf("Vi tri dau tien cua phan tu la: %d \n", p - a);
	else
		printf("Khong tim thay trong mang \n");

	_getch();
	return 0;
}