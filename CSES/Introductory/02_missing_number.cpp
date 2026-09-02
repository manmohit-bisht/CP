#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> numbers(n - 1);
    for (int i = 0; i < (n - 1); i++)
    {
        cin >> numbers[i];
    }
    long long total_sum = (n * (n + 1)) / 2;
    long long missing_sum = 0;
    for (int i = 0; i < (n - 1); i++)
    {
        missing_sum += numbers[i];
    }
    long long missing_number = total_sum - missing_sum;
    cout << missing_number;
    return 0;
}