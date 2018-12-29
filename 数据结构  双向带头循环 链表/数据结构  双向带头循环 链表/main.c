#define _CRT_SECURE_NO_WARNINGS  

#include"DList.h"
#include<stdio.h>

void TestDList1()
{
	DList list;
	DListInit(&list);
	DListpushback(&list, 1);
	DListpushback(&list, 1);
	DListpushback(&list, 1);
	DListprintf(&list);
	DListpushback(&list, 11);
	DListpushback(&list, 12);
	DListpushback(&list, 13);
	DListprintf(&list);
}

int main()
{
	TestDList1();
	return 0;

}