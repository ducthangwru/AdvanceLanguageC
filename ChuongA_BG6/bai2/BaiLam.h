#pragma once

struct Node
{
	char data[50];
	struct Node *pNext;
};
typedef struct Node NODE;

struct dslk
{
	NODE *pHead;
	NODE *pTail;
};
typedef struct dslk DSLK;

void KhoiTao(DSLK *ds);
NODE* TaoNode(char *data);
void AddNode(DSLK *ds, char *data);
void NhapDSLK(DSLK *ds);
void XuatDSLK(DSLK ds);
int Dem(DSLK ds);
void GiaiPhongBoNho(DSLK *ds);

