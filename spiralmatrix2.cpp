#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int top = 0;
    int left = 0;
    int ans[3][3];
    int bottom = 2;
    int right = 2;
    int dir = 0;
    // int count = 0;
    while (top <= bottom && left <= right)
    {

        if (dir == 0)
        {
            for (int i = left; i <= right; i++)
            {
                ans[top][i] = n--;
            }
            top = top + 1;
        }
        else if (dir == 1)
        {
            for (int i = top; i <= bottom; i++)
            {
                ans[i][right] = n--;
            }
            right -= 1;
        }
        else if (dir == 2)
        {
            for (int i = right; i >= left; i--)
            {
                ans[bottom][i] = n--;
            }
            bottom -= 1;
        }
        else if (dir == 3)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans[i][left] = n--;
            }
            left += 1;
        }
        dir = (dir + 1) % 4;
    }

    // int x = 0;
    // int an[3][3];
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         an[i][j] = ans[x++];
    //     }
    // }
    for (int i = 0; i < 3; i++)

    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}