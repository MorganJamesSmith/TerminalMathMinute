#include "questionGenerator.h"
#include <time.h>
#include <stdlib.h>

int generateQuestions(int difficulty, struct question questions[], int numQuestions){
    srand(time(NULL));
    for(int i = 0; i < numQuestions; i ++){
        questions[i].opperand1 = rand()%(5*difficulty);
        questions[i].opperand2 = rand()%(5*difficulty);
        questions[i].op = rand()%4;
    }
    return 1;
}
