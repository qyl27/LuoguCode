#include <stdio.h>

int main() {
    int dayOfWeek = 0;
    int days = 0;
    scanf("%d %d", &dayOfWeek, &days);

    unsigned long long length = 0;
    for (int i = 0; i < days; i++)
    {
        if (dayOfWeek != 6 && dayOfWeek != 7)
        {
            length += 250;
        }
        dayOfWeek++;
        if (dayOfWeek > 7)
        {
            dayOfWeek = 1;
        }
    }

    printf("%llu", length);

    return 0;
}
