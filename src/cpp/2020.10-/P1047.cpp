#include <stdio.h>

struct Area
{
    int start;
    int end;
};

int main() {
    int length = 0;
    int count = 0;

    scanf("%d %d", &length, &count);

    bool *trees = new bool[length];
    for (int i = 0; i <= length; i++)
    {
        trees[i] = true;
    }

    Area *areas = new Area[count];

    for (int i = 0; i < count; i++)
    {
        scanf("%d %d", &areas[i].start, &areas[i].end);
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = areas[i].start; j <= areas[i].end; j++)
        {
            trees[j] = false;
        }
    }

    int leave = 0;
    for (int i = 0; i <= length; i++)
    {
        if (trees[i] == true)
        {
            leave++;
        }
    }
    
    printf("%d", leave);
    
    return 0;
}
