#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char s[100], *p = NULL;
	int dem = 0;
	
	printf("Nhap chuoi: ");
	gets(s);

	for(p = s; p != '\0';)
	{
		p = strstr(p + 1, "hoc");
		dem++;
			
	}

	printf("Chuoi co %d tu hoc ", dem);

	_getch();
	return 0;
}