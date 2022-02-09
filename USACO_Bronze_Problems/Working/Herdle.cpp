#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int green = 0;
    int yellow = 0;
    char guess[9], actual[9];
    for(int i=0;i<9;i++){
        cin >> actual[i];
    }
    for(int i=0;i<9;i++){
        cin >> guess[i];
    }
    for(int i=0;i<9;i++){
        if(guess[i]=actual[i]){
            green++;
            guess[i] = 'x';
            actual[i] = 'y';
        }
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(guess[j]=actual[i]){
                yellow++;
                guess[j] = 'x';
                actual[i] = 'y';
            }
        }
    }
    cout << green << "\n" << yellow;
}

