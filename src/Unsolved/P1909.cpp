#include <stdio.h>

struct PencilPack
{
    int amount = 0;
    int price = 0;
};


int main() {
    int need = 0;
    PencilPack packs[3] = {PencilPack()};

    scanf("%d", &need);
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", packs[i].amount, packs[i].price);
    }
    
    

    return 0;
}
