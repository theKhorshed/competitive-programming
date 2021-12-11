#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int N, input, missing = -1;
    vector<int> numbers;
    cin >> N;
    for (int i = 0; i < N - 1; i++)
    {
        cin >> input;
        numbers.push_back(input);
    }
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i <= N - 1; i++)
    {
        if (numbers[i] != i + 1)
        {
            missing = numbers[i] - 1;
            break;
        }
    }

    cout << (missing > 0 ? missing : N);

    return 0;
}
