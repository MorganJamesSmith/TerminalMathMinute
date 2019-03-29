#include <stdio.h>
#include <stdlib.h>
#include "questionGenerator.h"

#define BUFSIZE 100
#define NUMBEROFQUESTIONS 100
#define SCREEWIDTH 40
int main(int argc, char* argv[]){
    char c;
    int throwaway, answer;
    unsigned int difficulty, correct, wrong;
    struct question questions[NUMBEROFQUESTIONS];


    do{
        printf("Select a difficulty (1-5): ");
        fflush(stdout);
        do{
        c = getchar();
        }while(c == ' ' || c == '\t'); //get rid of leading whitespace
        if(c != '\n' && c != (char) EOF) while((throwaway = getchar()) != '\n' && throwaway != EOF); //clean up stdin
        if(c == (char) EOF || throwaway == EOF){
            fprintf(stderr,"Got EOF character!\n");
            exit(EXIT_FAILURE);
        }
    }while(!(c > '0' && c < '6'));
    difficulty = c - '0';

    if(!generateQuestions(difficulty, questions, NUMBEROFQUESTIONS)){
        fprintf(stderr, "Question Generation failed!\n");
        exit(EXIT_FAILURE);
    }

    correct = 0;
    wrong = 0;
    for(int i = 0; i < NUMBEROFQUESTIONS; i ++){
        printf("%d %c %d = ?\n", questions[i].opperand1, opperands[questions[i].op], questions[i].opperand2);
        scanf("%d",&answer);
        if(answer == questions[i].answer){
            printf("Correct!\n");
            correct++;
        }else{
            printf("Incorrect!\n");
            wrong++;
        }
    }


}

