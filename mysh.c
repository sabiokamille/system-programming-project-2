#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


//function prototypes
void interactive_mode();
void batch_mode(char **argument);
void prompt(int exit_status);
void parse_input(char **next_line);
void tokenize(char *line);
void find_file(char *file_name);

int main(int argc, char **argv)
{
	//check how many arguments the user gives
	if (argc == 1){
		interactive_mode();
	} else {
		batch_mode(argv);
	}
}

void interactive_mode(){
	prompt(1);
}

void batch_mode(char **arguments){
	printf("now in batch mode\n");
}

void prompt(int exit_mode){
	if(exit_mode != 0){
		printf("!mysh> ");
	} else{
		printf("mysh> ");
	}
}

void parse_input(char **next_line){
	
}

void tokenize(char* line){

}

void find_file(char *file_name){

}
