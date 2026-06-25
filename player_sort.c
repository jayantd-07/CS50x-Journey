#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string name;
    int score;
} Player;

int main(void)
{
    const int n = 5;
    Player people[n];

    // Get player names and scores
    for (int i = 0; i < n; i++)
    {
        people[i].name = get_string("Name: ");
        people[i].score = get_int("Score: ");
    }

    // Sort players by score using bubble sort
    for (int j = 0; j < n - 1; j++)
    {
        for (int k = 0; k < n - 1; k++)
        {
            if (people[k].score > people[k + 1].score)
            {
                int temp_score = people[k].score;
                people[k].score = people[k + 1].score;
                people[k + 1].score = temp_score;

                string temp_name = people[k].name;
                people[k].name = people[k + 1].name;
                people[k + 1].name = temp_name;
            }
        }
    }

    // Print players in ascending order
    printf("Ascending Order: ");
    for (int l = 0; l < n; l++)
    {
        if (l == n - 1)
        {
            printf("%s- ", people[l].name);
            printf("%d", people[l].score);
        }
        else
        {
            printf("%s- ", people[l].name);
            printf("%d, ", people[l].score);
        }
    }
    printf("\n");
}
