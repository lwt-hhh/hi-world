#define _CRT_SECURE_NO_WARNINGS  1

#include "SList.h"

//��ʼ��
void SListInit(SList* list)
{
	assert(list != NULL);
	list->first = NULL;
}

//����

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


