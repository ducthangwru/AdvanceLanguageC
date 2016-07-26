#include <conio.h>
#include <stdio.h>
#include "BaiLam.h"


int main()
{
	int a[50], n, i, dem = 0,  *p = NULL;

	NhapMang(a, &n);
	XuatMang(a, n);

	//Xóa các SNT
	for(i = 0; i < n; i++)
	{
		if (TimKiemSNT(a, n) != NULL)
		{
			p = TimKiemSNT(a, n);
			*p = 0;
		}
	}
	
	printf("\nMang thay doi la: \n");
	for (i = 0; i < n; i++)
		printf("%4d", a[i]);

	_getch();
	return 0;
}



