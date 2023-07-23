#include <bits/stdc++.h>
using namespace std;
int mincost(int a[], int n)
{
    int ans = 0;
    priority_queue<int> p;
    for (int i = 0; i < n; i++)
    {
        p.push(-a[i]);
    }
    while (p.size() > 1)
    {
        int first = p.top();
        p.pop();
        int second = p.top();
        p.pop();
        int sum = (-first) + (-second);
        p.push(-sum);
        ans += sum;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Minimum cost for N ropes is:" << mincost(a, n) << endl;
    return 0;
}