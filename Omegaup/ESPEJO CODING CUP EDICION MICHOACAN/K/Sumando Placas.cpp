using namespace std;
#include <iostream>
#include <bits/stdc++.h>

int x[1000001],y[1000001];
string a,b,z;
char digit;
int main() {
    cin>>a>>b;
    for(int i=0;i<a.size();i++){
        x[i]=a[a.size()-i-1]-48;
    }
    for(int i=0;i<b.size();i++){
        y[i]=b[b.size()-i-1]-48;
    }
    int carry=0;
    int pointer=0;
    int result;
    while((pointer<a.size() || pointer<b.size()) || carry!=0){

        result=x[pointer]+y[pointer]+carry;
        if(result>9){
            carry=result/10;
            result=result%10;
        }else{
            carry=0;
        }
        z= char(result+48)+z;
        pointer++;
    }

    cout<<z;
    return 0;
}
