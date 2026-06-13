#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Check input arguments
    if (argc == 1)
    {
        printf("error\n");
        return 1;
    }
    // Count uppercase letters before converting
    int total = 0;

    // Loop through all arguments
    for (int w = 1; w < argc; w++)
    {
        // Loop for each characters
        for (int i = 0, n = strlen(argv[w]); i < n; i++)
        {
            // Upper characters convert into lower characters
            if (isupper(argv[w][i]))
            {
                total++;
                printf("%c", tolower(argv[w][i]));
            }
            // Lower characters convert into upper characters
            else if (islower(argv[w][i]))
            {
                printf("%c", toupper(argv[w][i]));
            }
            else
            {
                printf("%c", argv[w][i]);
            }
        }
        // Print space between arguments
        if (w < argc - 1)
        {
            printf(" ");
        }
    }
    // Print total uppercase letters
    printf("\n%i\n", total);
}
