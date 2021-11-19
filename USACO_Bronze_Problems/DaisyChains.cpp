#include <iostream>
#include <set>
#include<cstdio>
using namespace std;

int main(){
    
    int N;
    int sum = 0;
    int avgflower = 0;
    int arr[101];
    bool present;
    cin >> N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            int sum = 0;
            for(int k = i;k<=j;k++){
                sum += arr[k];
            }
            present = false;
            for(int k=i;k<=j;k++){
                if(arr[k]*(j-i+1) == sum){
                    {present = true;}
                     }
                if (present) {avgflower++;}
            }
       }
    }
    cout << avgflower;

}
