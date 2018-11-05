1.实现一个函数，可以左旋字符串中的k个字符。

ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB

2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.

AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA

AABCD右旋一个字符得到DAABC





``` c
#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void move(char* p,int sz,int a)
{	int i = 0;
	for (i = 1; i <= a; i++)
	{
		int temp = *p;
		int j = 0;
		for (j = 0; j < sz-1;j++)
		{
			*(p + j) = *(p + j + 1);
			
		}
		*(p + j) = temp;
	}

}

int main()
{
	int a = 0;
	
	scanf("%d", &a);
	char arr[] = "abcdef";
	int sz;
	sz = strlen(arr);
	move(arr,sz,a);
	printf("%s",arr);
	system("pause");
	return 0;
}



****************************************


void move(char* p,int n)
{
	
	for (int i = 0; i < n; i++)
	{
		char temp = *p;
		int j = 0;
		while (*(p + j + 1) != '\0')
		{
			*(p + j) = *(p + j + 1);
			j++;
		}
		*(p + j) = temp;
	}

}

int main()
{
	int n = 0;
	char arr1[] = "abcdef";
	char arr2[] = "defabc";
	while (6)
	{

		scanf("%d", &n);
		move(arr1, n);
		if (0==strcmp(arr2,arr1))
		{
			printf("arr2是由arr1旋转而来\n");
			break;
		}		
	}
	system("pause");
	return 0;
}
```

