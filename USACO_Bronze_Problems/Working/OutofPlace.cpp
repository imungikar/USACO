#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    freopen("outofplace.in", "r", stdin);
	freopen("outofplace.out", "w", stdout);
    
    int N;
    cin >> N;
    int swaps = 0;
    int arr[101], sorted[101];
    for(int i=0;i<N;i++){
        cin >> arr[i];
        sorted[i] = arr[i];
    }
    sort(sorted, sorted+N);
    for(int i=0;i<N;i++){
       if(arr[i] != sorted[i]){
           swaps++;
       }
    }
    cout << swaps -1 << endl;

}