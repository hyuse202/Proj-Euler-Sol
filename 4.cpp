#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
// answer=25164150
const int n=100;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
   ll s=0;
   for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
        s+=(i*j);
    }
   }
   cout<<s*2;
 
    return 0;
}