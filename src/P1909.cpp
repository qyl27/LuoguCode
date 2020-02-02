#include <stdio.h>
#include "algorithm"

using namespace std;

struct PencilPack
{
    int amount = 0;
    int price = 0;
};


int main() {
    int need = 0;
    int const packsCount = 3;
    PencilPack packs[packsCount] = {PencilPack()};
    int price[packsCount] = {0};
    int amount = 0;

    scanf("%d", &need);
    for (int i = 0; i < packsCount; i++)
    {
        scanf("%d %d", &packs[i].amount, &packs[i].price);

        if (need % packs[i].amount == 0)
        {
            amount = (need / packs[i].amount);
        } 
        else
        {
            amount = (need / packs[i].amount) + 1;
        }
        
        
        price[i] = amount * packs[i].price;
    }

    printf("%d", *min_element(price, price + packsCount));

    return 0;
}
