#include<iostream>
#include<vector>
#include<algorithm>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
    vector<int> bem(3);
    for(int i=0;i<3;i++){
        cin >> bem[i];
    }
    sort(bem.begin(),bem.end());
    int minvalue = 0;
    if(bem[2]-bem[0]==2){//consecutive case
        minvalue = 0;
    } else if(bem[2]-bem[1]==2 || bem[1]-bem[0]==2){
        minvalue = 1;
    }else{
        minvalue = 2;
    }
    int cbdist = bem[2]-bem[1];
    int badist = bem[1]-bem[0];
    int maxvalue = 0;
    maxvalue = max(cbdist,badist);
    cout << minvalue << "\n";
    cout << maxvalue;

    

}