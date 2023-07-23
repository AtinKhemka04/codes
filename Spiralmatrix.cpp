#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define rep(i, j, n) for (int i = j; i < n; i++)
#define mod 1000000007
#define endl '\n'
using namespace std;

//.........................................................................................................
int phi(int n)
{
    int result = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            result -= result / i;
        }
    }
    if (n > 1)
    {
        result -= result / n;
    }
    return result;
}
int expo(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = ans * a % mod;
        }
        a = a * a % mod;
        b >>= 1;
    }
    return ans;
}
vector<int> factor(int n)
{
    vector<int> ans;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                ans.pb(i);
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        ans.pb(n);
    }
    return ans;
}
vector<bool> primes(int n)
{
    vector<bool> ans(n + 1, true);
    ans[0] = ans[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (ans[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                ans[j] = false;
            }
        }
    }
    return ans;
}
bool perfect_sqrt(int n)
{
    double ans = sqrt(n);
    if (ans == (int)sqrt(n))
    {
        return true;
    }
    return false;
}
int lcm(int a, int b) { return a / __gcd(a, b) * b; }

#include <iostream>
using namespace std;

void spiralNumber(int size, int sa)
{

    int row = 0, col = 0;

    int boundary = size - 1;
    int sizeLeft = size - 1;
    int flag = 1;

    char move = 'r';
    int matrix[size][size] = {0};
    int ans = size * size;
    for (int i = 1; i < size * size + 1; i++)
    {

        if (ans > sa)
        {
            matrix[row][col] = 0;
        }
        else
            matrix[row][col] = ans;
        ans--;

        switch (move)
        {

        case 'r':
            col += 1;
            break;

        case 'l':
            col -= 1;
            break;

        case 'u':
            row -= 1;
            break;

        case 'd':
            row += 1;
            break;
        }
        if (i == boundary)
        {
            boundary += sizeLeft;

            if (flag != 2)
            {

                flag = 2;
            }
            else
            {

                flag = 1;
                sizeLeft -= 1;
            }

            switch (move)
            {
            case 'r':
                move = 'd';
                break;
            case 'd':
                move = 'l';
                break;
            case 'l':
                move = 'u';
                break;
            case 'u':
                move = 'r';
                break;
            }
        }
    }

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {

            int n = matrix[row][col];
            if (n == 0)
            {
                cout << "   ";
            }
            else if (n < 10)
            {
                cout << n << "  ";
            }
            else
            {
                cout << n << " ";
            }
        }

        cout << endl;
    }
}

signed main()
{
    int n;
    cin >> n;
    bool ans = perfect_sqrt(n);
    int n1;
    if (ans)
    {
        n1 = sqrt(n);
    }
    else
    {
        n1 = sqrt(n) + 1;
    }
    spiralNumber(n1, n);
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long double
// bool isPerfectSquare(ll x)
// {
//     // Find floating point value of
//     // square root of x.
//     if (x >= 0) {

//         long long sr = sqrt(x);

//         // if product of square root
//         //is equal, then
//         // return T/F
//         return (sr * sr == x);
//     }
//     // else return false if n<0
//     return false;
// }

// int main()
// {
//    ll n;
//    cin>>n;
//    ll size;
//    if(isPerfectSquare(n)) size=sqrt(n);
//    else size=sqrt(n)+1;
//     return 0;
// }
