#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int grid[21][21];
    string inputslength[100];
    int inputsdir[100];
    for(int i=0;i<N;i++){
        cin >> inputslength[i] >> inputsdir[i];
    }
    int lastx = 11;
    int lasty = 11;
    int time = 0;
    for(int i=0;i<N;i++){
        if(inputslength[i]="N"){
            lasty = lasty + inputsdir[i];
        }if(inputslength[i]="E"){
            lastx = lastx + inputsdir[i];
        }if(inputslength[i]="S"){
            lasty = lasty - inputsdir[i];
        }if(inputslength[i]="W"){
            lastx = lastx - inputsdir[i];
        }
        time += inputsdir[i];
        if(lastx)
    }
}