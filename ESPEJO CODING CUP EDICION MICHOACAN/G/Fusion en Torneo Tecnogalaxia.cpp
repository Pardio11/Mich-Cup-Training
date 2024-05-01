using namespace std;
#include <iostream>
#include <bits/stdc++.h>

int n, m;
int original[105][105],changed[105][105];
string movements;

void north(){
    for(int i=0;i<m;i++){
        int y=0;
        for(int j=0;j<n;j++){
            int sayinOne=original[j][i];
            if(sayinOne==0){
                continue;
            }
            int sayinTwo = 0;
            int pointer=j+1;
            while(sayinTwo==0 && pointer<n){
                sayinTwo=original[pointer][i];
                pointer++;
            }
            if(sayinOne==sayinTwo){
                changed[y][i]=sayinOne+sayinTwo;
                j=pointer-1;
                y++;
            }else{
                changed[y][i]=sayinOne;
                y++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            original[i][j]=changed[i][j];
            changed[i][j]=0;
        }
    }
}

void oeste(){
    for(int i=0;i<n;i++){
        int x=0;
        for(int j=0;j<m;j++){
            int sayinOne=original[i][j];
            if(sayinOne==0){
                continue;
            }
            int sayinTwo = 0;
            int pointer=j+1;
            while(sayinTwo==0 && pointer<m){
                sayinTwo=original[i][pointer];
                pointer++;
            }
            if(sayinOne==sayinTwo){
                changed[i][x]=sayinOne+sayinTwo;
                j=pointer-1;
                x++;
            }else{
                changed[i][x]=sayinOne;
                x++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            original[i][j]=changed[i][j];
            changed[i][j]=0;
        }
    }
}

void este(){
    for(int i=0;i<n;i++){
        int x=m-1;
        for(int j=m-1;j>=0;j--){
            int sayinOne=original[i][j];
            if(sayinOne==0){
                continue;
            }
            int sayinTwo = 0;
            int pointer=j-1;
            while(sayinTwo==0 && pointer>=0){
                sayinTwo=original[i][pointer];
                pointer--;
            }
            if(sayinOne==sayinTwo){
                changed[i][x]=sayinOne+sayinTwo;
                j=pointer+1;
                x--;
            }else{
                changed[i][x]=sayinOne;
                x--;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            original[i][j]=changed[i][j];
            changed[i][j]=0;
        }
    }
}

void sur(){
    for(int i=0;i<m;i++){
        int y=n-1;
        for(int j=n-1;j>=0;j--){
            int sayinOne=original[j][i];
            if(sayinOne==0){
                continue;
            }
            int sayinTwo = 0;
            int pointer=j-1;
            while(sayinTwo==0 && pointer>=0){
                sayinTwo=original[pointer][i];
                pointer--;
            }

            if(sayinOne==sayinTwo){
                changed[y][i]=sayinOne+sayinTwo;
                j=pointer+1;
                y--;
            }else{
                changed[y][i]=sayinOne;
                y--;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            original[i][j]=changed[i][j];
            changed[i][j]=0;
        }
    }
}

int main() {
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>original[i][j];
        }
    }

    cin>>movements;
    for(int z=0;z<movements.size();z++){
        if(movements[z]=='N'){
            north();
        }
        if(movements[z]=='O'){
            oeste();
        }
        if(movements[z]=='E'){
            este();
        }
        if(movements[z]=='S'){
            sur();
        }
    }
    for(int i=0;i<n;i++){
        int maxSayin=0;
        for(int j=0;j<m;j++){
            if(maxSayin<original[i][j])
                maxSayin=original[i][j];
        }
        if(maxSayin!=0)
            cout<<maxSayin<<endl;
    }
    return 0;
}
