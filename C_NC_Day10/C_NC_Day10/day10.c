#define _CRT_SECURE_NO_WARNINGS  1



1.
дһ���������ز����������� 1 �ĸ���
���磺 15 0000 1111 4 �� 1
����ԭ�ͣ�
int count_one_bits(unsigned int value)
{
	// ���� 1��λ�� 
}

2.��ȡһ�������������������е�ż��λ������λ��
�ֱ�������������С�

3. ���һ��������ÿһλ��

4.���ʵ�֣�
����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
�������� :
1999 2299
������� : 7







#include<stdio.h>
#include<stdlib.h>

 int count_one_bits(unsigned int value)
{
		   /*int count = 0;
		   while (value)
		   {
		   if (value % 2 == 1)
		   {
		   count++;
		   }
		   value = value / 2;
		   }
		   return count;
		   }*/
		   int count = 0;
		   while (value)
		   {
			   if ((value & 1) == 1)
			   {
				   count++;
			   }
			   value = value >> 1;
		   }

		   return count;
 }

	
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("һ�ĸ���>_%d\n", count_one_bits(a));

	system("pause");
	return 0;
}


*******************************************


int main()
{
	int i = 0;
	int j = 0;
	int a = 0;
	char arr1[16] = { 0 };
	char arr2[16] = { 0 };
	scanf("%d", &a);
	for (i = 0; i <= 31; i += 2)
	{
		arr1[j] = ((a >> i) & 1);
		j++;
	}
	int w = 0;
	for (i = 1; i <= 32; i += 2)
	{
		arr2[w] = ((a >> i) & 1);
		w++;
	}
	printf("����λ������Ϊ> ");
	for (i = 15; i >= 0; i -= 1)
	{
		
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("ż��λ������Ϊ> ");
	for (i = 15; i >= 0; i -= 1)
	{
		
		printf("%d ", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}


******************************


haha(int a)
{
	if (a < 10)
	{
		printf("%d ", a);
	}
	else
	{
		haha(a / 10);
		printf("%d ", a % 10);
	}

}




int main()
{
	int a = 0;
	scanf("%d", &a);
	haha(a);	
	system("pause");
	return 0;
}
*****************************

int main()
{
	int m = 0;
	int n = 0;
	int count = 0;

	scanf("%d%d", &m, &n);
	int ret = m^n;
	while (ret)
	{
		if ((ret&1)== 1)
		{
			count++;
		}
		ret = ret >> 1;
	}

	printf("%d\n", count);


	system("pause");

	return 0;
}