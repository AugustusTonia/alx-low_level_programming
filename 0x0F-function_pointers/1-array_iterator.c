#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a
 *                  parameter on each element of an array.
 * @array: The decleared array.
 * @size: The initialized size of array.
 * @action: A pointer to the executed function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
