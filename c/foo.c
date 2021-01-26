// Compile with `gcc foo.c -std=c99 -lpthread`, or use the makefile

#include <pthread.h>
#include <stdio.h>

int i = 0;

// Note the return type: void*
void* incrementingThreadFunction(){
    for (int k=0; k < 1000000; k++)
      {
        i++;
      }
    return NULL;
}

void* decrementingThreadFunction(){
    for (int k=0; k < 1000000; k++)
      {
        i--;
      }
    return NULL;
}


int main(){

    pthread_t incr_thread;
    pthread_t decr_thread;

    pthread_create(&incr_thread, NULL, incrementingThreadFunction, NULL);
    pthread_create(&decr_thread, NULL, decrementingThreadFunction, NULL);

    pthread_join(incr_thread, NULL);
    pthread_join(decr_thread, NULL);

    printf("The magic number is: %d\n", i);
    return 0;
}
