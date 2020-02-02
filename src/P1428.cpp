#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int count = 0;
    scanf("%d", &count);

    int *kawaii = new int[count];
    int *badThan = new int[count];

    for (int i = 0; i < count; i++)
    {
        cin >> kawaii[i];
    }
    
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (kawaii[j] < kawaii[i])
            {
                badThan[i]++;
            }
        }
    }
    
    for (int i = 0; i < count; i++)
    {
        printf("%d ", badThan[i]);
    }

    return 0;
}
