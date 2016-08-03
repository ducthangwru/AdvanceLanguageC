#include <stdio.h>
#include <conio.h>
#include <math.h>

typedef struct
{
	float x;
	float y;
} ToaDo;

typedef struct
{
	ToaDo td[3];
} TamGiac;

void NhapTamGiac(TamGiac *p)
{
	int i;
	printf("Nhap 3 dinh cua tam giac: \n");
	for(i = 0; i < 3; i++)
	{
		printf("Nhap toa do dinh %d: ", i+1);
		printf("x = ");
		scanf("%f", &p->td[i].x);
		printf("y = ");
		scanf("%f", &p->td[i].y);
	}
}

void XuatTamGiac(TamGiac tg)
{
	printf("Tam Giac vua nhap co toa do: A(%f,%f), B(%f,%f), C(%f,%f)", tg.td[0].x, tg.td[0].y, tg.td[1].x, tg.td[1].y, tg.td[2].x, tg.td[2].y);
}

float TinhKhoangCach(ToaDo toado1, ToaDo toado2)
{
	return sqrt(pow(toado1.x - toado2.x, 2) + pow(toado1.y - toado2.y, 2));
}

float TinhChuVi(TamGiac tg)
{
	float chuVi = 0.0;

	chuVi = TinhKhoangCach(tg.td[0], tg.td[1]) + TinhKhoangCach(tg.td[1], tg.td[2]) + TinhKhoangCach(tg.td[2], tg.td[0]);

	return chuVi;
}

int main()
{
	TamGiac tg;
	NhapTamGiac(&tg);
	XuatTamGiac(tg);

	printf("Chu vi tam giac la: %f", TinhChuVi(tg));
	_getch();
	return 0;
}