#include <stdio.h>

int main() {
    int used = 0;
    scanf("%d", &used);

    double money = 0;
    if (used <= 150) {
        money = used * 0.4463;
    } else if (used >= 151 && used <= 400) {
        money = 150 * 0.4463 + (used - 150) * 0.4663;
    } else if (used >= 401) {
        money = 150 * 0.4463 + (400 - 150) * 0.4663 + (used - 400) * 0.5663;
    }

    printf("%.1lf", money);
    return 0;
}
