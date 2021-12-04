#include <iostream>
#include <set>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    freopen("gymnastics.in", "r", stdin);
	freopen("gymnastics.out", "w", stdout);
    int arr[15][25]; //first index row, second index position
    int N, K;
    cin >> K >> N;
    for(int i=0;i<K;i++){
        for(int j=0;j<N;j++){
            int temp;
            cin >> temp;
            temp--;
            arr[i][temp]=j;//the number is just a name, use it as an indice to find the rank[6,5,1,2,3,4] becomes [3,4,5,6,2,1], 5th(technically 6th) is rank 0, etc
        }
    }
    int answer = 0;
    for(int i=0;i<N;i++){
        //i is the first cow, j is the second cow
        for(int j=i+1;j<N;j++){
            bool first = false;
            if(arr[0][j] > arr[0][i]){
                first = true;
            }
            bool consistent = true;
            for(int k=1;k<K;k++){
                bool temp = false;
                if(arr[k][j] > arr[k][i]){
                    temp = true;
                } if(temp != first){
                    consistent = false;
                    break;
                }
            }
        }
        if(consistent = true){
            answer++;
        }
    }
    cout << answer;
}