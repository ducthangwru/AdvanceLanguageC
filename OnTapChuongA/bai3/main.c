#include <stdio.h>
#include <conio.h>
#include <string.h>

void DocGhiFile(char *s)
{
	int dem = 0, i = -1;
	FILE *fin = fopen("input.txt", "rt");
	FILE *fout = fopen("output.txt", "wt");

	if(fin == NULL)
		printf("Khong mo duoc tep tin!");
	else
	{
		while(!feof(fin))
		{
			fgets(s, 100, fin);
			fprintf(fout,"%s", s);
		}
	}

	fclose(fin);
	fclose(fout);
}

int main()
{
	char s[100];
	char *str = NULL;

	DocGhiFile(s);

	getch();
	return 0;
}