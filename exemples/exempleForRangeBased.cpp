#include <iostream>
#include <list>

int main()
{
    std::list<int> maListe = {1, 2, 3, 4, 5};

    for (int element : maListe)
    {
        std::cout << element << " ";
    }

    std::cout << std::endl;

    return 0;
}