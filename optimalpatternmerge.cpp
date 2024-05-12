#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<unordered_map>
#include<queue>
#include<stack>
#include<algorithm>
#include<string>

using namespace std;
#define pii pair<int,int>
#define vii vector<pii>
#define vi vector<int>
int main(){
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    priority_queue<int,vi,greater<int>> minheap;
    for(int i=0;i<n;i++){
      minheap.push(a[i]);
    }
    int ans=0;
    int e1,e2;
    while(minheap.size()>1){
        e1=minheap.top();
        minheap.pop();
        e2=minheap.top();
         minheap.pop();
         ans+=e1+e2;
         minheap.push(e1+e2);
    }
    cout<<ans<<endl;
    return 0;
   
}