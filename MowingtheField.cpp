#include <iostream>

using namespace std;

int main(){
    freopen("mowing.in", "r", stdin);
	freopen("mowing.out", "w", stdout);
    int N;
    cin >> N;
    int grid[2001][2001];
    string inputslength[100];
    int inputsdir[100];
    for(int i=0;i<N;i++){
        cin >> inputslength[i] >> inputsdir[i];
    }
    int lastTime[2001][2001];
    for(int i = 0; i < 2001; i++) {
			for(int j = 0; j < 2001; j++) {
				lastTime[i][j] = -1;
			}
		}
    int lastx = 11;
    int lasty = 11;
    int time = 0;
    int answer = 1001;
    for(int i=0;i<N;i++){
        int k = inputsdir[i];
        if(inputslength[i]="N"){
            for(int j=0;j<k;j++){
                lasty++;
                time++;
            }
        }if(inputslength[i]="E"){
            for(int j=0;j<k;j++){
                lastx++;
                time++;
            }
        }if(inputslength[i]="S"){
            for(int j=0;j<k;j++){
                lasty--;
                time++;
            }
        }if(inputslength[i]="W"){
            for(int j=0;j<k;j++){
                lastx--;
                time++;
            }
        }
        lastTime[lastx][lasty]=time;
        if(lastTime[lastx][lasty]>=0){
            answer = min(answer,time-lastTime[lastx][lasty]);
        }
    }
    if(answer==1001){
        answer = 1;
    }
    cout << answer;
}