#include <iostream>

using namespace std;

int main(){
    freopen("hps.in", "r", stdin);
	freopen("hps.out", "w", stdout);
    int N;
    cin >> N;
    int numwinsway1 = 0;
    int numwinsway2 = 0;
    int numwins = 0;
    int arr[101][2];
    for(int i=0;i<N;i++){
        cin >> arr[i][0];
        cin >> arr[i][1];
    }
    for(int i=0;i<N;i++){ 
        if((arr[i][0]==1&&arr[i][1]==2)||(arr[i][0]==2&&arr[i][1]==3)||(arr[i][0]==3&&arr[i][1]==1)){
            numwinsway1++;
        }
        if((arr[i][0]==2&&arr[i][1]==1)||(arr[i][0]==3&&arr[i][1]==2)||(arr[i][0]==1&&arr[i][1]==3)){
            numwinsway2++;
        }
    }
    int maxwins = max(numwinsway1,numwinsway2);
    cout << maxwins;

}