#include <stdio.h>
#include <conio.h>

int main()
{
	int x, y, *px = &x, *py = &y;
	printf("Nhap 2 so nguyen: ");
	scanf("%d%d", px, py);

	printf("Tong 2 so la: %d",*px + *py);
	_getch();
	return 0;
}
