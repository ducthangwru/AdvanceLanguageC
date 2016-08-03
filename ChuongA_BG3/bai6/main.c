#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void NhapMang(int **pa, int *pn)
{
	int i;

	do
	{
		printf("Nhap so phan tu: ");
		scanf("%d", pn);
	}
	while (*pn <= 0);

	*pa = (int*) malloc (*pn * sizeof(int));

	for(i = 0; i < *pn; i++)
	{
		printf("Nhap phan tu a[%d] = ", i);
		scanf("%d", &(*pa)[i]);
	}
}

void XuatMang(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%4d", a[i]);
}

int KtSNT(int x)
{
	int i;

	if(x < 2)
		return 0;
	
	for(i = 2; i <= x/2; i++)
		if(x % i == 0)
			return 0;
	
	return 1;
}

int DemSNT(int *a, int n)
{
	int dem = 0, i;

	for(i = 0; i < n; i++)
	{
		if(KtSNT(a[i]) == 1)
			dem++;
	}

	return dem;
	
}

int main()
{
	int *a = NULL, n;

	NhapMang(&a, &n);
	printf("\nMangvua nhap la: \n");
	XuatMang(a, n);
	printf("\nMang co %d SNT", DemSNT(a, n));

	free(a);
	a = NULL;

	getch();
	return 0;
}