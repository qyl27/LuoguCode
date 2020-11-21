#include <iostream>

using namespace std;

const int capacity = 30005;

struct Node
{
    int column;
    int father;
    int weight;
} Node[capacity];

void init()
{
    for (int i = 0; i < capacity; i++)
    {
        Node[i].weight = 0;
        Node[i].column = i;
        Node[i].father = i;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();

    init();

    return 0;
}
