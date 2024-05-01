using namespace std;
#include <iostream>
#include  <bits/stdc++.h>
int a,b,c,n;
int main() {
    cin>>a>>b>>c;
    for(int i=1;i<=a;i+=2){
        n+=i;
    }
    for(int i=1;i<=b;i*=2){
        n-=i;
    }
    while(n%c==0){
        n/=c;
    }
    cout<<n;
    return 0;
}
