#include <iostream>
using namespace std;
int main()
{
    unsigned long int n;
    cin >> n;
    if (n != 1 && n < 4)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    for (size_t i = 2; i <= n; i += 2)
    {
        cout << i << " ";
    }
    for (size_t i = 1; i <= n; i += 2)
    {
        cout << i << " ";
    }
    return 0;
}
