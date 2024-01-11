#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    /* Traverse the list until the desired index is reached. */
    for (; index != 0; index--)
    {
        /* Check if the list is shorter than the specified index. */
        if (head == NULL)
            /* Return NULL if the node does not exist. */
            return (NULL);

        /* Move to the next node in the list. */
        head = head->next;
    }

    /* Return the address of the located node. */
    return (head);
}

