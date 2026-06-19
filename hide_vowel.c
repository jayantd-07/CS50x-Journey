#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 1)
    {
        printf("ERROR\n");
        return 1;
    }

    for (int w = 1; w < argc; w++)
    {
        for (int i = 0, n = strlen(argv[w]); i < n; i++)
        {
            // Save the type of alphabet
            char original = argv[w][i];

            // Convert letter to uppercase
            char c = toupper(original);
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
                printf("*");
            }
            else
            {
                printf("%c", original);
            }
        }
        // Print space between arguments
        if (w < argc - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
}
