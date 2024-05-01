#include <bits/stdc++.h>

using namespace std;
int combos[10000];


bool combinationRight(int index, vector <int> shelf, int sum, int target){
    if(index>=shelf.size() || sum >= target){
        if(sum == target)
            return true;
        return false;
    }
    sum+=shelf.at(index);
    int ereaseElem;
    ereaseElem=shelf.at(index);
    shelf.erase(shelf.begin()+index);
    if(combinationRight(index,shelf,sum,target))
        return true;

    shelf.insert(shelf.begin()+index,ereaseElem);
    sum-=ereaseElem;

    if(combinationRight(index+1,shelf,sum,target))
        return true;

    return false;

}

vector <int> combinationLeft(int index, vector <int> shelf, vector <int> sums, int sum){
    if(index>=shelf.size()){
        return sums;
    }
    sum+=shelf.at(index);
    int ereaseElem;
    ereaseElem=shelf.at(index);
    shelf.erase(shelf.begin()+index);
    if(combos[sum]==0)
        if(combinationRight(0,shelf,0,sum)){
            sums.push_back(sum);
            combos[sum]=1;
        }


    sums=combinationLeft(index,shelf,sums,sum);
    shelf.insert(shelf.begin()+index,ereaseElem);
    sum-=ereaseElem;

    sums=combinationLeft(index+1,shelf,sums,sum);
    return sums;

}
string color;
vector <int> sumsDisc;
vector <int> sets;
int setsCheck[10000];
int main() {
    int n, m;
    cin >> n >> m;

    vector<int> pesos_barras(n);
    vector<int> pesos_discos(m);

    for (int i = 0; i < n; ++i) {
        cin >> pesos_barras[i]>>color;
    }

    for (int i = 0; i < m; ++i) {
        cin >> pesos_discos[i]>>color;
    }

    sumsDisc=combinationLeft(0, pesos_discos, sumsDisc, 0);
    sumsDisc.push_back(0);
    for(int j=0;j<n;j++){
        for (int i = 0; i < sumsDisc.size(); ++i) {
            int setWeight=pesos_barras[j]+(sumsDisc[i]*2);

            if(setsCheck[setWeight]==0){
                sets.push_back(setWeight);
                setsCheck[setWeight]=1;
            }
        }
    }
    sort(sets.begin(), sets.end());
    cout<<sets.size()<<endl;
    for(int i=0;i<sets.size();i++){
        cout<<sets[i]<<endl;
    }
    return 0;
}

