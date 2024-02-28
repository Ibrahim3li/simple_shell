#ifndef SHELL_H
#define SHELL_H
/*
 *my standard library header files
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

/*
 *function prototypes
 */
void ibrahim_display_prompt(void);
void ibrahim3li_print(const char *my_print_funcation);
void read_command(char *command, size_t size);
void execute_command(const char *command);




#endif /* SHELL_H */
