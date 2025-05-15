#include <stdio.h>
struct Player {
char name[50];
char team[50];
int matches;
int runs;
};
int main() 
{
struct Player players[5];
for (int i = 0; i < 5; i++) {
printf("Enter details of player %d:\n", i + 1);
printf("Name: "); 
scanf(" %[^\n]", players[i].name);
printf("Team: "); 
scanf(" %[^\n]", players[i].team);
printf("Matches Played: "); 
scanf("%d", &players[i].matches);
printf("Runs Scored: "); 
scanf("%d", &players[i].runs);
}
printf("\nCricket Player Statistics:\n");
for (int i = 0; i < 5; i++) {
printf("Name: %s, Team: %s, Matches: %d, Runs: %d\n", players[i].name, players[i].team, players[i].matches, players[i].runs);
}
return 0;
}
