#include<iostream>
#include <cstdio>

using namespace std;

int main(){
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);
    int N;
    cin >> N;
    int barn[N+1];
    for(int i=1;i<N+1;i++){
        cin >> barn[i];
        int sum = 0;
        int ans = 0;
        for(int j=1;j<N+1;j++){
            sum += (abs(j-i))*(barn[j]);
            ans = max(ans,sum);
        }
        cout << ans;
    }

}