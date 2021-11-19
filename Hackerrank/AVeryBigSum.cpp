#include <iostream>
#include <set>
#include<cstdio>
#include<algorithm>
using namespace std;



int main(){
    int N;
    int long ans = 0;
    int long temp; 
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> temp;
        ans += temp;
    }
     cout << ans;

   



}
