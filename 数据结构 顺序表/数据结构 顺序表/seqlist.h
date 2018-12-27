#pragma once

typedef int SDataType;

typedef struct SeqList
{
	SDataType* array;  //能存100个数的静态顺序表      *array   //指向堆上的空间
	int size;        //表示当前顺序表里有多少个数
                     //顺便也表示即将插入的下标
	int capacity;    //容量
}SeqList;

//初始化 /销毁

//seqlist是一个变量的地址，
//capacity表示顺序表的初始容量


void SeqListInit(SeqList* seqlist,int capacity);
void SeqListDestroy(SeqList* seqlist);
//增删改查

//插入
//尾插
void SeqListpushback(SeqList* seqlist, SDataType value);
//中间插入 ,往pos所在的下标处插入value
void SeqListInsert(SeqList* seqlist, int pos, SDataType value);
//头插
void SeqListpushfront(SeqList* seqlist, SDataType value);
//删除
//尾删
void SeqListpopback(SeqList* seqlist);
//头删
void SeqListpopfront(SeqList* seqlist);
//删除pos所在的下标的数据
void SeqListErase(SeqList* seqlist, int pos);
//打印
void SeqListprintf(const SeqList* seqlist);
//修改pos所在下标的数据为value
void SeqListmodify(SeqList* seqlist,int pos,SDataType value);
//查找
int SeqListfind(const SeqList* seqlist, SDataType value);
//找到并删除第一个遇到的 value
void SeqListremove(SeqList* seqlist, SDataType value);
 //判断顺序表是否为空
bool SeqListempty(const SeqList* seqlist);
//返回数据个数
int SeqListsize(const SeqList* seqlist);
//删掉所有的value
void SeqListremoveall(SeqList* seqlist, SDataType value);


//扩容：
//当 size=capacity   就需要扩容了










