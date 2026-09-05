/*
gray code of any number n --> [n XOR (n>>1)]
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int max_number = round(pow(2, n)) - 1;
    for (int i = 0; i <= max_number; i++)
    {
        bitset<16> ans(i ^ (i >> 1));
        cout << ans.to_string().substr(16 - n) << "\n";
    }

    return 0;
}