#include "SortStart.h"

void BubbleSort(SElemType num[], int length)
{
	int a, b;
	SElemType t;
	for (a = 0; a < length; a++)
	{
		for (b = a; b < length; b++)
		{
			if (num[a] > num[b])
			{
				t = num[a];
				num[a] = num[b];
				num[b] = t;
			}
		}
	}
}

void QuickSort(SElemType *num, int left, int right)
{
	if (left >= right)
		return;
	int left1 = left;
	int right1 = right;
	SElemType stand = num[left];
	while (left1 < right1)
	{
		while (left1 < right1&&num[right1] >= stand)
			right1--;
		num[left1] = num[right1];
		while (left1 < right1&&num[left1] <= stand)
			left1++;
		num[right1] = num[left1];
	}
	num[left1] = stand;
	QuickSort(num, left, right1 - 1);
	QuickSort(num, left1 + 1, right);
}