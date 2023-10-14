#include "shell.h"

void read_input_command(char *command, size_t size) {
     if(fgets(command, size, stdin)== NULL){
                       if(feof(stdin)){
                                       print_output("\n");
                                       exit(EXIT_SUCCESS);
                                       }else{
                                             print_output("Error while reading input.\n");
                                             exit(EXIT_FAILURE);
                                       }
                       }
      }
      
      command[strcspn(command, "\n")] = '\0'; // remove newline
}

