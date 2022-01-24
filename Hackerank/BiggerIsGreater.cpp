#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while (t > 0)
    {
        string w;
        int l = w.length();
        int i = 0;

        for (i = l - 1; i > 0; i--)
        {
            if (w[l] > w[l - 1])
            {
                break;
            }
        }

        if (i == 0)
        {
            cout << "No Answer";
        }
        else
        {
            int firstSmallNum = w[i - 1], secondSmallNum = i;

            for (int start = i + 1; start < l; start++)
            {
                if (w[start] > firstSmallNum && w[start] < w[secondSmallNum])
                {
                    secondSmallNum = start;
                }
            }

            swap(w, i - 1, secondSmallNum);

            sort(w, i, l);
        }

        cout << w;
        t--;
    }
    return 0;
}