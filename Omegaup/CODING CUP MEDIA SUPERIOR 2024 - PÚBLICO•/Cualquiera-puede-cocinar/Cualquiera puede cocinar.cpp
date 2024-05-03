using namespace std;
#include <iostream>
#include  <bits/stdc++.h>
long long n, auxN,k,findK, contador;


bool busquedaBiniaria(long long findX, long long fin, long long arreglo[]){
    long long inicio=0;
    bool found = false;
    while(inicio<=fin && !found){
        long long middle=(inicio+fin)/2;
        if(arreglo[middle] == findX){
            found = true;
        }else{
            if(arreglo[middle] > findX){
                fin=middle-1;
            }else{
                inicio=middle+1;
            }
        }
    }

    return found;
}

int main() {
    cin>>n;
    long long criticas[n];
    for(int i=0;i<n;i++){
        cin>>criticas[i];
    }
    sort(criticas, criticas+n);
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>findK;
        if(busquedaBiniaria(findK,n-1,criticas))
            contador++;

    }
    cout<<contador;

    return 0;
}
