#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void NhapMang(int **pa, int *pn)
{
	int i;
	
	do
	{
		printf("Nhap so phan tu: ");
		scanf("%d", &(*pn));
	}
	while(*pn <= 0);

	*pa = (int*) malloc ((*pn) * sizeof(int));

	for(i = 0; i < *pn; i++)
	{
		printf("Nhap phan tu thu %d  ", i);
		scanf("%d", &(*pa)[i]);
	}
}

void XuatMang(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf("%4d", a[i]);
}

void CatMang(int a[], int n)
{
	int *b = NULL, *c = NULL, i, vitri, nb = 0, nc = 0;
	do
	{
		printf("\nNhap vi tri muon cat: ");
		scanf("%d", &vitri);
	}
	while(vitri < 0 || vitri >= n);

	b = (int*) malloc ((vitri + 1) * sizeof(int));
	c = (int*) malloc ((n - vitri - 1) * sizeof(int));

	for(i = 0; i < vitri + 1; i++)
	{
		b[nb] = a[i];
		nb++;
	}
		
	for(i = vitri + 1; i < n; i++)
	{
		c[nc] = a[i];
		nc++;
	}

	printf("\nMang B la:\n");
	XuatMang(b, nb);

	printf("\nMang C la:\n");
	XuatMang(c, nc);

	
	free(b);
	free(c);
	b = NULL;
	c = NULL;
}

int main()
{
	int *a = NULL, n;

	NhapMang(&a, &n);
	XuatMang(a, n);
	CatMang(a, n);
	
	_getch();
	return 0;
}