 - Doubly linked lists

1. Write a function that prints all the elements of a dlistint_t list.



Prototype: size_t print_dlistint(const dlistint_t *h);

Return: the number of nodes

Format: see example
task 1
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.



Prototype: char *_strdup(char *str);

The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.

Returns NULL if str = NULL

On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

FYI: The standard library provides a similar function: strdup. Run man strdup to learn
