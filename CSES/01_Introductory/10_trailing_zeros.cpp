/*
till 20! this pattern follows
0 - 4! -> 0 trailing zero
5! - 9! -> 1 trailing zero
10! - 14! -> 2 trailing zero
15! - 19! -> 3 trailing zero
20! -> 4 trailing zero
but 25 will contribute to a additional 5
similarly 125 will contribute to another 5
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    long long n;
    cin >> n;
    long long count = 0;
    long long powFive = 5;
    while (n >= powFive)
    {
        count += (n / powFive);
        powFive *= 5;
    }
    cout << count << "\n";
    return 0;
}