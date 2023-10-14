#include "shell.h";

void print_output(const char *print_message)
{
     write(STDOUT_FILENO, print_message, strlen(print_message));
}

