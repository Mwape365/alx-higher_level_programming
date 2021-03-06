#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * palindrome - check if is palindrome with recursion
 * @l: left
 * @r: right
 *
 * Return: 1 palindrome, 0 not palindrome
 */

int palindrome(listint_t **l, listint_t *r)
{
	int response;

	if (r != NULL)
	{
		response = palindrome(l, r->next);
		if (response != 0)
		{
			response = (r->n == (*l)->n);
			*l = (*l)->next;
			return (response);
		}
		return (0);

	}
	return (1);
}

/**
 * is_palindrome - check whether a singly linked list is a palindrome
 * @h: pointer to head of list
 * Return: 1 for palindrome, or 0 if else
 */

int is_palindrome(listint_t **head)
{
	if (head == NULL)
	{
		return (0);
	}
	return (palindrome(head, *head));
}
