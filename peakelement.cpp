#include<iostream>
using namespace std;

int findpeakelement(int arr[],int n,int low,int high){
    int mid=low+(high - low)/2;
    if((mid==0 || arr[mid-1]<= arr[mid]) && (mid==n-1 || arr[mid+1]<= arr[mid])){
        return mid;
    }
    else if(mid>0 && arr[mid-1]> arr[mid]){
        return findpeakelement(arr,n,low,mid-1);
    }
    else{
        return findpeakelement(arr,n,mid+1,high);
    }
}
int main(){
    int arr[]={0,6,8,5,7,9};
    int n=6;
    cout<<"peak element index:"<<findpeakelement(arr,n,0,n-1)<<endl;

    return 0;
}