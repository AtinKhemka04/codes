#include <bits/stdc++.h>
using namespace std;
int merge(int arr[],int l,int mid,int h){
    int i=l;
    int j=mid+1;
    int k=l;
    int b[h-l];
    while(i<=mid && j<=h){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            i++;
            k++;
        }
        else{
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    if(i>mid){
     while(j<=h){
         b[k]=arr[j];
         j++;
         k++;
     }
    }
    else{
        while(i<=mid){
            b[k]=arr[i];
            i++;
            k++;
        }
    }
    for(int a=l;a<=h;a++){
        arr[a]=b[a];
    }
}
int mergesort(int arr[], int low,int high)
{

    if(low<high){
        int mid=low+(high-low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
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
    mergesort(arr, 0,n-1);
    cout << "\n after Merge sort:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << endl;
    return 0;
}
