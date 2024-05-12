#include <bits/stdc++.h>
using namespace std;
int selectionsort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
           
        }
         if (min != i)
            {
                arr[min] = arr[min] ^ arr[i];
                arr[i] = arr[min] ^ arr[i];
                arr[min] = arr[min] ^ arr[i];
            }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Before sorting:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    selectionsort(arr, n);
    cout << "\n after selection sort:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << endl;
    return 0;
}