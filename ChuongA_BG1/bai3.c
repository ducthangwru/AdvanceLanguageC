#include <stdio.h>
#include <conio.h>

void HoanDoi(int *px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

int main()
{
	int x, y;
	printf("Nhap vao 2 so nguyen: ");
	scanf("%d %d", &x, &y);
	printf("x = %d va y = %d \n\n", x, y);

	HoanDoi(&x, &y);
	printf("x = %d va y = %d \n\n", x, y);
	_getch();
	return 0;
}
