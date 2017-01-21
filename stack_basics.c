#include "monty.h"

/**
 * add_dnodeint - adds node to beginning of list
 * @head: address of previous "first" element
 * @n: integer value to be copied into node
 * Return: address to new node
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	*head = new;

	return (new);
}
/**
 * go_to_end - traverses to end of linked list
 * @head: ptr to head
 * Return: end node
 */
stack_t go_to_end(stack_t *head)
{
	stack_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	return (temp);
}
/**
 * enqueue - adds node to end of list
 * @head: address of first element
 * @n: int to put into new node
 * Return: address to new node
 */
stack_t *enqueue(stack_t **head, const int n)
{
	stack_t *new, *temp;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;
	return (temp->next);
}
