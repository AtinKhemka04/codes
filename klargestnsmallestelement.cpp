#include <bits/stdc++.h>
using namespace std;
int klaegest(int a[], int n, int k)
{
    priority_queue<int> p;
    for (int i = 0; i < k; i++)
    {
        p.push(-a[i]);
    }
    for (int i = k; i < n; i++)
    {
        if (-p.top() < a[i])
        {
            p.pop();
            p.push(-a[i]);
        }
    }
    return -(p.top());
}
int ksmallest(int a[], int n, int k)
{
    priority_queue<int> p;
    for (int i = 0; i < k; i++)
    {
        p.push(a[i]);
    }
    for (int i = k; i < n; i++)
    {
        if (p.top() > a[i])
        {
            p.pop();
            p.push(a[i]);
        }
    }
    return (p.top());
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }
    int k;
    cin >> k;
    cout << "Kth Largest Element is:" << klaegest(a, n, k) << endl;
    cout << "Kth Smallest Element is:" << ksmallest(a, n, k) << endl;
    return 0;
}