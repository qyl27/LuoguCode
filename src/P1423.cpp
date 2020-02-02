#include <stdio.h>

int main() {
    double input = 0.0;
    scanf("%lf", &input);

    int count = 0;
    double length = 0.0;
    double lastLength = 2.0;

    while (length <= input)
    {
        count++;
        length += lastLength;
        lastLength *= 0.98;
    }
    
    printf("%d", count);

    return 0;
}
