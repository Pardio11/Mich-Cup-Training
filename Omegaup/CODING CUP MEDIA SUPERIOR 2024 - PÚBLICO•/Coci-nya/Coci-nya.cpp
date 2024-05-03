using namespace std;
#include <iostream>
#include  <bits/stdc++.h>
long long n,k,combinaciones;
int main() {
    cin>>n>>k;
    int condimentos[n];
    for(int i=0; i<n;i++){
        cin>>condimentos[i];
    }

    for(int i=0; i<n;i++){
        int potencia=condimentos[i];
        if(potencia==k){
            combinaciones++;
        }
        for(int j=i+1; j<n;j++){

            potencia+=condimentos[j];
            if(potencia==k){
                combinaciones++;
            }
        }
    }
    cout<<combinaciones;
    return 0;
}
