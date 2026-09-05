#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<long long> lst(n);

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        lst[i] = x;
    }

    sort(lst.begin(), lst.end());

    auto itr = unique(lst.begin(), lst.end()); // unique(function returns a iterator not an int)
    int count = itr - lst.begin();             // subtract 2 iterators to get difference btw them i.e itr - 0

    cout << count;

    return 0;
}