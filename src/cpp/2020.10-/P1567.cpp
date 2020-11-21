#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int days = 0;
    cin >> days;

    int *temperture = new int[days];

    for (int i = 0; i < days; i++)
    {
        cin >> temperture[i];
    }

    int prev_increase = 1;
    int increase = 1;
    int increasing = false;

    for (int i = 1; i < days; i++)
    {
        if (temperture[i] > temperture[i - 1])
        {
            increase++;
            increasing = true;
        }
        else
        {
            increasing = false;
        }
        
        if ((!increasing) || (i == days - 1))
        {
            if (increase > prev_increase)
            {
                prev_increase = increase;
            }
            increase = 1;
        }
    }

    printf("%d", prev_increase);
    
    return 0;
}
