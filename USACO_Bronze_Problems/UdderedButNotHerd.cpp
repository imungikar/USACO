#include <iostream>
#include <set>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string cowphabet;
    string word;
    int timessaid = 1;
    cin >> cowphabet;
    cin >> word;
    for(int i=0;i<word.length()-1;i++){
        if(cowphabet.find(word[i+1]) <= cowphabet.find(word[i])){
            timessaid += 1;
        }
    }
    cout << timessaid;
}