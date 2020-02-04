#include <stdio.h>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int count = 0;
    scanf("%d", &count);

    int *numbers = new int[count];
    set<int> counted;

    for (int i = 0; i < count; i++)
    {
        cin >> numbers[i];
    }
    
    int result = 0;

    sort(numbers, numbers + count);

    for (int i = 0; i < (count - 1); i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            for (int k = j + 1; k < count; k++)
            {
                if (numbers[i] + numbers[j] == numbers[k]
                    && numbers[i] != numbers[j]
                    && numbers[j] != numbers[k]
                    && numbers[i] != numbers[k])
                {
                    counted.insert(numbers[k]);
                }
            }
        }
    }
    
    printf("%d", counted.size());

    return 0;
}
