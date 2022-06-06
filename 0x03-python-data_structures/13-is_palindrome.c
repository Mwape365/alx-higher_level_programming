#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - check whether a singly linked list is a palindrome
 * @h: pointer to head of list
 * Return: 1 for palindrome, or 0 if else
 */

size_t print_listint(const listint_t *h)
{
	listint_t *current = *head;

	if (current == NULL)
		return (1);
	return (is_palindrome_rec(&current, current));
}
