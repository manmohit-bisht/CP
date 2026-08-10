/*
Find the sum of n numbers using n*(n+1)/2 if sum is odd no solution is possible
if sum is even the sum of both sets should be sum/2
if even check using greedy approach
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long long n;
    cin >> n;

    long long sum = (n * (n + 1)) / 2;
    if (sum % 2)
    {
        cout << "NO";
        return 0;
    }

    long long target = sum / 2;
    vector<long long> set1;
    vector<long long> set2;
    while (n >= 1)
    {
        if (n <= target)
        {
            set1.push_back(n);
            target -= n;
        }
        else
        {
            set2.push_back(n);
        }
        n--;
    }
    cout << "YES\n";
    cout << set1.size() << "\n";
    for (int i = 0; i < set1.size(); i++)
    {
        cout << set1[i] << " ";
    }
    cout << "\n"
         << set2.size() << "\n";
    for (int i = 0; i < set2.size(); i++)
    {
        cout << set2[i] << " ";
    }

    return 0;
}