#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int res = 0;
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (i > 0)
            {
                if (s[i] <= s[i - 1])
                {
                    res = 0;
                }
            }

            res++;

            cout << res << " ";
        }
        cout << "\n";

        t--;
    }
    return 0;
}