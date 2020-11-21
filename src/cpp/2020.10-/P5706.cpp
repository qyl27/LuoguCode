#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    double colaAmount = 0;
    int studentCount = 0;
    cin >> colaAmount >> studentCount;
    printf("%.3lf\n", colaAmount / studentCount);
    printf("%d", studentCount * 2);
    return 0;
}
