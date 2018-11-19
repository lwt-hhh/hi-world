```c
#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<windows.h>
#include<assert.h>

一瓶饮料1元钱 现有20 块钱   两个空瓶换一瓶， 最后能喝多少瓶饮料

int main()
{
	int i = 20;
	int m = 0;
	int cout = 0;
	cout = i / 1;
	m = cout;
	while (m)
	{
		cout = cout + m / 2;
		m = m / 2;
	}
	cout = cout + 1;
	printf("%d\n", cout);
	system("pause");

	return 0;

}

一组数字中只有两个数字只出现了一次，其余数字都是成对出现，请找出这两个数字：


int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7 }; \\只有6，7出现了一次
	int i = 0;
	int m = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		m = m^arr[i];\\先全部异或  最后的值赋给m
	}
	int q = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((m >> i) & 1))
		{
			q = i;    \\从低位找起，找到二进制位为1时 m向右移的位数i，把i赋给q记录下来
		}
	}
	int x = 0, y = 0;
	for (i = 0; i < sz; i++)
	{
		if (1 == ((arr[i] >> q) & 1))
		{
			x = x^arr[i];\\把这一位全为1的数全部异或起来 得到一个只出现一次的数
		}
		else
		{
			y = y^arr[i];\\把这一位全为0的数全部异或起来 得到另一个只出现一次的数
		}
	}
	printf("%d,%d\n", x, y);
	system("pause");
	return 0;
}



模拟实现 strcpy 函数：


void Mystrcpy(char* dest, const char* src)
{

	assert(dest != NULL);
	assert(src != NULL);
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	

}

int main()
{
	char* src = "abcdef123456";
	char arr[] = { 0 };
	Mystrcpy(arr, src);
	
	printf("%s\n", arr);

	system("pause");
	return 0;
}




模拟实现 strcat函数：


void Mystrcat(char* dest, const char* src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;



}



int main()
{
	char* arr1 = "123456";
	char arr2[] = "abcdef";
	Mystrcat(arr2, arr1);
	printf("%s\n", arr2);
	system("pause");




	return 0;
}

```

