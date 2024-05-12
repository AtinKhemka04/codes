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
    vector<vi>v;
    for(int i=0;i<n;i++){
        int start,end;
        cin>>start>>end;
        v.push_back({start,end});
    }
    sort(v.begin(),v.end(),[&](vi &a,vi &b){
        return a[1] < b[1];

    });
    int take=1;
    int end=v[0][1];
    for(int i=1;i<n;i++){
        if(v[i][0] >=end){
            take++;
            end=v[i][1];
        }
       
    }
     cout<<take<<"\n";
    return 0;
}