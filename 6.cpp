#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
// answer=104743
const int n=104750;
bool isprime(ll x){
    if(x<2)return false;
    for(ll i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<ll>ans;
    for(ll i=2;i<=n;i++){
        if(isprime(i)){
            ans.push_back(i);
        }
    }
   // cout<<(int)ans.size()<<" ";
     cout<<ans[10000];
    return 0;
}