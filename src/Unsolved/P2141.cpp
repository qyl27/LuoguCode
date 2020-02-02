#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int count = 0;
    scanf("%d", &count);

    int *numbers = new int[count];

    for (int i = 0; i < count; i++)
    {
        cin >> numbers[i];
    }
    
    

    return 0;
}
