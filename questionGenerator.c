#include "questionGenerator.h"
#include <time.h>
#include <stdlib.h>

int generateQuestions(int difficulty, struct question questions[], int numQuestions){
    srand(time(NULL));
    int opperand1, opperand2, answer, op;
    for(int i = 0; i < numQuestions; i ++){
        op = rand()%4;
        opperand1 = rand()%(5*difficulty);
        opperand2 = rand()%(5*difficulty);
        if(opperands[op] == '/') opperand2 ++; //avoid divide by zero
        switch(op){
            case 0:
                answer = opperand1 + opperand2;
                break;
            case 1:
                answer = opperand1 - opperand2;
                break;
            case 2:
                answer = opperand1 * opperand2;
                break;
            case 3:
                answer = opperand1 * opperand2;
                break;
        }
        questions[i].opperand1 = opperand1;
        questions[i].opperand2 = opperand2;
        questions[i].op = op;
        questions[i].answer = answer;
    }
    return 1;
}
