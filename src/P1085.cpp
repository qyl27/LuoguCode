#include <stdio.h>
#include "iostream"
#include "algorithm"

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int time[7] = {0};

    for (int i = 0; i < 7; i++)
    {
        scanf("%d %d", &a, &b);
        time[i] = a + b;
    }

    cout << distance(time, max_element(time, time + 7)) + 1;

    return 0;
}
