#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

char* DinhDang(char *str)
{
	int i, j, dem = 0;

	char *s = (char*) malloc (strlen(str) + strlen(str) / 3);

	s = str;

	for(i = strlen(str) - 1; i >= 0; i--)
	{
		dem++;
		if(dem % 3 == 0)
		{
			for(j = strlen(str) + 1; j > i; j--)
				s[j] = str[j - 1];

			s[i] = ',';
		}
	}
	return s;
}

int main()
{
	char s[100], *str = NULL;
	
	printf("Nhap so: ");
	gets(s);

	str = DinhDang(s);

	printf("So duoc dinh dang la: %s", str);

	
	_getch();
	return 0;
}