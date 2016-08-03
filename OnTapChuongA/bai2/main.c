#include <conio.h>
#include <stdio.h>

int main()
{
	FILE *fin = fopen("input.txt", "rt");
	FILE *fout = fopen("output.txt", "wt");
	int x[50], i = -1, length, sum = 0;

	if (fin == NULL)  
	{
		printf ("Khong mo duoc file input.txt");
		_getch();
		return 0;
	}

	while(!feof(fin))
	{
		i++;
		fscanf(fin, "%d", &x[i]);
	}
	
	length = i;

	for(i = 0; i < length; i++)
	{
		fprintf(fout,"%d \n", x[i]);
		sum += x[i];
	}

	fprintf(fout,"%d", sum);

	fclose(fin);
	fclose(fout);
	getch();
	return 0;
}