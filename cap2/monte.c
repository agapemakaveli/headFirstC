#include <stdio.h>

int main()
{
    char cards[] = "JQK";
    char aCard = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = aCard;

    puts(cards);
    return 0;
}
