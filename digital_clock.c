#include <stdio.h>
#include <time.h>
#include <unistd.h>

void clearScreen() {
    printf("\e[1;1H\e[2J");
}

int main() {
    while (1) {
        time_t rawtime;
        struct tm *timeinfo;

        time(&rawtime);
        timeinfo = localtime(&rawtime);

        clearScreen();
        printf("%02d:%02d:%02d\n", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);

        sleep(1);
    }

    return 0;
}
