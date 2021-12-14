#include <iostream>

using namespace std;

int main(){
    freopen("whereami.in", "r", stdin);
	freopen("whereami.out", "w", stdout);
    int N;
    cin >> N;
    string mailboxes;
    cin >> mailboxes;
    
    for(int i=1;i<N;i++){ // length of the string
     bool yes = true;
        for(int j=0;j+i<=N;j++){ //  starting point of the string
            for(int k=0;k<j;k++){
                if(mailboxes.substr(j,i)==mailboxes.substr(k,i)){
                    yes = false;
                }
                }
            }
        if(yes){
            cout << i << endl;
            break;
        }
    }
    
}