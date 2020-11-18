#include<bits/stdc++.h>
using namespace std;

 int main(){
long long int t,h,p;
cin>>t;
while(t--){
    cin>>h>>p;
    while(h>0 && p>0){
        h=h-p;
        p=p/2;

    }
    if(p==0){
        cout<<0;
    }else{
        cout<<1;
    }
}
return 0;

}
