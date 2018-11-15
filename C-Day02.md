```c
1. 给定两个整形变量的值，将两个值的内容进行交换。 
2. 不允许创建临时变量，交换两个数的内容（附加题） 
3.求10 个整数中最大值。 
4.将三个数按从大到小输出。 

5.求两个数的最大公约数。 




#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<windows.h>
int main()
{
	int a = 10;
	int b = 20;
	int swap = 0;
	swap = a;
	a = b;
	b = swap;
	printf("a=%d\nb=%d", a, b);

	system("pause");
	return 0;
}


***********************************************
int main()
{
	int a = 10;
	int b = 20;

	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d\nb=%d",a,b);
	system("pause");
	return 0;
}



************************************************
int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int max = 0;
	for (i = 0; i < 10; i++)
	{
		max = a[0];
		if (a[i]>a[0])
		{
			max = a[i];
		}
	}
	printf("%d\n", max);




	system("pause");
	return 0;
}




************************************

int main()
{
	int a = 0, b = 0, c = 0,d=0;
	printf("请输入三个数\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		d = a, a = b, b = d;
	}
	if (b<c)
	{
		d = b, b = c, c = d;
	}
	if (a < b)
	{
		d = a, a = b, b = d;
	}
	
	printf("%d %d %d", a, b, c);



	system("pause");


	return 0;
}



*************************************
int main()
{
	int a = 0, b = 0,i = 0, m = 0;
	
	printf("输入两个数\n");
    scanf("%d%d", &a, &b);

	for (i = 1; i <= a; i++)
	{
		if ((0 == a%i) && (0 == b%i))
		{
			m = i;
		}
	}
	printf("最大公约数为》%d\n", m);

	system("pause");
	return 0;
}
```

