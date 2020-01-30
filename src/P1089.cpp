#include <stdio.h>

int main() {
    int cost[12] = {0};

    int stored = 0;
    int cash = 0;
    bool isRanOut = false;
    int ranOutMonth = 0;

    for (int i = 0; i < 12; i++)
    {
        scanf("%d", &cost[i]);

        cash += 300;
        cash -= cost[i];
        if (cash < 0)
        {
            isRanOut = true;
            ranOutMonth = i + 1;
            break;
        }

        stored += cash / 100;
        cash %= 100;
    }

    if (isRanOut)
    {
        printf("-%d", ranOutMonth);
    }
    else
    {
        cash += stored * 120;
        printf("%d", cash);
    }
    
    return 0;
}
