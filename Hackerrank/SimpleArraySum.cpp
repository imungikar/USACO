#include <iostream>
#include <set>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    int N;
    int ans = 0;
    cin >> N;
    int arr[N] = {0};
    for(int i=0; i<N; i++){
        cin >> arr[i];
        ans += arr[i];
    }
     cout << ans;

   



}
