#include<bits/stdc++.h>
using namespace std;
int insertionsort(int arr[],int n){
    
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Before sorting:"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"\t";
    insertionsort(arr,n);
    cout<<"\n after insertion sort:"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"\t";
    cout<<endl;
    return 0;
}
