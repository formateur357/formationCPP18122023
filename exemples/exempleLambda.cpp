#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    vector<int> numbers = {4, 1, 3, 2, 5};

    // Tri par ordre croissant
    sort(numbers.begin(), numbers.end(), [](int a, int b) -> bool
         { return a < b; });

    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}