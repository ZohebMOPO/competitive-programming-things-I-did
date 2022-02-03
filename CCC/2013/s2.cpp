#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin >> c;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr[0], arr[n - 1]);
    int count = 0;
    int sum = 0;
    while (c > sum)
    {
        int i = 0;
        sum += arr[i];
        count++;
        i++;
    }

    cout << count << endl;
    return 0;
}