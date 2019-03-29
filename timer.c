#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>


void startTimer(void (*during_timer)(), void (*at_timer)(int), int timer_length){
  signal(SIGALRM, at_timer);
  alarm(5);
  during_timer();
}
