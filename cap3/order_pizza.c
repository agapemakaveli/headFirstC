#include <stdio.h>
/*#include <unistd.h> */ // unistd.h does not declare optarg or optind as external, so fail under -std=99
#include <getopt.h>

int main(int argc, char *argv[])
{

    char *delivery = "";
    int thick = 0;
    int ingredientCount = 0;
    char ch;

    while ((ch = getopt(argc, argv, "d:t")) != EOF)
        switch (ch)
        {
        case 'd':
            delivery = optarg;
            break;
        case 't':
            thick = 1;
            break;
        default:
            fprintf(stderr, "Unknown option: '%s\n", optarg);
            return 1;
        }

    argc -= optind;
    argv += optind;

    if (thick)
        puts("Thick crust");

    if (delivery[0])
        printf("To be delivered %s.\n", delivery);

    puts("Ingredients:");

    for (ingredientCount = 0; ingredientCount < argc; ingredientCount++)
        puts(argv[ingredientCount]);

    return 0;
}
