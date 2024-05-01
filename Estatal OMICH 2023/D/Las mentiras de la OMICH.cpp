using namespace std;
#include <iostream>
#include <bits/stdc++.h>

int  aux;
double minu,may,resultados ,n;
string frase;
int main() {
    getline(cin,frase);
    n=frase.size();
    for(int i=0;i<n;i++){
        aux=frase[i];
        if(aux>=65 && aux<=90){
            may=may+1;

        }else{
            if(aux!=32)
                minu=minu+1;
        }
    }
    resultados=(may/(minu+may));
    if(resultados>0.35 && resultados<0.65 )
        cout<<"Es mentira "<<floor(10000*resultados)/10000;
    else
        printf("Verda de dios");

    return 0;
}
