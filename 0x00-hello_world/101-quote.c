
#include <unistd.h>


/**
 * main - Entry point
 *
 * Return: Always 1 (error)
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 59;

	/* Use the write system call to print to standard error */
    if (write(2, str, len) != len)
        return (1);


    return (1);

}    
