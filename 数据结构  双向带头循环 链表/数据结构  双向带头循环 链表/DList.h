#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int DLDataType;

typedef struct DListNode
{
	DLDataType value;
	struct DListNode* prev;
	struct DListNode* next;
}DListNode;

typedef struct DList
{
	DListNode* head;   //���head��ʾ����� ͷ�ڵ�
}DList;

//�����½ڵ�
DListNode* DListbuynode(DLDataType value);



//��ʼ��
void DListInit(DList* dlist);

//��
//ͷ��
void DListpushfront(DList*dlist, DLDataType value);


//β��
void DListpushback(DList* dlist, DLDataType value);


//ͷɾ
void SListpopfront(DList*dlist);


//βɾ
void SListpopback(DList*dlist);


//����

DListNode* DListfind(DList* dlist, DLDataType value);

//��posǰ��һ���ڵ�
void DListInsert(DList* dlist, DListNode* pos, DLDataType value);

//ɾ��pos���ڵĽڵ�
void DListErase(DList* list, DListNode* pos);


//��ӡ
void DListprintf(const DList* dlist);

//����
// 1�� �������
void DListClear(DList* dlist);
