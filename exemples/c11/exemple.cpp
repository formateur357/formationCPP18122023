// #include <iostream>
// using namespace std;
// int main()
// {
//     int j = 20;
//     int *pj = nullptr;
//     cout << "j = " << j << " (" << sizeof(j) << " octets)" << endl;
//     cout << "&j = " << &j << " (" << sizeof(&j) << " octets)" << endl;
//     cout << "pj = " << pj << " (" << sizeof(pj) << " octets)" << endl;
//     if (pj != nullptr)
//         cout << "*pj = " << *pj << " (" << sizeof(*pj) << " octets)" << endl;
//     pj = &j;
//     *pj = 30;
//     cout << "j = " << j << " (" << sizeof(j) << " octets)" << endl;
//     cout << "&j = " << &j << " (" << sizeof(&j) << " octets)" << endl;
//     cout << "pj = " << pj << " (" << sizeof(pj) << " octets)" << endl;
//     if (pj)
//         cout << "*pj = " << *pj << " (" << sizeof(*pj) << " octets)" << endl;
//     return 0;
// }

// #include <iostream>
// #include <memory>

// using namespace std;

// class Point
// {
// private:
//     double x;
//     double y;

// public:
//     Point() : Point(0., 0.) {}
//     Point(double x, double y) : x(x), y(y) { cout << __FUNCTION__ << endl; }
//     Point(const Point &p) : x(p.x), y(p.y) { cout << __FUNCTION__ << endl; }
//     ~Point() { cout << __FUNCTION__ << endl; }
//     double getX() const { return x; }
//     double getY() const { return y; }
// };

// int main()
// {
//     unique_ptr<Point> p1(new Point(10, 5));
//     std::cout << "p1 : " << (p1 ? "not null" : "null") << endl;
//     cout << p1->getX() << "," << p1->getY() << endl;
//     unique_ptr<Point> p2(std::move(p1));
//     std::cout << "p1 : " << (p1 ? "not null" : "null") << endl;
//     std::cout << "p2 : " << (p2 ? "not null" : "null") << endl;
//     cout << p2->getX() << "," << p2->getY() << endl;
//     unique_ptr<Point> p3;
//     std::cout << "p3 : " << (p3 ? "not null" : "null") << endl;
//     // p3 = p2; // erreur !
//     return 0;
// }

#include <iostream>
using namespace std;
class Nombre
{
public:
    Nombre() : Nombre(42) {}
    Nombre(int nombre) : nombre(nombre) {}
    int getNombre() const { return nombre; }

private:
    int nombre;
};
int main()
{
    Nombre n1;
    Nombre n2(2);
    cout << "n1 = " << n1.getNombre() << endl;
    cout << "n2 = " << n2.getNombre() << endl;
    return 0;
}
