#include <iostream>

// commentaire de ligne

/*
*** commentaire sur plusieurs lignes
*/

using namespace std;

int main()
{
    char str[] = "JeanJean";
    cout << "Hello world !\n";
    printf("Hello World %15s!\n", str);

    return 0;
}

// Afin de connaitre votre version de c++
// int main()
// {
//     if (__cplusplus == 201703L)
//         std::cout << "C++17\n";
//     else if (__cplusplus == 201402L)
//         std::cout << "C++14\n";
//     else if (__cplusplus == 201103L)
//         std::cout << "C++11\n";
//     else if (__cplusplus == 199711L)
//         std::cout << "C++98\n";
//     else
//         std::cout << "Unknown C++ version\n";
//     return 0;
// }
