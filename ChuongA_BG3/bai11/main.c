#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void NhapMang(int **pa, int *pn)
{
	int i;
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", pn);

	*pa = (int*)malloc((*pn) * sizeof(int));

	for (i = 0; i < (*pn); i++)
	{
		printf("Phan tu [%d] = ", i);
		scanf("%d", &(*pa)[i]);
	}
}

void XuatMang(int a[], int n)
{
	int i = 0;
	for (; i < n; i++)
		printf("%5d", a[i]);

	printf("\n");
}


void XoaPhanTu_cach1(int **pa, int *pn, int vt)
{
	int i = 0;
	int *b = NULL;
	if (vt < 0 || vt >= (*pn)) return;

	(*pn)--;

	for (i = vt; i < (*pn); i++)
		(*pa)[i] = (*pa)[i+1];

	b = (int*)malloc((*pn) * sizeof(int));

	for (i = 0; i < (*pn); i++)
		b[i] = (*pa)[i];

	free(*pa);
	*pa = b;
}


void XoaPhanTu_cach2(int **pa, int *pn, int vt)
{
	int i = 0;
	if (vt < 0 || vt >= (*pn)) return;

	(*pn)--;

	for (i = vt; i < (*pn); i++)
		(*pa)[i] = (*pa)[i+1];

	*pa = (int*)realloc(*pa, (*pn) * sizeof(int));
}


int main()
{
	int *a = NULL;
	int n = 0;
	int vtXoa = 0;

	NhapMang(&a, &n);

	printf("\nMang ban dau: \n");
	XuatMang(a, n);

	printf("\nNhap vao vi tri xoa: ");
	scanf("%d", &vtXoa);


	XoaPhanTu_cach2(&a, &n, vtXoa);


	printf("\nMang sau khi xoa: \n");
	XuatMang(a, n);


	free(a);
	a = NULL;

	_getch();
	return 0;
}
