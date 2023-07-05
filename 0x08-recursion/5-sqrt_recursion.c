#include "main.h"

/**
 * _sqrt_recursion_helper - Searches for the square root
 * @n: The number to calculate the square root of.
 * @start: The beginning of the range to search in.
 * @end: The end of the range to search in.
 *
 * Return: The square root if found, -1 otherwise.
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
	int mid;
	int square;

	if (start > end)
		return (-1);

	mid = (start + end) / 2;
	square = mid * mid;

	if (square == n)
		return (mid);
	else if (square > n)
		return (_sqrt_recursion_helper(n, start, mid - 1));
	else
		return (_sqrt_recursion_helper(n, mid + 1, end));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root if found, -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_recursion_helper(n, 0, n));
}
