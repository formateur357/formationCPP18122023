#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    vector<int> original = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> filtered();

    copy_if(original.begin(), original.end(), back_inserter(filtered),
            [](int x)
            { return x % 2 == 0; });

    // vector<int> filtered(original.size());
    // auto it = copy_if(original.begin(), original.end(), filtered.begin(),
    //                   [](int x)
    //                   { return x % 2 == 0; });

    // filtered.resize(distance(filtered.begin(), it));

    return 0;
}