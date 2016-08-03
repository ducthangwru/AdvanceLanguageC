#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *pNext;
};
typedef struct Node NODE;

struct dslk
{
	NODE *pHead;
	NODE *pTail;
};
typedef struct dslk DSLK;

void KhoiTao(DSLK *ds)
{
	ds->pHead = ds->pTail = NULL;
}

NODE* TaoNode(int data)
{
	NODE *node = (NODE*) malloc (sizeof(NODE));
	node->data = data;
	node->pNext = NULL;

	return node;
}

void AddNode(DSLK *ds, int data)
{
	NODE *node = TaoNode(data);
	if(ds->pHead == NULL)
		ds->pHead = ds->pTail = node;
	else
	{
		ds->pTail->pNext = node;
		ds->pTail = node;
	}
}

void NhapDSLK(DSLK *ds)
{
	int x;
	while(1)
	{
		printf("Nhap phan tu (Nhap 0 de thoat): ");
		scanf("%d", &x);

		if(x == 0)
			break;

		AddNode(ds, x);
	}
}

void XuatDSLK(DSLK ds)
{
	NODE *p;
	
	for(p = ds.pHead; p != NULL; p = p->pNext)
	{
		printf("%4d", p->data);
	}
}

int DemSoLuong(DSLK ds)
{
	int dem = 0;
	NODE *p;

	for(p = ds.pHead; p != NULL; p = p->pNext)
		dem++;
	
	return dem;
}

void GiaiPhongBoNho(DSLK *ds)
{
	NODE *p;

	while(ds->pHead != NULL)
	{
		p = ds->pHead;
		ds->pHead = ds->pHead->pNext;
		free(p);
	}
	
	ds->pHead = ds->pTail = NULL;
}

void XoaPhanTu(DSLK *ds)
{
	NODE *p = ds->pHead, *k = ds->pHead;
	int vitri, dem = 0;

	do
	{
		printf("\nNhap vi tri can xoa: ");
		scanf("%d", &vitri);
	}
	while (vitri < 0 || vitri > DemSoLuong(*ds) - 1);

	if (vitri == 0)
	{
		p = ds->pHead;
		ds->pHead = ds->pHead->pNext;
		free(p);
	}
	else if (vitri == DemSoLuong(*ds) - 1)
	{
		while(k != NULL)
		{
			if(k == ds->pTail)
			{
				ds->pTail = p;
				ds->pTail->pNext = NULL;
				free(k);
				break;
			}

			p = k;
			k = k->pNext;
		}
	}
	else
	{
		for(k = ds->pHead; k != NULL; k = k->pNext, dem++)
		{
			if(dem == vitri)
			{
				p->pNext = k->pNext;
				free(k);
				break;
			}

			p = k;
		}
	}
}

int main()
{
	DSLK ds;

	KhoiTao(&ds);
	NhapDSLK(&ds);

	printf("DSLK vua nhap la: \n");
	XuatDSLK(ds);

	printf("\nDSLK co %d phan tu", DemSoLuong(ds));
	XoaPhanTu(&ds);
	XuatDSLK(ds);
	GiaiPhongBoNho(&ds);

	getch();
	return 0;
}