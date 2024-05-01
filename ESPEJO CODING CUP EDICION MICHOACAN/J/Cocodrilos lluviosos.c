using namespace std;
#include <iostream>
#include <bits/stdc++.h>

string phrase;
char action;
int n, m,a,b;
void findMaxMin(int start, int finish, int lluvias[]){
    int maxi=-900000000;
    int mini=90000000;
    for(int i=start;i<=finish;i++){
        if(lluvias[i]>maxi){
            maxi=lluvias[i];
        }
        if(lluvias[i]<mini){

            mini=lluvias[i];
        }
    }
    cout<<mini<<" "<<maxi<<endl;
}
int main() {
    cin>>n>>m;
    int lluvias[n];
    for(int i=0;i<n;i++){
        cin>>lluvias[i];
    }
    for(int z=0;z<m;z++){
        cin>>action>>a>>b;
        if(action=='A'){
            lluvias[a-1]=b;
        }
        if(action=='R'){
            findMaxMin(a-1, b-1, lluvias);
        }
    }
    return 0;
}
