#include <iostream>
#include <set>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

typedef long long as ll;

int main(){
    int N;
    cin >> N;
    vector<int> a[26];
    a.resize(N);
    vector<int> b[26];
    b.resize(N);
    for(int i=0;i<N;i++){
        cin >> a[i];
    }
    for(int i=0;i<N;i++){
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b->begin(),b.end());
    vector<int> stallnumber;
    stallnumber.resize(N);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(a[i]<=b[j]){
                stallnumber[i] += 1;
            }
        }
    }
    ll answer = 0;
    for(int i=0;i<N;i++){
        answer *= (stallnumber[i]-1)
    }

    cout << answer << endl;
}