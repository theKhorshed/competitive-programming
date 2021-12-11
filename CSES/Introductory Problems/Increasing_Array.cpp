#include <iostream>
#include <vector>
using namespace std;
int main()
{
    unsigned long int n, moves = 0;
    cin >> n;
    vector<unsigned long int> numbers(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> numbers[i];
        if (i > 0 && numbers[i - 1] > numbers[i])
        {
            moves += numbers[i - 1] - numbers[i];
            numbers[i] += numbers[i - 1] - numbers[i];
        }
    }
    cout << moves << endl;
    return 0;
}
