#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int max_len = 1;
    int n = 1;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            n++;
            max_len = max(max_len, n);
        }
        else
            n = 1;
    }
    cout << max_len;
    return 0;
}