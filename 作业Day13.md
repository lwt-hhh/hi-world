```c
有一个二维数组. 数组的每行从左到右是递增的，每列从上到下是递增的. 在这样的数组中查找一个数字是否存在。 时间复杂度小于O(N)





#include<stdio.h>
#include<windows.h>

#define ROW 4
#define COL 4
int lwt(int arr[ROW][COL], int n)
{
	int m = 0;
	int row = 0;
	int col = 0;
	col = COL - 1;
	while (6)
	{
		if (n == arr[row][col])
		{
			m = 1;
			break;
		}
		if (n > arr[row][col])
		{
			row++;
		}
		else
		{
			col--;
		}
	}
	return m;
}
int main()
{
	int arr[ROW][COL] = { { 1, 2, 3, 4 }, { 2, 3, 4, 5 }, { 3, 4, 5, 6 }, {4,5,6,7} };
	int n = 0;
	printf("输入你要找的数\n");
	scanf("%d", &n);

	lwt(arr, n);

	if (1 == lwt(arr, n))
	{
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}



	system("pause");
	return 0;
}
```

