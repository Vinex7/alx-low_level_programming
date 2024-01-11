#include "lists.h"

/**
 * sum_dlistint - Sums all the data of a dlistint_t list.
 * @head: The head of the dlistint_t list.
 *
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
    /* Variable to store the sum of all data in the list. */
    int sum = 0;

    /* Iterate through the list and accumulate the data values. */
    while (head)
    {
        sum += head->n;
        head = head->next;
    }

    /* Return the sum of all data. */
    return (sum);
}

