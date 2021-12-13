#include <iostream>

using namespace std;

int main() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout); 
    
    int N, K = 0;
    cin >> N >> K;
    int wordlength = 0;
    for(int i=0;i<N;i++){
        string word;
        cin >> word;
        wordlength += word.length();
        if(wordlength <= K){
            if(i){
                cout << " ";
            }
            cout << word;
        }if(wordlength > K){
            cout << "\n" << word;
            wordlength = word.length();
        }
    }
}