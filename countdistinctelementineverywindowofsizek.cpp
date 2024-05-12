#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> m;
    for (int j = 0; j < k; j++)
    {
        m[arr[j]]++;
    }
    cout << m.size() << endl;
    for (i = k; i < n; i++)
    {
        if (m[arr[i - k]] == 1)
            m.erase(arr[i - k]);
        else
            m[arr[i - k]]--;
        m[arr[i]]++;
        cout << m.size() << endl;
    }
    return 0;
}
