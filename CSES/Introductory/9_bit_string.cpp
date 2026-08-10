/*
10^9 + 7 modulo means take the result and return remainder after dividing it by 10^9 + 7
we can use binary exponentiation with modulo
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long long exp;
    cin >> exp;

    long long base = 2;
    long long mod = 1000000007;
    long long res = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    cout << res << "\n";

    return 0;
}