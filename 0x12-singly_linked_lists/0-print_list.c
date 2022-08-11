#include "lists.h"
/**
* print_list - prints all the elements of a list
*
* @k:pointer to the list
*
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
const list_t *cursor = h;
size_t len = 0;

while (cursor != NULL)
{
if (cursor->str != NULL)
printf("[%d] %s\n", cursor->len, cursor->str);
else
printf("[0] (nil)\n");
len += 1;
cursor = cursor->next;
}
return (len);
}
