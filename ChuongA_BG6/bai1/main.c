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
};
typedef struct dslk DSLK;

void KhoiTao(DSLK *ds)
{
	ds->pHead = NULL;
}

NODE* TaoNode(int data)
{
	NODE* node = (NODE*) malloc (sizeof(NODE));
	node->data = data;
	node->pNext = NULL;

	return node;
}

void AddNode(DSLK *ds, int data)
{
	NODE *node = TaoNode(data);
	if(ds->pHead == NULL)
	{
		ds->pHead = node;
	}
	else
	{
		node->pNext = ds->pHead;
		ds->pHead = node;
	}
}

void NhapDSLK(DSLK *ds)
{
	int i, x, n;

	do
	{
		printf("Nhap so phan tu: ");
		scanf("%d", &n);
	}
	while(n <= 0);

	for(i = n; i >= 1; i--)
	{
		printf("Nhap phan tu a[%d] = ", i);
		scanf("%d", &x);
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

void GiaiPhongBoNho(DSLK *ds)
{
	NODE *p;

	while(ds->pHead != NULL)
	{
		p = ds->pHead;
		ds->pHead = ds->pHead->pNext;
		free(p);
	}

	ds->pHead = NULL;
}

int main()
{
	DSLK ds;

	KhoiTao(&ds);
	NhapDSLK(&ds);
	XuatDSLK(ds);
	GiaiPhongBoNho(&ds);

	getch();
	return 0;
}