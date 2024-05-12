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
#define setBits(x) builtin_popcount(x)
int main(){
    int n;
    cin>>n;
   vi a(n);
 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x,ans=0;
    cin>>x;
    sort(a.begin(),a.end(),greater<int>());
    for(int i=0;i<n;i++){
        ans+=x/a[i];
        x-=x/a[i]*a[i];
    }
    cout<<ans<<endl;
    return 0;
}