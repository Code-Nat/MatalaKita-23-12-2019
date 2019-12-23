#pragma once

void RecOrderArray(int* a, int size)
{
	int temp;
	if (!size)
		return;
	temp = size;
	while (--temp)
	{
		if (*a > a[temp])
		{
			a[temp] += *a;
			*a = a[temp] - *a;
			a[temp] -= *a;
		}
	}
	RecOrderArray(a+1, size - 1);
}