#include <stdio.h>
#include <conio.h>

void my_strcpy (char *dest, char *src) 
{
	while(*dest)
	{
		*dest = *src;
		dest++;
		src++;
	}
}

void my_strcat (char *dest, char *src) 
{
	while(*dest != '\0')
		dest++;

	my_strcpy(dest, src);

}

int main()
{
	char dest[100], dest2[100]= "", src[100];

	printf("Nhap chuoi dest: ");
	gets(dest);

	my_strcpy(src, dest);

	printf("\n Chuoi src duoc copy la: %s\n", src);

	printf("Nhap chuoi dest: ");
	gets(dest2);

	printf("Nhap chuoi src: ");
	gets(src);

	my_strcat(dest2, src);

	printf("\nChuoi duoc noi la: %s", dest2);

	_getch();
	return 0;
}