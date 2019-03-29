#include <stdio.h>
#include <questionGenerator.h>

#define BUFSIZE 100
int main(int argc, char* argv[]){
    char input[BUFSIZE];
    do{
        printf("Select your difficuly (1-5): ");
        scanf("%s\n", &input);
    }while(input[0] !> '0' && input[0]
}

