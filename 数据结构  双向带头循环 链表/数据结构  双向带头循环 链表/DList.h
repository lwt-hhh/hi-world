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
	DListNode* head;   //这个head表示链表的 头节点
}DList;

//申请新节点
DListNode* DListbuynode(DLDataType value);



//初始化
void DListInit(DList* dlist);

//增
//头插
void DListpushfront(DList*dlist, DLDataType value);


//尾插
void DListpushback(DList* dlist, DLDataType value);


//头删
void SListpopfront(DList*dlist);


//尾删
void SListpopback(DList*dlist);


//查找

DListNode* DListfind(DList* dlist, DLDataType value);

//在pos前插一个节点
void DListInsert(DList* dlist, DListNode* pos, DLDataType value);

//删掉pos所在的节点
void DListErase(DList* list, DListNode* pos);


//打印
void DListprintf(const DList* dlist);

//销毁
// 1， 清空链表
void DListClear(DList* dlist);
