#define _CRT_SECURE_NO_WARNINGS  1

#include "SList.h"

//初始化
void SListInit(SList* list)
{
	assert(list != NULL);
	list->first = NULL;
}

//销毁

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


