#include <stdio.h>
#include <stdlib.h>
#include "questionGenerator.h"

#define BUFSIZE 100
#define NUMBEROFQUESTIONS 100
int main(int argc, char* argv[]){
    char c;
    int difficulty;
    int throwaway;
    struct question questions[NUMBEROFQUESTIONS];
    char opperands[] = {'+', '-', '*', '/'};
    do{
        printf("Select a difficulty (1-5): ");
        fflush(stdout);
        do{
        c = getchar();
        }while(c == ' ' || c == '\t'); //get rid of leading whitespace
        if(c != '\n' && c != (char) EOF) while((throwaway = getchar()) != '\n' && throwaway != EOF); //clean up stdin
        if(c == (char) EOF || throwaway == EOF){
            exit(EXIT_FAILURE);
        }
    }while(!(c > '0' && c < '6'));
    difficulty = c - '0';

    if(!generateQuestions(difficulty, questions, NUMBEROFQUESTIONS)){
        fprintf(stderr, "Question Generation failed!\n");
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i < NUMBEROFQUESTIONS; i ++){
        printf("%d %c %d = ?\n", questions[i].opperand1, opperands[questions[i].op], questions[i].opperand2);
    }
}

