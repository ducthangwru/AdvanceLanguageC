#include <stdio.h>
#include <conio.h>
int main()
{
	int a, b, c, max;
	int *pa = &a, *pb = &b, *pc = &c;
	printf("Nhap 3 so nguyen: ");
	scanf("%d%d%d", pa, pb, pc);

	max = a;

	if (max < b)
		max = b;

	if (max < c)
		max = c;

	printf("So lon nhat trong 3 so la:  %d ", max);

	_getch();
	return 0;
}
