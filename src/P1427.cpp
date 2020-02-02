#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numbers;

    for (int i = 0; true; i++)
    {
        int input = 0;
        cin >> input;
        if (input != 0)
        {
            numbers.push_front(input);
        }
        else
        {
            break;
        }
    }
    
    list<int>::iterator it = numbers.begin();
    for (int i = 0; i < numbers.size(); i++)
    {
        printf("%d ", *it);
        it++;
    }

    return 0;
}
