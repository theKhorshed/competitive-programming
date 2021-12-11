#include <iostream>
using namespace std;
int main()
{
    int max = 1, currentMax = 1;
    string line;
    cin >> line;
    for (int i = 1; i < line.size(); i++)
    {
        currentMax = line[i - 1] == line[i] ? ++currentMax : 1;
        max = currentMax > max ? currentMax : max;
    }
    cout << max;
}
