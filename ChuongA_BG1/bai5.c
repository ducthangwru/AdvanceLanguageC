#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b, *pa = &a, *pb = &b;
	char chon, chon2;

	do
    {
        system("CLS");
        printf("Nhap 2 so: ");
        scanf("%d%d", pa, pb);

        printf("1. Phep cong \n");
        printf("2. Phep tru \n");
        printf("3. Phep nhan \n");
        printf("4. Phep chia \n");
        printf("5. Phep chia lay du \n");

        printf("Moi ban chon phep tinh: ");
        fflush(stdin);
        scanf("%c", &chon);

        switch (chon)
        {
        case '1':
            printf("Tong 2 so la: %d", *pa + *pb);
            break;
        case '2':
            printf("Hieu 2 so la: %d", *pa - *pb);
            break;
        case '3':
            printf("Tich 2 so la: %d", *pa * *pb);
            break;
        case '4':
            printf("Thuong 2 so la: %d", (float)*pa / *pb);
            break;
        case '5':
            printf("Chia lay du 2 so: %d", *pa % *pb);
            break;
        default:
            printf("Nhap sai!");
        }

        printf("\n Ban co muon tinh tiep khong? \n Y: Co \n N: Khong\n");
        fflush(stdin);
        scanf("%c", &chon2);
    }
    while(chon2 == 'Y' || chon2 == 'y');
	_getch();
	return 0;
}
