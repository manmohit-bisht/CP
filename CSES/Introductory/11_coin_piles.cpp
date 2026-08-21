/*
since every time 3 coins are removed sum of a+b % 3 should be 0
however the difference shouldn't be so huge that one pile finishes before 2nd one i.e max(a, b) <= min(a, b) * 2)
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t, a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (((a + b) % 3 == 0) and max(a, b) <= min(a, b) * 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}