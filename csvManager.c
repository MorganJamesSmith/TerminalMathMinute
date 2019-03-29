#include <stdio.h>
#include <stdlib.h>

#define FILENAME "results.csv"
#define MODE "a"

struct save_data{
  double percent_correct;
  int time_per_question;
  long current_time;
};

void save_results(struct save_data data_to_save){
  FILE * fp;

  fp = fopen(FILENAME, MODE);

  fprintf(fp, "\n%2f, %d, %f", data_to_save.percent_correct, data_to_save.time_per_question, data_to_save.current_time);
  fclose(fp);
}




