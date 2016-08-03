#include <stdio.h>
#include <conio.h>
#include "BaiLam.h"

int main()
{
	DSLK ds;

	KhoiTao(&ds);
	NhapDSLK(&ds);
	XuatDSLK(ds);
	printf("DSLK co %d phan tu", Dem(ds));
	GiaiPhongBoNho(&ds);
	
	getch();
	return 0;
}