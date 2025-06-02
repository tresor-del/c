#include <stdio.h>
#define SIZE 5

int main () {

    int note;

    int tableau_de_note[SIZE] = {};

    for (int i = 0; i < 5; i++)
    {
        printf("Note %d: ", i+1);
        scanf("%d", &note);
        tableau_de_note[i] = note;
    }

    printf("Le tableau de note est: [");
    for (int i = 0; i < 5; i++)
    {
        if (i == 4) {
            printf("%d", tableau_de_note[i]);
        } else {
            printf("%d, ", tableau_de_note[i]);
        }
    }
    printf("]\n");

    return 0;
}
