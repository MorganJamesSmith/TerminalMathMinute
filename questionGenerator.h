#ifndef QUESTION_GENERATOR
#define QUESTION_GENERATOR

struct question{
    int opperand1;
    int opperand2;
    int op;
}

generateQuestions(int difficulty, struct question questions[], numQuestions);

#endif
