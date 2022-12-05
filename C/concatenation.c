#include <stdio.h>

void print_command(void){
    printf("Printing to the console..");
}

void quit_command(void){
    printf("The program is quitting");
}

#define CALL_COMMAND(COMMAND) COMMAND ## _command()

int main (void){
    CALL_COMMAND(print);
    CALL_COMMAND(quit);

    return 0;
}