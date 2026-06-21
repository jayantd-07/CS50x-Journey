#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

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

    // Check if player is found
    bool found = false;
    string name = get_string("Player's name: ");

    // Search for the player
    for (int j = 0; j < n; j++)
    {
        if (strcmp(people[j].name, name) == 0)
        {
            printf("Player's score: %d\n", people[j].score);
            found = true;
            break;
        }
    }
    if (!found)
    {
        printf("Player not found\n");
    }
}
