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


/* Command structure */
typedef struct {
    // Add command structure members here
} Command;

/* Prototypes for hsh.c */
int execute_command(Command *, char **);
int check_native_command(Command *);
void find_command(Command *);
void execute_external_command(Command *);

/* Prototypes for path.c */
int is_executable_command(Command *, char *);
char *copy_characters(char *, int, int);
char *find_executable_path(Command *, char *, char *);

/* Prototypes for error_file.c */
void display_error_message(char *);
int write_character_error(int);
int write_file_descriptor_character(int c, int fd);
int write_string_to_file_descriptor(char *str, int fd);

/* Prototypes for string_functions.c */
int length_of_string(char *);
int compare_strings(char *, char *);
char *get_starting_substring(const char *, const char *);
char *concatenate_strings(char *, char *);

/* Prototypes for string_functions1.c */
char *copy_string(char *, char *);
char *duplicate_string(const char *);
void display_string(char *);
int write_character(int);

/* Prototypes for string_functions2.c */
char *copy_string_n(char *, char *, int);
char *concatenate_string_n(char *, char *, int);
char *find_character_in_string(char *, char);
char **split_string(char *, char *);

/* Prototypes for memory_control.c */
char *fill_memory_with_character(char *, char, unsigned int);
void free_string_array(char **);
void *resize_memory_allocation(void *, unsigned int, unsigned int);
int free_pointer(void **);

/* Prototypes for more_functions.c */
int handle_interactive_mode(Command *);
int is_delimiter(char, char *);
int is_alphabetic(int);
int convert_string_to_integer(char *);

/* Prototypes for more_functions1.c */
int error_checked_string_to_integer(char *);
void print_error_message(Command *, char *);
int print_decimal_integer(int, int);
char *convert_integer_to_string(long int, int, int);
void remove_comments_from_string(char *);

/* Prototypes for builtin_functions0.c */
int handle_other_exit(Command *);
int handle_other_change_directory(Command *);
int handle_other_help(Command *);

/* Prototypes for builtin_functions1.c */
int handle_other_history(Command *);
int handle_other_alias(Command *);

/* Prototypes for get_input_line.c */
ssize_t read_input(Command *);
int read_next_line(Command *, char **, size_t *);
void handle_signal(int);

/* Prototypes for input.c */
void initialize_command(Command *);
void construct_command(Command *, char **);
void destruct_command(Command *, int);

/* Prototypes for env.c */
char *retrieve_environment_variable(Command *, const char *);
int handle_other_environment(Command *);
int handle_other_set_environment(Command *);
int handle_other_unset_environment(Command *);
int populate_environment_list(Command *);

/* Prototypes for env1.c */
char **get_environment(Command *);
int remove_environment_variable(Command *, char *);
int set_environment_variable(Command *, char *, char *);

/* Prototypes for history_format.c */
char *get_history_file_path(Command *comm);
int create_history_file(Command *comm);
int retrieve_history_from_file(Command *comm);
int append_to_history_list(Command *comm, char *buf, int linecount);
int rearrange_history_list(Command *comm);

/* Prototypes for linkedlists.c */
LinkedListNode *add_node_to_list(LinkedListNode **, const char *, int);
LinkedListNode *append_node_to_list(LinkedListNode **, const char *, int);
size_t print_list_as_string(const LinkedListNode *);
int delete_node_from_list_at_index(LinkedListNode **, unsigned int);
void clear_linked_list(LinkedListNode **);

/* Prototypes for linkedlists1.c */
size_t get_length_of_list(const LinkedListNode *);
char **convert_list_to_strings(LinkedListNode *);
size_t print_list_elements(const LinkedListNode *);
LinkedListNode *find_node_with_starting_substring(LinkedListNode *, char *, char);
ssize_t get_index_of_node(LinkedListNode *, LinkedListNode *);

/* Prototypes for chaining.c */
int verify_command_chain(Command *, char *, size_t *);
void verify_character_stat(Command *, char *, size_t *, size_t, size_t);
int substitute_alias(Command *);
int replace_variables(Command *);
int substitute_string(char **old, char *new);

#endif /* SHELL_H */
