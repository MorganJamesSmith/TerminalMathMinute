
#ifndef CSV_MANAGER
#define CSV_MANAGER
#include "csvManager.c"

struct save_data{
  double percent_correct;
  int time_per_question;
  long current_time;
};

void save_results(struct save_data data_to_save);


#endif
