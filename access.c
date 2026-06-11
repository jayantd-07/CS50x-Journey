#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get user's identity
    string name = get_string("What is your name? ");
    printf("Hello %s\n", name);

    // Prompt and validate Tech Tier input (Only accepts 'A' or 'B')
    char c;
    do
    {
        c = get_char("What is your Tech Tier? (A/B) ");
    }
    while (c != 'A' && c != 'B');

    // Display appropriate welcome message
    if (c == 'A')
    {
        printf("Welcome to our Advanced Program\n");
    }
    else if (c == 'B')
    {
        printf("Welcome to our Beginner Program\n");
    }

    // Prompt and validate Access Code (Must be between 0 and 5)
    int i;
    do
    {
        i = get_int("Print the Access Code: ");
    }
    while (i < 0 || i > 5);
    // Using a separate variable 'j' for the visual separator to avoid modifying the access code 'i'

    for (int j = 1; j < 5; j++)
    {
        printf("#");
    }
    printf("\n");

    // Grant access based on Tier rules: Tier A needs even code, Tier B needs odd code
    if (c == 'A' && i % 2 == 0)
    {
        printf("Access Granted, Master %s\n", name);
    }
    else if (c == 'B' && i % 2 != 0)
    {
        printf("Access Granted, Master %s\n", name);
    }
    else
    {
        printf("Access Denied. You are not ready\n");
    }
    return 0;
}
