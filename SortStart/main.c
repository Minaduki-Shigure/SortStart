#include "SortStart.h"

int main(void)
{
	int i = 0;
	SElemType input1[] = { 3,21,4,1,3,4,5,6,12 };
	SElemType input2[] = { 3,21,4,1,3,4,5,6,12 };
	BubbleSort(input1, 9);
	for (i = 0; i < 9; i++)
		printf("%d ", input1[i]);
	putchar('\n');
	system("pause");
	QuickSort(input2, 0, 8);
	for (i = 0; i < 9; i++)
		printf("%d ", input2[i]);
	putchar('\n');
	system("pause");
	return 0;
}