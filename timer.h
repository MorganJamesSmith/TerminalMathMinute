#ifndef TIMER
#define TIMER

void startTimer(void (*during_timer), void (*at_timer)(int), int timer_length);

#endif
