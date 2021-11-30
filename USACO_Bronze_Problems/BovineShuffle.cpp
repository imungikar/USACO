#include <iostream>
#include <set>
#include<cstdio>
#include<algorithm>
using namespace std;



int main(){
    freopen("shuffle.in", "r", stdin);
	freopen("shuffle.out", "w", stdout);
    int N;
    cin >> N;
    int order[N];
    int arr[101];
    for(int i=1;i<=N;i++){
        cin >> arr[i];
    }
    int data[N];
    for(int i=1;i<=N;i++){
        cin >> data[i];
    }
    for(int i=0;i<3;i++){
        for(int i=1;i<=N;i++){
            order[i]=data[arr[i]];
        }
        for(int i=1;i<=N;i++){
            data[i]=order[i];
        }
    }
    for(int i=1;i<=N;i++){
        cout << data[i] << endl;
    }
}