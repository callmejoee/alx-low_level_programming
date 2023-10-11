#include "search_algos.h"

/**
 * printArray - Print the content of an array.
 *
 * @arr: Pointer to the array to be printed.
 * @left: The leftmost index of the array to consider.
 * @right: The rightmost index of the array to consider.
 *
 */

void printArray(int arr[], int left, int right)
{
	int i;

	if (arr == NULL || left < 0 ||  left > right)
	{
		printf("Invalid input.\n");
		return;
	}

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

/**
 * binarySearch - Binary search function
 *
 * @arr: Pointer to the sorted integer array to search.
 * @left: The leftmost index of the array to consider.
 * @right: The rightmost index of the array to consider.
 * @x: The value to search for.
 *
 * Return: The index of the value if found, otherwise -1.
 */

int binarySearch(int arr[], int left, int right, int x)
{
	int mid;

	while (left <= right)
	{
		printArray(arr, left, right);
		mid = left + (right - left) / 2;
		if (arr[mid] == x)
			return (mid);
		if (arr[mid] < x)
			left = mid + 1;
		if (arr[mid] > x)
			right = mid - 1;

	}

	return (-1);
}

/**
 * binary_search - binary search function
 *
 * @array: array ptr
 * @size: size of array
 * @value: the value to be searched
 * Return: return index
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binarySearch(array, 0, size - 1, value));
}
