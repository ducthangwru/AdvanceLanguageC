#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "BaiLam.h"


int main()
{
	int *a = NULL;
	int na = 0;

	NhapMang(&a, &na);
	XuatMang(a, na);


	BaiLam_v1(a, na);
	// BaiLam_v2(a, na);


	free(a);
	a = NULL;

	_getch();
	return 0;
}
