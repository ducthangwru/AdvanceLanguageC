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


void XoaPhanTuCuoiCung_cach1(int **pa, int *pn)
{
	int i = 0;
	int *b = NULL;

	(*pn)--;
	b = (int*)malloc((*pn) * sizeof(int));

	for (i = 0; i < (*pn); i++)
		b[i] = (*pa)[i];

	free(*pa);
	*pa = b;
}


void XoaPhanTuCuoiCung_cach2(int **pa, int *pn)
{
	(*pn)--;
	*pa = (int*)realloc(*pa, (*pn) * sizeof(int));
}


int main()
{
	int *a = NULL;
	int n = 0;

	NhapMang(&a, &n);

	printf("\nMang ban dau: \n");
	XuatMang(a, n);


	XoaPhanTuCuoiCung_cach1(&a, &n);


	printf("\nMang sau khi xoa phan tu cuoi cung: \n");
	XuatMang(a, n);


	free(a);
	a = NULL;

	_getch();
	return 0;
}
