#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



1.��д������
unsigned int reverse_bit(unsigned int value);
��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��

�磺
��32λ������25���ֵ�������и�λ��
00000000000000000000000000011001
��ת�󣺣�2550136832��
10011000000000000000000000000000
���������أ�
2550136832

2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��

3.���ʵ�֣�
һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
���ҳ�������֡���ʹ��λ���㣩

4.
��һ���ַ����������Ϊ:"student a am i",
			���㽫��������ݸ�Ϊ"i am a student".
			Ҫ��
			����ʹ�ÿ⺯����
			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���




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
	printf("������������\n");
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