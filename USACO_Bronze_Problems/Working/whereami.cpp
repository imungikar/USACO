#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    string mailboxes;
    cin >> mailboxes;
    int final = 0;
    for(int i=1;i<N;i++){ // length of the string
        for(int j=0;j<N;j++){ //  starting point of the string
            string seq = mailboxes.substr(j,j+1);
        }
        for(int j=0;j<N;j++){ //  starting point of the string
            string temp = mailboxes.substr(j+1,j+2);
            if(temp=seq){
                continue;
            }
        }

    }
}