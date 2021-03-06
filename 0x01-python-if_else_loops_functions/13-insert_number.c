#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: head of linked list
 * @number: number to insert into list
 * Return: address of new node | NULL if insertion failed
 **/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *ptr = NULL, *prev = NULL;

	if (node == NULL){
		return (NULL);
	}
	if (head)
		for (ptr = *head; ptr != NULL; ptr = ptr->next){
			if (ptr->n < number){
				prev = ptr;
			}else{
				break;
			}
		}

	if (ptr == *head){
		*head = node;
	}else if (prev){
		prev->next = node;
	}
	node->n = number;
	node->next = ptr;
	return (node);
}
