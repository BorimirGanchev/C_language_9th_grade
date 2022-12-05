#include <stdio.h>

#define OBJECT_LIKE_MACROS printf("hello world\n")
#define PRINT() printf("Hello world 2\n")
#define PRINT_MMESSAGE(MESSAGE) printf(MESSAGE)

void print(char * message){
    printf(message);
}
int main(){
    OBJECT_LIKE_MACROS;
    PRINT();
    PRINT_MMESSAGE("Hello world 3\n");
    print("Hello world 4\n");

    return 0;
}