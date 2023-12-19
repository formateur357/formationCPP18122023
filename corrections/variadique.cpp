#include <stdio.h>
#include <stdarg.h>

double calculMoyenne(int nombreDeValeurs, ...)
{
    va_list args;
    double somme = 0;
    int nb = 0;
    double nb2 = 0.0;

    va_start(args, nombreDeValeurs);

    for (int i = 0; i < nombreDeValeurs; i += 2)
    {
        nb = va_arg(args, int);
        printf("nb = %d\n", nb);
        somme += (double)nb;
        nb2 = va_arg(args, double);
        printf("nb = %f\n", nb2);
        somme += nb2;
        nb = 0;
        nb2 = 0;
    }

    va_end(args);

    return static_cast<double>(somme) / nombreDeValeurs;
}

int main()
{
    // printf("Moyenne de 1, 2, 3 : %f\n", calculMoyenne(3, 1, 2, 3));
    // printf("Moyenne de 4, 5, 6, 7 : %f\n", calculMoyenne(4, 4, 5, 6, 7));
    printf("Moyenne de 4, 5.9, 6, 7.2 : %f\n", calculMoyenne(4, 4, 5.9, 6, 7.2));
}