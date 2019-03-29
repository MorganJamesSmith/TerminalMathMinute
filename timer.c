#include <stdio.h>
#include <unistd.h>

void startTimer(void (*during_timer), void (*after_timer) int timer_length){
  signal(SIGALRM, after_timer);
  alarm(5);
  during_timer;
}

