#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


// prototypes here
void display_prompt(void);
void print_output(const char *print_message);
void read_input_command(char *command, size_t size);
void execute_command(const char command);

#endif // end of shell definition

