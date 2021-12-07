#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    
    int limits[1001];
    int bessie[1001];

    int N,M;
    cin >> N >> M;
    int start = 0;
    for(int i=0;i<N;i++){
        int length, speed;
        cin >> length >> speed;
        for(int j=start;j<start+length;j++){}
            speed = limits[j];
        }
        start += length;

    }
    int start1 = 0;
    for(int i=0;i<M;i++){
        int length1, speed1;
        cin >> length1 >> speed1;
        for(j=start1;j<start1+length1;j++){
            speed1 = bessie[j];
        }
        start1 += length1;
    }
    int infraction = 0;
    for(int i=0;i<100;i++){
        infraction = max((bessie[i]-limits[i]),infraction);

        
    }
    cout << infraction;

    
}