using namespace std;
#include <iostream>
#include <bits/stdc++.h>

long long x, y ;
long double velocidad, masa,dano,traje, c ;
int main() {
    cin>>x>>y;
    for(long long i=0;i<x;i++){
        cin>>velocidad>>masa;
        dano+=(velocidad*velocidad*masa)/2;
    }
    for(long long i=0;i<y;i++){
        long long wave, supeWave;
        cin>>traje>>c;
        wave=dano/traje;
        supeWave=wave/c;
        cout<<"El traje "<<i+1<<": "<<wave<<" "<<supeWave<<endl;
    }
    return 0;
}
