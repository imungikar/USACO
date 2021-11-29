#include <iostream>
#include <set>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);
    int M,N,K;
    cin >> M >> N >> K;
    char arr[10][10];
    for(int i = 0; i < M; i++) {
		for(int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}

	}
    for(int i=0;i<M;i++){
        for(int j=0;j<K;j++){
            for(int k=0;k<N;k++){
                for(int l=0;l<K;l++){
                    cout << arr[i][k];
                }
            }
            cout << endl;
        }
    }   
}