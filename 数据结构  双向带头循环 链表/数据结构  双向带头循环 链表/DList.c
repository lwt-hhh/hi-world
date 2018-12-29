#define _CRT_SECURE_NO_WARNINGS  1

#include"DList.h"

//申请新节点
DListNode* DListbuynode(DLDataType value)
{
	DListNode* node = (DListNode*)malloc(sizeof(DListNode));
	node->value = value;
	node->next = node->prev = NULL;
	return node;
}



//初始化
void DListInit(DList* dlist)
{
	dlist->head = DListbuynode(0);      //这里是头节点head
	dlist->head->next = dlist->head;
	dlist->head->prev = dlist->head;
}

//增
//头插
void DListpushfront(DList*dlist, DLDataType value)
{
	DListNode* node = DListbuynode(value);
	node->prev = dlist->head;
	node->next = dlist->head->next;
	dlist->head->next->prev = node;
	dlist->head->next = node;
}

//尾插
void DListpushback(DList* dlist, DLDataType value)
{
	DListNode* node = DListbuynode(value);
	node->next = dlist->head;
	node->prev = dlist->head->prev;
	node->prev->next = node;
	dlist->head->prev = node;
}


//头删
void SListpopfront(DList*dlist)
{
	DListNode* cur = dlist->head->next;
	dlist->head = cur->next;
	cur->next->prev = dlist->head;
	free(cur);
}

//尾删
void SListpopback(DList*dlist)
{
	DListNode* cur = dlist->head->prev;
	dlist->head->prev->prev->next = dlist->head;
	dlist->head->prev = dlist->head->prev->prev;
	free(cur);
}

//查找

DListNode* DListfind(DList* dlist, DLDataType value)
{
	DListNode* cur = NULL;
	for (cur = dlist->head->next; cur != dlist->head; cur = cur->next)
	{
		if (value == cur->value)
		{
			return cur;
		}
	}
	return NULL;
}

//在pos前插一个节点
void DListInsert(DList* dlist, DListNode* pos, DLDataType value)
{
	DListNode* node = DListbuynode(value);
	node->next = pos;
	node->prev = pos->prev;
	node->prev->next = node;
	pos->prev = node;
}

//删掉pos所在的节点
void DListErase(DList* list, DListNode* pos)
{
	pos->next->prev = pos->prev;
	pos->prev->next = pos->next;
	free(pos);
}

//打印
void DListprintf(const DList* dlist)
{
	DListNode* cur = NULL;
	for (cur = dlist->head->next; cur != dlist->head; cur = cur->next)
	{
		printf("%d ", cur->value);
	}

	printf("\n");
}



//销毁
// 1， 清空链表
void DListClear(DList*dlist)
{
	DListNode* cur;
	DListNode* next;
	cur = dlist->head->next;
	while (cur != dlist->head)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
	dlist->head->next = dlist->head->prev = dlist->head;
}

//2, 彻底销毁链表
void DListDestroy(DList* dlist)
{
	DListClear(dlist);
	free(dlist->head);
	dlist->head = NULL;
}




