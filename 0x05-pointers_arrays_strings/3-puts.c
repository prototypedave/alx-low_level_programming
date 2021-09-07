#include <unistd.h>
/**
 * _puts - writes a script to stdout up to but not including the null character
 * @str: this is the string to be written
 *
 * Return: on success 1.
 * on error, EOF
 */
void _puts(char *str)
{
int i = 0;
while(str[i])  //standard c idiom for looping through a null-terminated string
{
if( putchar(str[i]) == EOF)  //if we got the EOF value from writing the char
{ 
return EOF;
}
i++;
}
if(putchar('\n') == EOF)  //this will occur right after we quit due to the null terminated character.
{
return EOF;
}
return 1; //to meet spec.
}
