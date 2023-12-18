#include <iostream>

using namespace std;

int main()
{
    int t[5] = {0, 2, 3, 6, 8};      // un tableau de 5 entiers
    int *p1 = NULL;                  // le pointeur est initialisé à NULL (précaution obligatoire)
    int *p2;                         // pointeur non initialisé : il pointe donc sur n’importe quoi (gros danger)
    p1 = t;                          // p1 pointe sur t c’est-a-dire la première case du tableau // identique a : p1 = &t[0];
    p2 = &t[1];                      // p2 pointe sur le 2eme élément du tableau
    *p1 = 4;                         // la première case du tableau est modifiée printf("%d ou %d\n", *p1, t[0]); // affiche 4 ou 4
    printf("%d ou %d\n", *p2, t[1]); // affiche 2 ou 2
    printf("%p ou %p\n", p2, &t[1]); // affiche 2 ou 2
    p2 += 2;                         // p2 pointe sur le 4eme élément du tableau (indice 3) printf("%d ou %d\n", *p2, t[3]); // affiche 6 ou 6
    printf("%p ou %p\n", p2, &t[3]); // affiche 2 ou 2
    // on peut utiliser les [] sur un pointeur :
    p1[1] = 8; // identique à : *(p1+1) = 8; ou a : t1[1] = 8; printf("%d\n", t[1]); // affiche 8
    // et inversement :
    *(t + 1) = 10; // identique à : t[1] = 10; printf("%d\n", t[1]); // affiche 10
}