#include <iostream>
#include <set>
#include<cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    int numphotos = 0;
    cin >> N;
    vector<int> arr;
    arr.resize(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            int sum = 0;
            for (int k = i; k <= j; k++) {
				sum += arr[k];
            }
            bool present = false;
            for(int k = i; k<= j; k++){
                if(arr[k]*(j-i+1) == sum){
                    present = true;
                }
            }
            if(present){
                ++numphotos;
            }
        }
        
    
    }
    cout<<numphotos;
}
