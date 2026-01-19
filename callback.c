#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>

// TODO: Declare a global vairable to store the number of SIGINT signals received
int sigcount = 0;

void signal_handler(int signum) {
    // TODO: Increment counter

    printf("Caught signal %d. Count = %d\n", signum, sigcount);
}

int main() {
    // TODO: Initialize signal handler for SIGINT

    printf("Waiting for signal...\n");
    while (sigcount < 3) {
        sleep(1);
    }
}