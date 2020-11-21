#include <iostream>

using namespace std;

const int capacity = 10005;

int ufs_data[capacity];
int weight[capacity] = { 1 };
int ufs_size = 0;

void ufs_init() 
{
    for (int i = 0; i <= ufs_size; i++)
    {
        ufs_data[i] = i;
    }
}

int ufs_get_root(int node) 
{

    if (ufs_data[node] == node) 
    {
        return node;
    }
    else 
    {
        return ufs_data[node] = ufs_get_root(ufs_data[node]);
    }
}

bool ufs_find(int l, int r) 
{
    return ufs_get_root(l) == ufs_get_root(r);
}

void ufs_quick_union(int l, int r) 
{
    if (!ufs_find(l, r))
    {
        int lr, rr;
        lr = ufs_get_root(l);
        rr = ufs_get_root(r);
        if (weight[lr] >= weight[rr])
        {
            ufs_data[rr] = lr;
            weight[lr] += weight[rr];
        } 
        else 
        {
            ufs_data[lr] = rr;
            weight[rr] += weight[lr];
        }
        
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie();

    int operations = 0;
    cin >> ufs_size >> operations;

    ufs_init();

    for (int i = 0; i < operations; i++)
    {
        int operation = -1;
        cin >> operation;
        if (operation == 1)
        {
            int l, r;
            cin >> l >> r;
            ufs_quick_union(l, r);
        } 
        else if (operation == 2) 
        {
            int l, r;
            cin >> l >> r;
            cout << (ufs_find(l, r) ? "Y" : "N") << endl;
        }
    }

    return 0;
}
