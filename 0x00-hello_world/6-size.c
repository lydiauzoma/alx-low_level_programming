#include <stdio.h>
/**
 * main -Entry point
 * Return:Always 0 (success)
 */
int main(void)
{
int i;
long int l;
long long int ll;
float d;
char c;
printf("Size of a char: %i byte(s)\n", sizeof(c));
printf("size of an int : %i byte(s)\n", sizeof(i));
printf("size of a long int : %i byte(s)\n", sizeof(l));
printf("size of a long long int : %i byte(s)\n", sizeof(ll));
printf("size of a float :%i byte(s)\n", sizeof(d));
return (0);
}
