#include <stdio.h>
#include <conio.h>

int main()
{
	int x = 3;
	int a[] = { 8, 2, 5 };
	int *p = &a[0];                  //con trỏ p trỏ đến địa chỉ phần tử a[0]
	printf("x = %d \n", x);			//in ra giá trị x = 3
	printf("a[0] = %d \n", *p);     //in ra giá trị a[0] = 8
	printf("\n\n");
	printf("main = %d \n", main);	//in ra địa chỉ hàm main
	printf("a = %d \n", a);			//in ra địa chỉ của a[0]
	printf("p = %d \n", p);			//in ra địa chỉ của a[0]
	_getch();
	return 0;
}
