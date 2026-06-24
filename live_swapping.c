#include <cs50.h>
#include <stdio.h>

typedef struct
{
    int score;
} Player;

int main(void)
{
    const int n = 5;
    Player people[n];

    // Get people scores
    for (int i = 0; i < n; i++)
    {
        people[i].score = get_int("Score: ");
    }

    // Bubble sort for score
    for (int m = 0; m < n - 1; m++)
    {
        for (int k = 0; k < n - 1; k++)
        {
            // Swap if score is greater
            if (people[k].score > people[k + 1].score)
            {
                int temp_score = people[k].score;
                people[k].score = people[k + 1].score;
                people[k + 1].score = temp_score;

                printf("Live Swapping: %d\n", temp_score);
            }
        }
    }
    printf("\n");
}
