#define _CRT_SECURE_NO_WARNINGS  1

#include"DList.h"

//�����½ڵ�
DListNode* DListbuynode(DLDataType value)
{
	DListNode* node = (DListNode*)malloc(sizeof(DListNode));
	node->value = value;
	node->next = node->prev = NULL;
	return node;
}



//��ʼ��
void DListInit(DList* dlist)
{
	dlist->head = DListbuynode(0);      //������ͷ�ڵ�head
	dlist->head->next = dlist->head;
	dlist->head->prev = dlist->head;
}

//��
//ͷ��
void DListpushfront(DList*dlist, DLDataType value)
{
	DListNode* node = DListbuynode(value);
	node->prev = dlist->head;
	node->next = dlist->head->next;
	dlist->head->next->prev = node;
	dlist->head->next = node;
}

//β��
void DListpushback(DList* dlist, DLDataType value)
{
	DListNode* node = DListbuynode(value);
	node->next = dlist->head;
	node->prev = dlist->head->prev;
	node->prev->next = node;
	dlist->head->prev = node;
}


//ͷɾ
void SListpopfront(DList*dlist)
{
	DListNode* cur = dlist->head->next;
	dlist->head = cur->next;
	cur->next->prev = dlist->head;
	free(cur);
}

//βɾ
void SListpopback(DList*dlist)
{
	DListNode* cur = dlist->head->prev;
	dlist->head->prev->prev->next = dlist->head;
	dlist->head->prev = dlist->head->prev->prev;
	free(cur);
}

//����

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

//��posǰ��һ���ڵ�
void DListInsert(DList* dlist, DListNode* pos, DLDataType value)
{
	DListNode* node = DListbuynode(value);
	node->next = pos;
	node->prev = pos->prev;
	node->prev->next = node;
	pos->prev = node;
}

//ɾ��pos���ڵĽڵ�
void DListErase(DList* list, DListNode* pos)
{
	pos->next->prev = pos->prev;
	pos->prev->next = pos->next;
	free(pos);
}

//��ӡ
void DListprintf(const DList* dlist)
{
	DListNode* cur = NULL;
	for (cur = dlist->head->next; cur != dlist->head; cur = cur->next)
	{
		printf("%d ", cur->value);
	}

	printf("\n");
}



//����
// 1�� �������
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

//2, ������������
void DListDestroy(DList* dlist)
{
	DListClear(dlist);
	free(dlist->head);
	dlist->head = NULL;
}




