#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

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