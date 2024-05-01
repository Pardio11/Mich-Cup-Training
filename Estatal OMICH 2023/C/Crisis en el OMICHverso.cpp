using namespace std;
#include <iostream>
#include <bits/stdc++.h>

long long barry, damage,n, enemy, damageEnemy;
bool win = false;
int main() {
    cin>>barry>>damage;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>enemy>>damageEnemy;
        win = false;
        if(barry>=enemy ){
            if(barry==enemy && damage< damageEnemy){
                break;
            }
            else{
                barry+=enemy*0.2;
                win = true;
            }
        }

        else
            break;
    }
    if(win){
        cout<<barry;

    }else{
        cout<<"Corre Barry, ¡Corre!";
    }
    return 0;
}
