/*
at every layer k k^2 is max element so initial element must be max element of previous layer + 1 i.e (k-1)^2 + 1
range = (k-1)^2 + 1 --> k^2
the max of y,x will decide k
*/

#include <bits/stdc++.h>
using namespace std;

long long calculateSpiral(long long y, long long x)
{
    long long k = max(y, x);
    long long max_element = k * k;
    long long initial_element = (k - 1) * (k - 1) + 1;

    if (k % 2)
    {
        if (y >= x)
        {
            return initial_element + (x - 1);
        }
        else
        {
            return max_element - (y - 1);
        }
    }
    else
    {
        if (x >= y)
        {
            return initial_element + (y - 1);
        }
        else
        {
            return max_element - (x - 1);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    long long y, x;
    for (int i = 0; i < t; i++)
    {
        cin >> y >> x;
        cout << calculateSpiral(y, x) << "\n";
    }

    return 0;
}