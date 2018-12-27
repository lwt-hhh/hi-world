#define _CRT_SECURE_NO_WARNINGS  1

#include "SeqList.h"
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

//����Ƿ���Ҫ���ݣ������Ҫ���ݾͽ�������
//��֤���������� ����һ������
static void chekcapacity(SeqList* seqlist)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	assert(seqlist->size <= seqlist->capacity);

	if (seqlist->size < seqlist->capacity)
	{
		return;   //����Ҫ����
	}
	else          //�ߵ���˵����Ҫ����
	{
		int capacity = 2 * seqlist->capacity;
		SDataType* array = (SDataType*)malloc(sizeof(SDataType)*capacity);
		assert(array);
		//�������ݰ��ƹ���
		for (int i = 0; i < seqlist->size; i++)
		{
			array[i] = seqlist->array[i];
		}
		free(seqlist->array);
		seqlist->array = array;
	}
}

void SeqListInit(SeqList* seqlist, int capacity)
{
	assert(seqlist != NULL);
	seqlist->array = (SDataType*)malloc(sizeof(SDataType)*capacity);
	assert(seqlist->array);

	seqlist->size = 0;
	seqlist->capacity = capacity;
}

void SeqListDestroy(SeqList* seqlist)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	free(seqlist->array);     //�ص�
	seqlist->array = NULL;
	seqlist->size = 0;
	seqlist->capacity = 0;
}


void SeqListpushback(SeqList* seqlist, SDataType value)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	seqlist->array[seqlist->size] = value;
	seqlist->size++;
}

void SeqListpopback(SeqList* seqlist)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	assert(seqlist->size > 0);
	seqlist->size--;
}



void SeqListpushfront(SeqList* seqlist, SDataType value)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	//���ݰ��� i����ռ��±�
	for (int i = seqlist->size; i > 0; i--)
	{
		seqlist->array[i] = seqlist->array[i - 1];
	}
		seqlist->array[0] = value;
		seqlist->size++;
}


void SeqListpopfront(SeqList* seqlist)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);

	//�����ݰ��ƣ�i���������±�
	for (int i = 1; i < seqlist->size;i++)
	{
		seqlist->array[i - 1] = seqlist->array[i];
	}
	seqlist->size--;
}


void SeqListInsert(SeqList* seqlist, int pos, SDataType value)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	assert(pos >= 0 && pos <= seqlist->size);

	for (int i = seqlist->size; i > pos; i--)
	{
		seqlist->array[i] = seqlist->array[i - 1];
	}
	seqlist->array[pos] = value;
	seqlist->size++;
}


void SeqListErase(SeqList* seqlist, int pos)
{
	assert(seqlist != NULL);
	assert(seqlist->array != NULL);
	for (int i = pos; i<seqlist->size-1; i++)
	{
		seqlist->array[i] = seqlist->array[i + 1];
	}
	seqlist->size--;
}

//��ӡ
void SeqListprintf(const SeqList* seqlist)
{
	for (int i = 0; i < seqlist->size; i++)
	{
		printf("%d ", seqlist->array[i]);
	}
	printf("\n");
}

//�޸�pos�����±������Ϊvalue
void SeqListmodify(SeqList* seqlist, int pos, SDataType value)
{
	assert(pos >= 0 && pos < seqlist->size);
	assert(seqlist->array != NULL);
	assert(seqlist != NULL);
	seqlist->array[pos] = value;
}
//����
int SeqListfind(const SeqList* seqlist, SDataType value)
{
	assert(seqlist->array != NULL);
	assert(seqlist != NULL);
	for (int i = 0; i < seqlist->size; i++)
	{
		if (seqlist->array[i] == value)
		{
			return i;
		}
	}
	return -1;
}
//�ҵ���ɾ����һ�������� value
void SeqListremove(SeqList* seqlist, SDataType value)
{
	int pos = SeqListfind(seqlist, value);
	if (-1 != pos)
	{
		SeqListerase(seqlist, pos);
	}

}
//�ж�˳����Ƿ�Ϊ��
bool SeqListempty(const SeqList* seqlist)
{
	return seqlist->size == 0;
}
//�������ݸ���
int SeqListsize(const SeqList* seqlist)
{
	return seqlist->size;
}

//ɾ�����е�value

void SeqListremoveall(SeqList* seqlist, SDataType value)
{
	int pos;
	while ((pos = SeqListfind(seqlist, value)) != -1)
	{
		SeqListerase(seqlist, pos);
	}


	SDataType* array = (SDataType*)malloc(sizeof(SDataType)*seqlist->size);
	arrset(array);
	int index = 0;
	for (int i = 0; i < seqlist->size; i++)
	{
		if (seqlist->array[i] != value)
		{
			array[index] = seqlist->array[i];
			index++;
		}
	}
	for (int j = 0; j < index; j++)
	{
		seqlist->array[j] = array[j];
	}
	seqlist->size = index;

}

















