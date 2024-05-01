using namespace std;
#include <iostream>
#include <bits/stdc++.h>

string phrase;
char digit;
int vowels, consonants, spaces;
int main() {
    getline(cin, phrase);
    for(int i=0;i<phrase.size();i++){
        if(phrase[i]!='.'){
            if(phrase[i]=='a' || phrase[i]=='e' || phrase[i]=='i' || phrase[i]=='o' || phrase[i]=='u' || phrase[i]=='A' || phrase[i]=='E' || phrase[i]=='I' || phrase[i]=='O' || phrase[i]=='U'){
                vowels++;
            }
            else{
                if(phrase[i]==' '){
                    spaces++;
                }else{
                    consonants++;
                }
            }
        }
    }
    cout<<consonants<<"X2+"<<vowels<<"X+"<<spaces<<"=0";
    return 0;
}
