<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int swap(int arr[], int min, int i)
{
    arr[min] = arr[min] ^ arr[i];
    arr[i] = arr[min] ^ arr[i];
    arr[min] = arr[min] ^ arr[i];
}
int partition(int arr[],int l,int h){
    int i=l-1;
    int pivot=arr[h];
    for(int j=l;j<h-1;j++){
        if(arr[j]<pivot){
            i++;
            if(i!=j)
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,h);
    return i+1;

}
int quicksort(int arr[], int low,int high)
{

    if(low<high){
        int pivot=partition(arr,low,high);
        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
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
    quicksort(arr, 0,n-1);
    cout << "\n after quick sort:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << endl;
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
int swap(int arr[], int min, int i)
{
    arr[min] = arr[min] ^ arr[i];
    arr[i] = arr[min] ^ arr[i];
    arr[min] = arr[min] ^ arr[i];
}
int partition(int arr[],int l,int h){
    int i=l-1;
    int pivot=arr[h];
    for(int j=l;j<h-1;j++){
        if(arr[j]<pivot){
            i++;
            if(i!=j)
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,h);
    return i+1;

}
int quicksort(int arr[], int low,int high)
{

    if(low<high){
        int pivot=partition(arr,low,high);
        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
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
    quicksort(arr, 0,n-1);
    cout << "\n after quick sort:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << endl;
    return 0;
}
>>>>>>> 6145df2e6edf6577d64161186124509ccee64e22
