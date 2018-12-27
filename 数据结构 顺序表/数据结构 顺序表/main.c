#define _CRT_SECURE_NO_WARNINGS  1

#include "seqlist.h"

void TestSeqList1()
{
	SeqList seqList;
	SeqListInit(&seqList,100);
	SeqListpushback(&seqList,1);
	SeqListpushback(&seqList, 2); 
	SeqListpushback(&seqList, 3);

	// 1,2,3
	SeqListpushfront(&seqList, 11);
	SeqListpushfront(&seqList, 12);
	SeqListpushfront(&seqList, 13);
	//11,12,13,1,2,3
	SeqListInsert(&seqList, 4, 100);
	//11,12,13,1,100,2,3
	SeqListpopback(&seqList);
	//11,12,13,1,100,2
	SeqListpopfront(&seqList);
	//12,13,1,100,2
	SeqListErase(&seqList, 3);
	SeqListDestroy(&seqList);
}

int main()
{
	TestSeqList1();
	return 0;
}