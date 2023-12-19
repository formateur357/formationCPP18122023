struct Date
{
    char jour;
    char mois;
    short padding;
    int annee;
};

struct Exemple
{
    int a = 10;
    double b = 3.14;
};

struct Exemple
{
    int a;
    double b;

    Exemple() : a(10), b(3.14) {}
};

Exemple ex = {10, 3.0};

struct Exemple
{
    int a;
    double b;

    void initialiser()
    {
        a = 10;
        b = 3.14;
    }
};