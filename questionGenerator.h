#ifndef QUESTION_GENERATOR
#define QUESTION_GENERATOR

static char opperands[] = {'+', '-', '*', '/'};

struct question{
    int opperand1;
    int opperand2;
    int op;
    int answer;
};

int generateQuestions(int difficulty, struct question questions[], int numQuestions);

#endif
