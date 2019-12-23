#pragma once

int RecDigitSumBiggerThen(int *a, int size, int k)
{
	int tempNum = 0, num;
	if (!size)
		return 0;
	num = a[size-1];
	while (num > 0)
	{
		tempNum += num % 10;
		num /= 10;
	}
	if (tempNum > k)
		return 1 + RecDigitSumBiggerThen(a, size - 1, k);
	else
		return RecDigitSumBiggerThen(a, size - 1, k);
}