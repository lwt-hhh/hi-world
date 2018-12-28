#pragma once
#include<stdio.h>
#include<assert.h>

typedef int SLDataType;

typedef struct SLNode
{
	SLDataType value;
	struct SLNode* next;
} SLNode;


typedef struct SList
{
	SLNode* first;   //第一个节点的地址
} SList;

//初始化
void SListInit(SList* list)
{
	assert(list != NULL);
	list->first = NULL;
}

//销毁
void SListDestroy(SList* list)
{
	assert(list != NULL);
	SLNode* cur = list->first;
	while (cur->next!=NULL)
	{
		cur = cur->next;
		free(cur);
	}
	free(cur);
	list->first = NULL;
}

//申请新节点
SLNode* SListbuynode(SLDataType value)
{
	SLNode* node = (SLNode*)malloc(sizeof(SLNode));
	assert(node);
	node->value = value;
	node->next = NULL;

	return node;
}

//增
//头插
void SListpushfront(SList* list, SLDataType value)
{
	SLNode* node = (SLNode*)malloc(sizeof(SLNode));
	assert(node);
	node->value = value;
	node->next = list->first;
	list->first = node;
}

//尾插
void SListpushback(SList* list, SLDataType value)
{
	assert(list != NULL);
	if (list->first == NULL)
	{
		SListpushfront(list, value);
		return;
	}
	//找链表中最后一个节点
	SLNode* cur;
	for (cur = list->first; cur->next != NULL; cur = cur->next)
	{

	}
	SLNode* node = SListbuynode(value);
	cur->next = node;

}

//插到pos 后边
void SListInsertAfter(SLNode* pos, SLDataType value)
{
	SLNode* node = SListbuynode(value);
	{
		node->next = pos->next;
		pos->next = node;
		node->value = value;
	}
}

//清除pos 后边的节点
void SListEraseAfter(SList* list,SLNode* pos)
{
	SLNode* next = pos->next;
	pos->next = next->next;
	free(next);
}

//在pos 前面插一个节点
void SListInserBefore(SList* list, SLNode* pos, SLDataType value)
{
	SLNode* cur = list->first;
	for (cur = list->first; cur->next != pos; cur = cur->next)
	{

	}
	SLNode* node = SListbuynode(value);
	cur->next = node;
	node->next = pos;

}









//删
//头删
void SListpopfront(SList* list)
{
	assert(list != NULL);     //保证链表存在
	assert(list->first != NULL);  //保证链表不为空

	SLNode* oldfirst = list->first;
	list->first = list->first->next;
	free(oldfirst);
}
//尾删
void SListpopback(SList* list)
{
	//链表中只有一个节点节点的情况
	if (list->first->next == NULL)
	{
		SListpopfront(list);
	}
	//链表中有多个节点的情况
	assert(list != NULL);
	SLNode* cur = NULL;
	//第一种做法
	for (cur = list->first; cur != NULL; cur = cur->next)
	{
		if (cur->next->next == NULL)
		{
			free(cur->next);
			cur->next = NULL;
		}
	}
	//第二种做法
	SLNode* cur = list->first;
	while (cur->next->next != NULL)
	{
		cur = cur->next;
	}
	free(cur->next);
	cur->next = NULL;
}
   
//改



//查
SLNode* SListfind(const SList* list, SLDataType value)
{
	SLNode* cur = NULL;
	for (cur = list->first; cur != NULL; cur = cur->next)
	{
		if (value == cur->value)
		{
			return cur;
		}
	}
	return NULL;
}





//打印
void SListprint(const SList* list)
{
	SLNode* cur = NULL;
	for (cur = list->first; cur != NULL; cur = cur->next)
	{
		printf("%d ", cur->value);
	}
	printf("\n");
}


//












//反转单链表
/*
SLNode* reverselist(SLNode* head)
{
	SLNode* ret = NULL;
	SLNode* cur = head;
	while (cur != NULL)
	{
		SLNode* node =cur;
		cur = cur->next;
		node->next = ret;
		ret = node;
	}
	return ret;
}
*/