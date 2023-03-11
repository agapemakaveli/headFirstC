#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "I left my heart in Harvard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jima",
};

void findTrack(char searchFor[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (strstr(tracks[i], searchFor))
            printf("Track %i: '%s'\n", i, tracks[i]);
    }
}

/*this is the example of book: Code Magnet Solution*/
void printReverse(char *s)
{
    size_t len = strlen(s);
    char *t = s + len - 1;

    while (t >= s)
    {
        printf("%c", *t);
        t = t - 1;
    }
    puts("");
}
/*this is the example of book: Code Magnet Solution*/

int main()
{
    /*this is the example of book: Code Magnet Solution*/
    char *juices[] = {
        "dragonfruits", "waterberry", "sharonfruit", "uglifruit", "rumberry",
        "kiwifruit", "mulberry", "strawberry", "blueberry", "blackberry", "starfruit"};

    char *a;
    printf("\n");
    puts(juices[6]);
    printReverse(juices[7]);
    a = juices[2];
    juices[2] = juices[8];
    juices[8] = a;
    puts(juices[8]);
    printReverse(juices[(18 + 7) / 5]);
    puts(juices[2]);
    printReverse(juices[9]);
    juices[1] = juices[3];
    puts(juices[10]);
    printReverse(juices[1]);
    printf("\n");
    /*this is the example of book: Code Magnet Solution*/

    char searchFor[80];
    printf("Search for: ");
    fgets(searchFor, 80, stdin);
    findTrack(searchFor);

    const char smallstring[] = "have";
    const char largestring[] = "I do not have a car";
    char *ptr;
    ptr = strstr(largestring, smallstring);
    printf("Strstr(): %s, \n", ptr);

    return 0;
}
