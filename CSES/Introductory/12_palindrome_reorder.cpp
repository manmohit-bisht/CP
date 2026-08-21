/*
in every palindrome only 1 odd frequency of a char can be present
create a frequency map and start adding same chars to left++ and right
if a single off frequency is present it's always going to be in the middle
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    string s;
    cin >> s;
    int freqArr[26] = {0};

    for (char &ch : s)
    {
        freqArr[ch - 'A']++;
    }

    int oddCount = 0;
    int oddIndex = -1;

    for (int i = 0; i < 26; i++)
    {
        if (freqArr[i] % 2)
        {
            oddCount++;
            oddIndex = i;
        }
    }

    if (oddCount > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    string ans(s.size(), ' ');
    int left = 0, right = s.size() - 1;

    for (int i = 0; i < 26; i++)
    {
        while (freqArr[i] > 1)
        {
            ans[left++] = (char)('A' + i);
            ans[right--] = (char)('A' + i);
            freqArr[i] -= 2;
        }
    }

    if (oddIndex != -1)
    {
        ans[left] = (char)('A' + oddIndex);
    }

    cout << ans << endl;
    return 0;
}