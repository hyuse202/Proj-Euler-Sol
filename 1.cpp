#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
// answer=233168
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    const int n=1000;
    long ans=0;
    for(int i=3;i<n;i++){
        if(i%3==0 || i%5==0){
            ans+=i;
            
        }
    }
    cout<<ans;
    return 0;
}