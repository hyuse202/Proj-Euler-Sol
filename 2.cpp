#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
// answer=4613732
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
   const int maxn=4*1e6+1;
   long fi=1;
   long se=2;
    long ans=0;
   while(se<maxn){
    ans+=(se%2==0)?se:0;
    se=se+fi;
    fi=se-fi;
   }
   cout<<ans;
    return 0;
}