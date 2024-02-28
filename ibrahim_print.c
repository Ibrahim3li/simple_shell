#include "shell.h"
/*
 * print function for my own shell project
 * This function writes the given message to the standard output
 *
 * Parameters:
 * my_print_function: The message to be printed
 */
void ibrahim_print(const char *my_print_function)
{
	write(STDOUT_FILENO, my_print_function, strlen(my_print_function));
}
