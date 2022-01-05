#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    freopen("breedflip.in", "r", stdin);
	freopen("breedflip.out", "w", stdout);
    string A, B;
    cin >> A >> B;
    int ans =0;
    for(int i=0;i<A.length();i++){
        bool bad = false;
        if(A[i] != B[i]){
            if(!bad){
                bad = true;
                ans++;
            } else{
                bad = false;
            }
        }
    }
    cout << ans;
}