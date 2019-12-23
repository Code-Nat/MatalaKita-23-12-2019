#pragma once

int RecEvenDigitOverOdd(int* a, int size)
{
	int even = 0, num;
	if (!size)
		return 0;
	num = a[size - 1];
	while (num > 0)
	{
		((num % 10) % 2) ? even-- : even++;
		num /= 10;
	}
	if (even > 0)
		return 1 + RecEvenDigitOverOdd(a, size - 1);
	return RecEvenDigitOverOdd(a, size - 1);
}