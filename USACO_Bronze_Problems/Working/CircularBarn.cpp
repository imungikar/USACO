#include<iostream>
#include <cstdio>

using namespace std;
//problem solving strat --> print out everything in a loop to see if it's a logic issue



int main(){
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);
    int N;
    cin >> N;
    int barn[N];
    int ans = 0;
    int sum = 0;
    for(int i=0;i<N;i++){
        cin >> barn[i];
        for(int j=0;j<N;j++){
            sum += (abs(j-i))*(barn[j]);
            int ans = min(ans,sum);
            cout << ans << "\n";
        }
    
    }

}