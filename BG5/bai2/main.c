#include <stdio.h>
#include <conio.h>

typedef struct
{
	char hoTen[100];
	float DiemTB;
} HocSinh;

void NhapHS_cach1(HocSinh *p)
{
	printf("Nhap ho va ten: ");
	fflush(stdin);
	gets(p->hoTen);
	
	printf("Nhap diem TB: ");
	scanf("%f", &p->DiemTB);
}

void NhapHS_cach2(HocSinh *p)
{
	printf("Nhap ho va ten: ");
	fflush(stdin);
	gets((*p).hoTen);
	
	printf("Nhap diem TB: ");
	scanf("%f", &(*p).DiemTB);
}

HocSinh NhapHS_cach3()
{
	HocSinh hs;
	printf("Nhap ho va ten: ");
	fflush(stdin);
	gets(hs.hoTen);
	
	printf("Nhap diem TB: ");
	scanf("%f", &hs.DiemTB);

	return hs;
}

void XuatHS(HocSinh hs[3])
{
	int i;
	for(i = 0; i < 3; i++)
	{
		printf("\nThong tin hoc sinh thu %d \n", i+1);
		printf("Ho ten: %s", hs[i].hoTen);
		printf("\nDiem TB: %f", hs[i].DiemTB);
		printf("\n---------------------------\n");
	}
}

int main()
{
	HocSinh hs[3];
	int i;

	printf("Nhap hoc sinh thu 1: \n");
	NhapHS_cach1(&hs[0]);

	printf("\n\nNhap hoc sinh thu 2: \n");
	NhapHS_cach2(&hs[1]);
	
	printf("\n\nNhap hoc sinh thu 3: \n");
	hs[2] = NhapHS_cach3();

	XuatHS(hs);

	_getch();
	return 0;
}