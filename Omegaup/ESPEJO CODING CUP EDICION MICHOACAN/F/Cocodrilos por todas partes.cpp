using namespace std;
#include <iostream>
#include <bits/stdc++.h>
char action;
long long n,q,l,r,parity,increment,crocodiles[3000000], crocodilesParity[3000000];
bool changed=false;
void findMax(long long start, long long finish, long long crocodiles[]){
    long long maxi=-900000000;
    for(long long i=start;i<=finish;i++){
        if(crocodiles[i]>maxi){
            maxi=crocodiles[i];
        }
    }
    cout<<maxi<<endl;
}
void findParity(long long start, long long finish, long long crocodiles[], long long parity){
    long long countParity=0;
    long long amount=1+finish-start;
    if(start>0)
        start--;
    countParity=crocodilesParity[finish]-crocodilesParity[start];
    if(parity==0)
        countParity=amount-countParity;
    cout<<countParity<<endl;
}
void fedCrocodile(long long start, long long finish, long long increment){
    for(long long i=start;i<=finish;i++){
        crocodiles[i]+=increment;
    }
}


int main() {
    cin>>n;

    for(long long i=0;i<n;i++){
        cin>>crocodiles[i];
        if(i>=1){
            crocodilesParity[i]=crocodilesParity[i-1]+(crocodiles[i]%2);
        }else{
            crocodilesParity[i]=(crocodiles[i]%2);
        }

    }
    cout<<endl;
    for(long long i=0;i<n;i++){
        cout<<crocodilesParity[i]<<" ";
    }
    cout<<endl;
    cin>>q;
    for(long long i=0;i<q;i++){
        cin>>action>>l>>r;
        if(action=='M'){
            findMax(l-1, r-1, crocodiles);
        }
        if(action=='C'){
            cin>>parity;
            if(changed){
                for(long long z=0;z<n;z++){
                    if(z>=1){
                        crocodilesParity[z]=crocodilesParity[z-1]+(crocodiles[z]%2);
                    }else{
                        crocodilesParity[z]=(crocodiles[z]%2);
                    }

                }
                cout<<endl;
                for(long long z=0;z<n;z++){
                    cout<<crocodilesParity[z]<<" ";
                }
                cout<<endl;
                changed=false;
            }
            findParity(l-1, r-1, crocodiles,parity);
        }
        if(action=='U'){
            cin>>increment;
            changed=true;
            fedCrocodile(l-1, r-1,increment);
        }
    }
    return 0;
}
