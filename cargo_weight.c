#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Weight values for each alphabet
int WEIGHTS[] = {10, 25, 12, 18, 5,  30, 14, 22, 8,  19, 11, 27, 16,
                 21, 9,  24, 13, 28, 17, 20, 6,  29, 15, 26, 7,  23};

int calculate_weight(string cargo);

int main(void)
{
    // Get cargo Name
    string cargo1 = get_string("Cargo 1: ");
    string cargo2 = get_string("Cargo 2: ");

    // Calculate cargo weight
    int weight1 = calculate_weight(cargo1);
    int weight2 = calculate_weight(cargo2);

    if (weight1 > weight2)
    {
        printf("Cargo 1 is heavier!\n");
    }
    else if (weight1 < weight2)
    {
        printf("Cargo 2 is heavier!\n");
    }
    else
    {
        printf("Balanced!\n");
    }
}

int calculate_weight(string cargo)
{
    int weight = 0;
    for (int i = 0, n = strlen(cargo); i < n; i++)
    {
        if (isupper(cargo[i]))
        {
            weight += WEIGHTS[cargo[i] - 'A'];
        }
        else if (islower(cargo[i]))
        {
            weight += 5;
        }
    }
    return weight;
}
