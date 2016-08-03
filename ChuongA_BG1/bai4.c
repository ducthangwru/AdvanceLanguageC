#include <stdio.h>
#include <conio.h>

int main()
{
	int x = 5;
	int *p1 = &x; //con trỏ p1 lưu địa chỉ biến x
	int *p2 = &x; //con trỏ p2 lưu địa chỉ biến x
	*p1 = 7;	  //đặt giá trị của con trỏ p1 = 7
	*p2 = 12;	  //đặt giá trị của con trỏ p2 = 12
	printf("x = %d \n", x);  //chương trình sẽ in ra số 12 vì con trỏ p2 cập nhật lại giá trị là 12.
	_getch();
	return 0;
}
