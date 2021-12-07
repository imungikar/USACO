#include<iostream>

using namespace std;

//important problem solving learned --> split it up, break it down into mathematical components

int main(){
    int N;
    cin >> N;
    string type[N];
    int low[N];
    int high[N];
    for(int i=0;i<N;i++){
        cin >> type[i];
        cin >> low[i];
        cin >> high[i];
    }
    //narrowing down mile N
    int low = -1000;
    int high = 1000;
    for(int i=0;i<N;i++){
        if(type=="on"){
            low = (low+low[i]);
            high = (high+high[i]);
        }if(type=="off"){
            low = (low-high[i]);
            high = (high-low[i]);
        }if(type=="none"){
            low = max(low,low[i]);
            high = min(high,high[i]);
        }
    }
    //rest of the problem straightforward to solve
}