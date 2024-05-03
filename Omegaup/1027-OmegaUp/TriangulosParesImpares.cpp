using namespace std;
#include <iostream>
#include  <bits/stdc++.h>
int m, n, nImpar, nPar, triangulosImpares=0, triangulosPares=0;
int main() {
    cin>>m>>n;
    if(n%2==0){
        nImpar=n-1;
        nPar=n;
    }else{
        nImpar=n;
        nPar=n-1;
    }

    for(int i=nImpar;i>=m;i-=2){
        for(int j=i;j>=m;j-=2){
            for(int z=j;z>=m;z-=2){
                if(z+j>i){
                    triangulosImpares++;
                }else{
                    z=m-1;
                }
            }
        }
    }
    for(int i=nPar;i>=m;i-=2){
        for(int j=i;j>=m;j-=2){
            for(int z=j;z>=m;z-=2){
                if(z+j>i){
                    triangulosPares++;
                }else{
                    z=m-1;
                }
            }
        }
    }
    cout<<triangulosImpares<<" "<<triangulosPares;


    return 0;
}
