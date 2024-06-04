<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int l, int h, int val)
{
    while (l < h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == val)
        {
            return mid;
        }
        if (arr[l]<arr[mid]){
            if(val>= arr[l] && val<arr[mid]) {h=mid-1;}
            else{l=mid+1;}
        }
        else{
            if(val>arr[mid]&& val<=arr[h]){l=mid+1;}
            else{h=mid-1;}
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int val;
    cout << "enter data to be searched for:";
    cin >> val;
    int ans = binarysearch(arr, 0, n - 1, val);

    cout << "Element found at index:" << ans << endl;
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int l, int h, int val)
{
    while (l < h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == val)
        {
            return mid;
        }
        if (arr[l]<arr[mid]){
            if(val>= arr[l] && val<arr[mid]) {h=mid-1;}
            else{l=mid+1;}
        }
        else{
            if(val>arr[mid]&& val<=arr[h]){l=mid+1;}
            else{h=mid-1;}
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int val;
    cout << "enter data to be searched for:";
    cin >> val;
    int ans = binarysearch(arr, 0, n - 1, val);

    cout << "Element found at index:" << ans << endl;
    return 0;
>>>>>>> 6145df2e6edf6577d64161186124509ccee64e22
}