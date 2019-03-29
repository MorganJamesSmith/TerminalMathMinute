#ifndef QUESTION_GENERATOR
#define QUESTION_GENERATOR

struct question{
    int opperand1;
    int opperand2;
    int op;
};

int generateQuestions(int difficulty, struct question questions[], int numQuestions);

#endif
