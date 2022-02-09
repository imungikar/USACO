#include <iostream>

using namespace std;

int main(){
    int N;
    int arr[1001];
    cin >> N;
    int odd, even = 0;
    for(int i=0;i<N;i++){
        cin >> arr[i];
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    while(even<odd){
        odd=odd-2;
        even++;
    }
    if(even=odd){
        cout << N;
    }
    if(even=odd+1){
        cout << N;
    }
    if(even>odd){
        int ans = 2*odd+1;
        cout << ans;
    }

}