#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int alice[3];
    int bob[3];
    int alicescore = 0 , bobscore = 0;
    
    for(int i=0; i<3; i++){
        cin >> alice[i];
        
    }
    for(int i=0; i<3; i++){
        cin >> bob[i];
        if(alice[i]<bob[i]){
            bobscore++;
        } else if(alice[i]>bob[i]){
            alicescore++;
        } 
    }
   
    
    cout << alicescore << " " << bobscore;
}

