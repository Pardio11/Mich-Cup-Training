using namespace std;
#include <iostream>
#include <bits/stdc++.h>

int  a, b;
double resultados,igualdad,n;
string adnUno, adnDos;
int main() {
    cin>>n;
    cin>>adnUno>>adnDos;
    a=adnUno[0];
    b=adnUno[1];
    for(int i=0;i<n;i++){
        if(adnUno[i]==adnDos[i] || adnUno[i]==adnDos[i]-32 ||adnUno[i]-32==adnDos[i]){
            igualdad++;
        }
    }

    resultados=double(100*igualdad/n);
    printf("%0.2lf",resultados);
    return 0;
}
