#include "main.h"
/**
*malloc-checked - array for printing a string
*@b: number of memory
*Return: void
*/

void *malloc_checked(unsigned int b)
{ 
void *p;
p = Ãmalloc(b);
if (p == NULL)
{
exit(98);
}

return (p);
}
