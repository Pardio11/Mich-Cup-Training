using namespace std;
#include <iostream>
#include <bits/stdc++.h>

int f, c,x ,y;
char aux;
int main() {
    cin>>c>>f;
    for(int i=0;i<c;i++){
        for(int j=0;j<f;j++){
            cin>>aux;
            if(aux=='X'){
                x=i;
                y=j;
            }
        }
    }
    cout<<x<<" "<<y;
    return 0;
}
