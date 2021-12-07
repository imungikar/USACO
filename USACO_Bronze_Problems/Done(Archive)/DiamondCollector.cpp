#include <iostream>
#include <set>
#include<cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);
    
    int N,K;
    cin >> N >> K;
    vector<int> arr;
    arr.resize(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int ans = 0;
    for(int i = 0;i<N;++i){
        int sum = 1;
        for(int j=i+1;j<N;++j){
            int dist = (arr[j]-arr[i]);
            if(dist<=K){
                sum++;
            }else if(dist>K){
                break;
            }
            ans = max(sum,ans);
        }
    }
    cout << ans;
}
