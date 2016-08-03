#include <stdio.h>
#include <conio.h>
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

	node -> data = data;
	node -> pNext = NULL;

	return node;
}

void AddNode(DSLK *ds, int data)
{
	NODE *node = TaoNode(data);

	if(ds->pHead == NULL)
	{
		ds->pHead = ds->pTail = node;
	}
	else
	{
		ds->pTail->pNext = node;
		ds->pTail = node;
	}
}

void NhapDSLK(DSLK *ds)
{
	int data, n, i;

	do
	{
		printf("Nhap so phan tu: ");
		scanf("%d", &n);
	}
	while(n <= 0);

	for(i = 0; i < n; i++)
	{
		printf("Nhap phan tu a[%d] = ", i);
		scanf("%d", &data);
		AddNode(ds, data);
	}
}

void XuatDSLK(DSLK ds)
{
	NODE *p;

	printf("\n");
	for(p = ds.pHead; p != NULL; p = p->pNext)
	{
		printf("%4d", p->data);
	}
}

void ThemDauDS(DSLK *ds)
{
	int data;
	NODE *newNode;

	printf("\nnhap phan tu can them: ");
	scanf("%d", &data);
	newNode = TaoNode(data);
	
	newNode->pNext = ds->pHead;
	ds->pHead = newNode;
}

void SapXep(DSLK *ds)
{
	NODE *p, *q;
	int tam;

	for(p = ds->pHead; p != ds->pTail; p = p->pNext)
	{
		for(q = p->pNext; q != NULL; q = q->pNext)
		{
			if(p->data > q->data)
			{
				tam = p->data;
				p->data = q->data;
				q->data = tam;
			}
		}
	}
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

int main()
{
	DSLK ds;

	KhoiTao(&ds);
	NhapDSLK(&ds);
	XuatDSLK(ds);
	ThemDauDS(&ds);
	XuatDSLK(ds);
	SapXep(&ds);
	XuatDSLK(ds);
	GiaiPhongBoNho(&ds);

	getch();
	return 0;
}