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
	SLNode* first;   //��һ���ڵ�ĵ�ַ
} SList;

//��ʼ��
void SListInit(SList* list)
{
	assert(list != NULL);
	list->first = NULL;
}

//����
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

//�����½ڵ�
SLNode* SListbuynode(SLDataType value)
{
	SLNode* node = (SLNode*)malloc(sizeof(SLNode));
	assert(node);
	node->value = value;
	node->next = NULL;

	return node;
}

//��
//ͷ��
void SListpushfront(SList* list, SLDataType value)
{
	SLNode* node = (SLNode*)malloc(sizeof(SLNode));
	assert(node);
	node->value = value;
	node->next = list->first;
	list->first = node;
}

//β��
void SListpushback(SList* list, SLDataType value)
{
	assert(list != NULL);
	if (list->first == NULL)
	{
		SListpushfront(list, value);
		return;
	}
	//�����������һ���ڵ�
	SLNode* cur;
	for (cur = list->first; cur->next != NULL; cur = cur->next)
	{

	}
	SLNode* node = SListbuynode(value);
	cur->next = node;

}

//�嵽pos ���
void SListInsertAfter(SLNode* pos, SLDataType value)
{
	SLNode* node = SListbuynode(value);
	{
		node->next = pos->next;
		pos->next = node;
		node->value = value;
	}
}

//���pos ��ߵĽڵ�
void SListEraseAfter(SList* list,SLNode* pos)
{
	SLNode* next = pos->next;
	pos->next = next->next;
	free(next);
}

//��pos ǰ���һ���ڵ�
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









//ɾ
//ͷɾ
void SListpopfront(SList* list)
{
	assert(list != NULL);     //��֤�������
	assert(list->first != NULL);  //��֤����Ϊ��

	SLNode* oldfirst = list->first;
	list->first = list->first->next;
	free(oldfirst);
}
//βɾ
void SListpopback(SList* list)
{
	//������ֻ��һ���ڵ�ڵ�����
	if (list->first->next == NULL)
	{
		SListpopfront(list);
	}
	//�������ж���ڵ�����
	assert(list != NULL);
	SLNode* cur = NULL;
	//��һ������
	for (cur = list->first; cur != NULL; cur = cur->next)
	{
		if (cur->next->next == NULL)
		{
			free(cur->next);
			cur->next = NULL;
		}
	}
	//�ڶ�������
	SLNode* cur = list->first;
	while (cur->next->next != NULL)
	{
		cur = cur->next;
	}
	free(cur->next);
	cur->next = NULL;
}
   
//��



//��
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





//��ӡ
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












//��ת������
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