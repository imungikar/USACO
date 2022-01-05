#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int time, p, mag = 0;
    int change[1001][1001];
    int rate[1001][1001];
    string person;
    for(int i=0;i<N;i++){
        cin >> time >> person >> mag;
        if(person="Bessie"){
            p=0;
        }
        if(person="Elsie"){
            p = 1;
        }
        if(person="Mildred"){
            p = 2;
        }
        change[p][time]=mag;
    }
    for(int i=0, i<3;i++){
        rate[i][0]=7;
    }
    for(int p=0; p<3;p++){
        for(int time = 1;time<100;time++){
            rate[p][time] = rate[p][time-1] + change[p][time];
        }
    }
    int maxcow[1001];
    maxcow[0]=3; //arbitrary value to show all are equal
    for(int time=0;time<100;time++){
        maxcow[time]=max(rate[0][time],max(rate[1][time],rate[2][time]));
        if(maxcow[time])
    }

}