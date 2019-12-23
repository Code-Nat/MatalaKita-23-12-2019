#include <stdio.h>
#include "RecSum.h"
#include "RecAppernceOfChar.h"
#include "RecUnCap.h"
#include "RecOrderArray.h"
#include "RecEvenDigitOverOdd.h"
#include "RecDigitSumBiggerThen.h"

int main()
{
	int i, k = 3;
	int arr[] = { 512,411,212,311,111};
	char str[] = "Hello World How are you Today?";
	printf ("sum of array is: %d\n", RecSum(arr, 5));
	printf ("Ammount of times %c appers is: %d\n", 'H', RecAppernceOfChar(str, 'H'));
	printf("Before UnCap the str is: %s\n", str);
	RecUnCap(str);
	printf("After  UnCap appers  as: %s\n", str);

	printf ("The nunmber of numbers bigger then %d are: %d\n",k, RecDigitSumBiggerThen(arr, 5, k));

	printf("The amount of numbers with more even digits then odd are: %d\n",RecEvenDigitOverOdd(arr, 5));

	RecOrderArray(arr, 5);
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	return 0;
}