#include <stdio.h>

int main() {
    int input = 0;
    scanf("%d", &input);

    double sum = 0.0;
    int count = 0;

    while (sum <= input)
    {
        count++;
        sum += 1.0 / count;
    }
    
    printf("%d", count);

    return 0;
}
