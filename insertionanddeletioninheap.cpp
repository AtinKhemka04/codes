#include <bits/stdc++.h>
using namespace std;
int insert(int arr[], int n, int key)
{

    arr[n] = key;
    int i = n;
    while (i > 1)
    {
        int parent = i / 2;
        if (arr[parent] < arr[i])
        {
            swap(arr[parent], arr[i]);
            i = parent;
        }
        else
        {
            return 0;
        }
    }
}
int deletenode(int arr[], int n)
{
    int i = 1;
    while (i < n)
    {
        int left = arr[2 * i];
        int right = arr[(2 * i) + 1];
        int large = left > right ? 2 * i : (2 * i) + 1;
        if (arr[i] < arr[large])
        {
            swap(arr[i], arr[large]);
            i = large;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    int n, val;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cout << "Select operations: \n";
    cout << "1. Insert \n";
    cout << "2. Delete \n";
    int choice;
    cout << "Enter choice: ";
    while (cin >> choice)
    {
        switch (choice)
        {
        case 1:
            cin >> val;
            n += 1;
            insert(arr, n, val);
            cout << "Array after insertion:";
            for (int i = 1; i <= n; i++)
            {
                cout << arr[i] << "\t";
            }
            break;
        case 2:
            arr[1] = arr[n];
            n = n - 1;
            deletenode(arr, n);
            cout << "Array after deletion:";
            for (int i = 1; i <= n; i++)
            {
                cout << arr[i] << "\t";
            }
            break;
        default:
            exit(0);
        }
        cout << "\n Enter choice: ";
    }
    return 0;
}