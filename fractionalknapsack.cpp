<<<<<<< HEAD
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
bool compare(pair<int,int>p1,pair<int,int>p2){
    double v1= (double) p1.first/p1.second;
     double v2= (double) p2.first/p2.second;
     return v1>v2;
}
int main(){
    int n;
    cin>>n;
    vii a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    int w;
    cin>>w;
    sort(a.begin(),a.end(),compare);
    int ans =0;
    for(int i=0;i<n;i++){
        if(w>= a[i].second){
            ans+= a[i].first;
            w-=a[i].second;
            continue;
        }
        double vw=(double) a[i].first/a[i].second;
        ans+= vw*w;
        w=0;
        break;
    }
    cout<<ans<<endl;
    return 0;
=======
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
bool compare(pair<int,int>p1,pair<int,int>p2){
    double v1= (double) p1.first/p1.second;
     double v2= (double) p2.first/p2.second;
     return v1>v2;
}
int main(){
    int n;
    cin>>n;
    vii a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    int w;
    cin>>w;
    sort(a.begin(),a.end(),compare);
    int ans =0;
    for(int i=0;i<n;i++){
        if(w>= a[i].second){
            ans+= a[i].first;
            w-=a[i].second;
            continue;
        }
        double vw=(double) a[i].first/a[i].second;
        ans+= vw*w;
        w=0;
        break;
    }
    cout<<ans<<endl;
    return 0;
>>>>>>> 6145df2e6edf6577d64161186124509ccee64e22
}