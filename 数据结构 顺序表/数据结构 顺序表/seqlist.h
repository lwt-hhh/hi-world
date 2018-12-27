#pragma once

typedef int SDataType;

typedef struct SeqList
{
	SDataType* array;  //�ܴ�100�����ľ�̬˳���      *array   //ָ����ϵĿռ�
	int size;        //��ʾ��ǰ˳������ж��ٸ���
                     //˳��Ҳ��ʾ����������±�
	int capacity;    //����
}SeqList;

//��ʼ�� /����

//seqlist��һ�������ĵ�ַ��
//capacity��ʾ˳���ĳ�ʼ����


void SeqListInit(SeqList* seqlist,int capacity);
void SeqListDestroy(SeqList* seqlist);
//��ɾ�Ĳ�

//����
//β��
void SeqListpushback(SeqList* seqlist, SDataType value);
//�м���� ,��pos���ڵ��±괦����value
void SeqListInsert(SeqList* seqlist, int pos, SDataType value);
//ͷ��
void SeqListpushfront(SeqList* seqlist, SDataType value);
//ɾ��
//βɾ
void SeqListpopback(SeqList* seqlist);
//ͷɾ
void SeqListpopfront(SeqList* seqlist);
//ɾ��pos���ڵ��±������
void SeqListErase(SeqList* seqlist, int pos);
//��ӡ
void SeqListprintf(const SeqList* seqlist);
//�޸�pos�����±������Ϊvalue
void SeqListmodify(SeqList* seqlist,int pos,SDataType value);
//����
int SeqListfind(const SeqList* seqlist, SDataType value);
//�ҵ���ɾ����һ�������� value
void SeqListremove(SeqList* seqlist, SDataType value);
 //�ж�˳����Ƿ�Ϊ��
bool SeqListempty(const SeqList* seqlist);
//�������ݸ���
int SeqListsize(const SeqList* seqlist);
//ɾ�����е�value
void SeqListremoveall(SeqList* seqlist, SDataType value);


//���ݣ�
//�� size=capacity   ����Ҫ������










