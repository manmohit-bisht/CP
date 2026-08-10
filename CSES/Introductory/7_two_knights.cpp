/*
Calculate the number of 2x3 and 3x2 matrices in nxn matrix in each of 2x3 or 3x2 there are 2 ways to place a knight
such that they attack each other
-> i.e 2 [(n-1)(n-2) + (n-2)(n-1)]
-> 4(n-1)(n-2)
There are n^2 aquares let it be N
1st knight have chance to be placed on N squares and 2nd on N-1 i.e N * (N-1)
but divide it by 2 since both knights are identical N*(N-1)/2
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    for (int i = 1; i <= n; i++)

    {
        long long N = i * i; // total no. of squares in chess board
        long long total_combinations = (N * (N - 1)) / 2;
        long long ans = total_combinations - 4 * (i - 1) * (i - 2);
        cout << ans << "\n";
    }

    return 0;
}
