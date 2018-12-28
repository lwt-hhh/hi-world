#define _CRT_SECURE_NO_WARNINGS  1
#include "SList.h"
#include<stdio.h>

void TestSList1()
{
	SList list;
	SListInit(&list);
	assert(list.first == NULL);

	SListpushfront(&list, 1);
	SListpushfront(&list, 2);
	SListpushfront(&list, 3);//3,2,1
}



int main()
{

	TestSList1();
	return 0;
}