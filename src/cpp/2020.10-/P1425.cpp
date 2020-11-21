#include <stdio.h>

int main() {
    int hhStart = 0;
    int mmStart = 0;
    int hhEnd = 0;
    int mmEnd = 0;
    scanf("%d %d %d %d", &hhStart, &mmStart, &hhEnd, &mmEnd);

    int timeSpanMinutes = (hhEnd - hhStart) * 60 - mmStart + mmEnd;
    printf("%d %d", timeSpanMinutes / 60, timeSpanMinutes % 60);
    
    return 0;
}
