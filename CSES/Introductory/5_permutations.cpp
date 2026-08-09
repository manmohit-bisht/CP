#include <bits/stdc++.h>
using namespace std;
void printEven(int n)
{
    int i = 2;
    while (i != n + 2)
    {
        cout << i << " ";
        i += 2;
    }
}
void printOdd(int n)
{
    int i = 1;
    while (n + 2 != i)
    {
        cout << i << " ";
        i += 2;
    }
}
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    if (n <= 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    if (n % 2)
    {
        printEven(n - 1);
        printOdd(n);
    }
    else
    {
        printEven(n);
        printOdd(n - 1);
    }

    return 0;
}