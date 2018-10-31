#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



1.编写函数：
unsigned int reverse_bit(unsigned int value);
这个函数的返回值value的二进制位模式从左到右翻转后的值。

如：
在32位机器上25这个值包含下列各位：
00000000000000000000000000011001
翻转后：（2550136832）
10011000000000000000000000000000
程序结果返回：
2550136832

2.不使用（a + b） / 2这种方式，求两个数的平均值。

3.编程实现：
一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
请找出这个数字。（使用位运算）

4.
有一个字符数组的内容为:"student a am i",
			请你将数组的内容改为"i am a student".
			要求：
			不能使用库函数。
			只能开辟有限个空间（空间个数和字符串的长度无关）。




unsigned int reverse_bit(unsigned int value)
{
	
	int i = 0;
	int m = 0;
	int n = 0;
   
	for (i = 0; i <= 31; i++)
	{
		int b = 0;
		b = (value>>i) & 1;


		n=b<<(31 - i);
		m = m + n;
	}

	
	return m;


}

int main()
{
	int a=0;
	int ret = 0;
	scanf("%d", &a);
	ret = reverse_bit(a);
	printf("%d", ret);

	system("pause");
	return 0;
}


********************************************


int average(int x, int y)
{
	int c = 0;
	c = x + (y - x) / 2;
	return c;


}

int main()
{
	int a = 0;
	int b = 0;
	int ret = 0;
	printf("请输入两个数\n");
	scanf("%d%d", &a, &b);
	ret=average(a, b);
	printf("%d", ret);

	system("pause");
	return 0;
}

*************************************************

int main()
{
	int sz = 0;
	int i = 0;
	int a = 0;
	int arr[] = {1,2,3,1,2,3,5};
	sz = sizeof(arr) / sizeof(arr[0]);
	a = arr[0];
	for (i = 1; i<= sz-1; i++)
	{
		
		a = a^arr[i];

	}

	printf("%d\n", a);


	system("pause");

	return 0;
}

*******************************************************

void swap(char* left, char* right)
{
	char swap = 0;
	while (left <= right)
	{
		swap = *left;
		*left = *right;
		*right = swap;
		left++;
		right--;

	}

}

void challenge(char* p)
{
	int a = 0;
	a = strlen(p);
	swap(p, p + a - 1);
	while (*p != '\0')
	{
		char* star = p;
		char* end = star;


		while ((*end != ' ') && (*end != '\0'))
		{
			end++;

		}
		swap(star, end - 1);
		if (*end != '\0')
			p = end + 1;

		else
			p = end;
	}
}

		int main()
	{
		char arr[] = "student a am i";
		challenge(arr);
		printf("%s", arr);
		system("pause");
		return 0;
	}