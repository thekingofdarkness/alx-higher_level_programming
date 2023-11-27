#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
int check_cycle(listint_t *list)
{
    listint_t *slow = list;
    listint_t *fast = list;

    if (list == NULL)
        return (0);

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;        /* Move one step */
        fast = fast->next->next;  /* Move two steps */

        if (slow == fast)         /* If they meet, there's a cycle */
            return (1);
    }

    return (0); /* No cycle detected */
}
