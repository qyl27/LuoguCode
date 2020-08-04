#include <stdio.h>
#include <iostream>

using namespace std;

struct toy
{
    bool isOutward;
    string name;
};

int move(int toyCount, int toyPos, int offset)
{
    int pos = toyPos + offset;
    if (pos > toyCount)
    {
        pos -= toyCount;
    }
    
    if (pos < 0)
    {
        pos += toyCount;
    }
    return pos;
}

int left(int toyCount, int toyPos, bool isInward, int offset)
{
    if (isInward)
    {
        return move(toyCount, toyPos, -offset);
    }
    else
    {
        return move(toyCount, toyPos, offset);
    }
}

int right(int toyCount, int toyPos, bool isInward, int offset)
{
    if (isInward)
    {
        return move(toyCount, toyPos, offset);
    }
    else
    {
        return move(toyCount, toyPos, -offset);
    }
}

int main()
{
    int count = 0;
    int commandsCount = 0;

    cin >> count >> commandsCount;

    toy *toyes = new toy[count];
    for (int i = 0; i < count; i++)
    {
        cin >> toyes[i].isOutward >> toyes[i].name;
    }
    
    int pos = 0;
    for (int i = 0; i < commandsCount; i++)
    {
        bool isRight = false;
        int offset = 0;
        cin >> isRight >> offset;
        pos = !isRight ? left(count, pos, !toyes[pos].isOutward, offset) : right(count, pos, !toyes[pos].isOutward, offset);
    }

    cout << toyes[pos].name;

    delete toyes;
    return 0;
}
