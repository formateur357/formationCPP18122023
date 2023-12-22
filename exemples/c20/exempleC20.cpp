#include <ranges>
#include <vector>
#include <algorithm>
// #include <iostream>

using namespace std;

#include <concepts>
#include <type_traits>
#include <iostream>

// template avec contraintes explicites
template <typename T>
concept Integral = std::is_integral_v<T>;

template <Integral T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    // std::ranges
    vector<int> v = {1, 2, 3, 4, 5};

    auto even = v | std::views::filter([](int n)
                                       { return n % 2 == 0; });
    ranges::for_each(even, [](int n)
                     { cout << n << " "; });
}

// coroutine

// std::format ; formatage de chaine de type python

// std::span => Vue sur les tableaux => std::span<int>