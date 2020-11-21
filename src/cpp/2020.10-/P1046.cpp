#include <stdio.h>

int main() {
    int const length = 10;

    int apples[length] = {0};
    int height = 0;
    int count = 0;

    scanf("%d %d %d %d %d %d %d %d %d %d", 
                &apples[0], &apples[1], &apples[2], &apples[3], &apples[4], 
                &apples[5], &apples[6], &apples[7], &apples[8], &apples[9]);
    scanf("%d", &height);
    
    for (int i = 0; i < length; i++)
    {
        if (apples[i] <= (height + 30))
        {
            count++;
        }
    }
    
    printf("%d", count);

    return 0;
}
