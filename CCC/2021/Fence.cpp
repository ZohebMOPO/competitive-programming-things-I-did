#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sides;
    int j = 0;
    float sum;
    float tempo;

    cin >> sides;

    int arr1[sides + 1];

    for (int i = 0; i < sides + 1; i++)
    {
        cin >> arr1[i];
    }

    int arr2[sides];

    for (int i = 0; i < sides; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < sides; i++)
    {
        tempo = arr2[i] * (arr1[j] + arr1[j + 1]) / 2;

        sum += tempo;

        j++;
    }

    cout << sum << endl;

    return 0;
}