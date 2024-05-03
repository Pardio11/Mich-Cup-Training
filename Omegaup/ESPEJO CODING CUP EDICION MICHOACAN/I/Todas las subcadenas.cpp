using namespace std;
#include <iostream>
#include <bits/stdc++.h>

int n;
string word;
int main() {
    cin>>n>>word;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<word.substr(j,i+1)<<endl;
        }
    }
    return 0;
}
