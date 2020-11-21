#include <iostream>

using namespace std;

const int capacity = 10005;

int ufs_data[capacity];
int ufs_size = 0;

void ufs_init() {
    for (int i = 0; i < ufs_size; i++)
    {
        ufs_data[i] = i;
    }
}

bool ufs_quick_find(int l, int r) {
    return ufs_data[l] == ufs_data[r];
}

void ufs_union(int l, int r) {
    if (!ufs_quick_find(l, r)) {
        for (int i = 0; i < ufs_size; i++)
        {
            if (ufs_data[i] == r)
            {
                ufs_data[i] = l;
            }
        }
    }
}

int main() {
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
            ufs_union(l, r);
        } else if (operation == 2) {
            int l, r;
            cin >> l >> r;
            cout << (ufs_quick_find(l, r) ? "Y" : "N") << endl;
        }
    }

    return 0;
}
