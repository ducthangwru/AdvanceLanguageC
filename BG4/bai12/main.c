#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char str[100] = "Anh yeu  Mai, yeu  Linh, yeu  Lan, yeu  Ngoc, yeu  Dung";
	char *p = NULL;

	p = strstr(str, "yeu");

	while(p != '\0')
	{
		strncpy(p, "ghet", 4);
		p = strstr(p + 1, "yeu");
	}

	printf("Chuoi tro thanh: %s", str);

	_getch();
	return 0;
}