#include <list>
#include <iostream>
#include <algorithm>
using namespace std;
// Foncteur servant à libérer un pointeur (applicable à n’importe quel type)
class Delete
{
public:
    template <class T>
    void operator()(T *&p) const
    {
        cout << "delete " << p << endl;
        delete p;
        p = NULL;
    }
};

int main()
{
    // Création d’une liste de pointeurs
    std::list<int *> l;
    l.push_back(new int(5));
    l.push_back(new int(0));
    l.push_back(new int(1));
    l.push_back(new int(6));
    // Destruction de la liste : attention il faut bien libérer les pointeurs avant la destruction de la liste !
    std::for_each(l.begin(), l.end(), Delete());
    return 0;
}