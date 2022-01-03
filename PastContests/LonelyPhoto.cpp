#include <iostream>
#define ll long long


using namespace std;



int main(){
    ll N = 0;
    string seq;
    cin >> N;
    cin >> seq;
    int tossedphotos = 0;
    for(int i=3;i<=N;i++){ //define string length
        for(int j=0;j<=N-i;j++){
            int gcount = 0;
            int hcount = 0;
            string chosensubstring = seq.substr(j,i);
            for(int k=0;k<i;k++){
                if(chosensubstring[k]=='G'){
                    gcount++;
                }
                if(chosensubstring[k]=='H'){
                    hcount++;
                }
            }
            if(gcount==1||hcount==1){
                tossedphotos++;
            }
        }
    }
    cout << tossedphotos;
    return 0;
}