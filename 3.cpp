#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
// answer=6857
bool prime(long n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    ios::sync_with_stdi o(false);
    cin.tie(0);
   const ll n=600851475143;
   
   for(long i=sqrt(n);i>=0;i--){
        if(prime(i)){
           
            if(n%i==0){
                cout<<i<<endl;
                return 0;
            }
        }
   }
 
    return 0;
}