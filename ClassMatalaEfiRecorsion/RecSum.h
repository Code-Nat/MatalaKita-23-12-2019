#pragma once

int RecSum(int* arr, int size)
{
	if (!size)
		return 0;
	return arr[size-1] + RecSum(arr, size - 1);
}