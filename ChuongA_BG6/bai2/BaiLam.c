#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BaiLam.h"


void KhoiTao(DSLK *ds)
{
	ds->pHead = ds->pTail = NULL;
}


NODE* TaoNode(char *data)
{
	NODE *node = (NODE*)malloc(sizeof(NODE));

	strcpy(node->data, data);
	node->pNext = NULL;

	return node;
}


void AddNode(DSLK *ds, char *data)
{
	NODE *node = TaoNode(data);

	if (ds->pHead == NULL)
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
	char s[50];

	while(1)
	{
		printf("Nhap chuoi (Nhap chuoi rong de ket thuc): ");
		gets(s);

		if(s[0] == '\0')
			break;

		AddNode(ds, s);

	}


}

void XuatDSLK(DSLK ds)
{
	NODE *p;
	
	printf("Chuoi DSLK vua nhap la: \n");
	for (p = ds.pHead; p != NULL; p = p->pNext)
		printf("%s \n", p->data);

	printf("\n");
}


int Dem(DSLK ds)
{
	int dem = 0;
	NODE *p;

	for (p = ds.pHead; p != NULL; p = p->pNext)
		dem++;

	return dem;
}


void GiaiPhongBoNho(DSLK *ds)
{
	NODE *p;

	while (ds->pHead != NULL)
	{
		p = ds->pHead;
		ds->pHead =  ds->pHead ->pNext;
		free(p);
	}

	ds->pHead = ds->pTail = NULL;
}