```c
1.将数组A中的内容和数组B中的内容进行交换。（数组一样大） 
2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。 
3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。 


#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<windows.h>
int main()
{
	int arr1[] = { 1, 3, 5, 7, 9 };
	int arr2[] = { 2, 4, 6, 8, 10 };
	int* star1 = arr1;
	int* star2 = arr2;
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		int swap = *(star1+i);
		   *(star1+i) = *(star2+i);
		   *(star2+i) = swap;

	}

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);		
	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{	
		printf("%d ", arr2[i]);
	}
	system("pause");
	return 0;
}


***************************************


int main()
{
	int i = 0;
	double sum = 0;   //必须是double
    double m = 1;       //必须是double
	for (i = 1; i <= 100; i++)
	{
		sum = sum + m*1/i;
		m = -m;
	}
	printf("%5f\n", sum);
	system("pause");
	return 0;
}


********************************************


int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		
		if (i % 10 == 9)
		{
			count++;
		}

		if (i / 10 == 9)
		{
			count++;
		}
	}

	printf("%d\n", count);
	system("pause");
	return 0;

}
```

