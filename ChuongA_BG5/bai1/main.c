#include <stdio.h>
#include <conio.h>

typedef struct
{
	int tuSo;
	int mauSo;
} PhanSo;

void NhapPS(PhanSo *p)
{
	printf("Nhap tu so: ");
	scanf("%d", &p->tuSo);

	printf("Nhap mau so: ");
	scanf("%d", &p->mauSo);
}

void XuatPS(PhanSo ps)
{
	printf("%d/%d\n\n\n", ps.tuSo, ps.mauSo);
}

int main()
{
	PhanSo ps[2];
	int i;
	float check;

	for(i = 0; i < 2; i++)
	{
		printf("Nhap phan so thu %d: \n", i+1);
		NhapPS(&ps[i]);

		printf("Phan so thu %d vua nhap la: ", i+1);
		XuatPS(ps[i]);
	}

	check = ps[1].mauSo * ((float) ps[0].tuSo / ps[0].mauSo) - ps[0].mauSo * ((float)ps[1].tuSo / ps[1].mauSo);

	if(check > 0)
		printf("\nPhan so %d/%d > %d/%d", ps[0].tuSo, ps[0].mauSo, ps[1].tuSo, ps[1].mauSo);
	else if (check < 0)
		printf("\nPhan so %d/%d < %d/%d", ps[0].tuSo, ps[0].mauSo, ps[1].tuSo, ps[1].mauSo);
	else
		printf("\nPhan so %d/%d = %d/%d", ps[0].tuSo, ps[0].mauSo, ps[1].tuSo, ps[1].mauSo);

	_getch();
	return 0;
}