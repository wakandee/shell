#include "shell.h"

void read_command(char *command, size_t size){
     if(fgets(command, size, stdin) == NULL){
	     if(feof(stdin)){
		     leo_print("\n");
                     exit(EXIT_SUCCESS);
             }else{
		     leo_print("Error while reading inpu. \n");
             }
     }
     
     command[strcspn(command, "\n")] = '\0';
}
