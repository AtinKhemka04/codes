<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int bubblesort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        bool swap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap=true;
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1];
            }
        }
        if(swap==false)
        break;
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
    bubblesort(arr,n);
    cout<<"\n after bubble sort:"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"\t";
    cout<<endl;
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;
int bubblesort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        bool swap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap=true;
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1];
            }
        }
        if(swap==false)
        break;
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
    bubblesort(arr,n);
    cout<<"\n after bubble sort:"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"\t";
    cout<<endl;
    return 0;
>>>>>>> 6145df2e6edf6577d64161186124509ccee64e22
}