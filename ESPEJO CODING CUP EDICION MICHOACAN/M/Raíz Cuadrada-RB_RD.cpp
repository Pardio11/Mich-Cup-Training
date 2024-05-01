using namespace std;
#include <iostream>
#include <bits/stdc++.h>

string binary="00000000";
long long n, position=7, closestNumber=1,integer;
double square, residue;
int main() {
    cin>>n;
    square=sqrt(n);
    integer=square;
    residue=square-integer;
    if(residue!=0){
        printf("%0.2lf",square);
    }else{
        while(closestNumber<=square){
            closestNumber*=2;
            position--;
            if(position<0){
                position++;
                binary=binary+'0';
            }
        }

        if(closestNumber>square && closestNumber>512){
            binary.erase(binary.begin());
            closestNumber/=2;
        }
        while(square>0){
            if(square>=closestNumber){
                square-=closestNumber;
                binary[position]='1';
            }
            position++;
            closestNumber/=2;
        }
        cout<<binary;
    }
    return 0;
}
