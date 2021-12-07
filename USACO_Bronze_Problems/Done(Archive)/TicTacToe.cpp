#include<cstdio>
#include <vector>
#include <algorithm>
using namespace std;

char ttboard[3][3];

bool onecowwinner(char a){
    if(ttboard[0][0] = a && ttboard[1][1] = a && ttboard[2][2] = a){
        bool onecowwinner = true;
    }
    if(ttbttboard[2][0] = a && ttboard[1][1] = a && ttboard[0][2] =a){
        bool onecowwinner = true;
    }
    if(ttboard[0][0] = a && ttboard[0][1] = a && ttboard[0][2] = a){
        bool onecowwinner = true;
    }
    if(ttboard[1][0] = a && ttboard[1][1] = a && ttboard[1][2] = a){
        bool onecowwinner = true;
    }
    if(ttboard[2][0] = a && ttboard[2][1] = a && ttboard[2][2] = a){
        bool onecowwinner = true;
    }
    if(ttboard[0][0] = a && ttboard[0[1] = a && ttboard[0][2] = a){
        bool onecowwinner = true;
    }
    if(ttboard[0][1] = a && ttboard[1][1] = a && ttboard[2][1] = a){
        bool onecowwinner = true;
    }
    if(ttboard[0][2] = a && ttboard[1][2] = a && ttboard[2][2] = a){
        bool onecowwinner = true;
    }
    return false;
}

bool checkteamwinner(char a, char b, char x, char y, char z){
    if(char x != char b || char x != char b){
        return false;
    }
    if(char y != char b || char y != char b){
        return false;
    }
    if(char z != char b || char z != char b){
        return false;
    }
    
    if(char x != char b && char y != char b && char z !=  char b ){
        return false;
    }
    if(char x!=  char a && char y != char a && char z != char a){
        reutrn false;
    }

    return true;
}

bool twocowwinner(char a, char b){
    if(checkteamwinner(a,b,tttboard[0][0],tttboard[1][1], ttboard[2][2])){
        return true;
    }
    if(checkteamwinner(a,b,tttboard[2][0],tttboard[1][1], ttboard[0][2])){
        return true;
    }
    if(checkteamwinner(a,b,tttboard[0][0],tttboard[1][0], ttboard[2][0])){
        return true;
    }
    if(checkteamwinner(a,b,tttboard[0][1],tttboard[1][1], ttboard[2][1])){
        return true;
    }
    if(checkteamwinner(a,b,tttboard[0][2],tttboard[1][2], ttboard[2][2])){
        return true;
    }
    if(checkteamwinner(a,b,tttboard[0][0],tttboard[0][1], ttboard[0][2])){
        return true;
    }
    if(checkteamwinner(a,b,tttboard[1][0],tttboard[1][1], ttboard[1][2])){
        return true;
    }
    if(checkteamwinner(a,b,tttboard[2][0],tttboard[2][1], ttboard[2][2])){
        return true;
    }
}

int main(){
    int onecowwinner = 0;
    for(char = "A"; char <= "Z";char++){
        if(onecowwinner(char)=true){
            onecowwinner++;
        }
    }
    int twocowwinner = 0;
    for(char = "A";char<="Z";char++){
        for(char charz = "A"; charz<="Z";charz++){
            if(twocowwinner(char, charz) = true){
                twocowwinner++;
            }
        }
    }
    cout << onecowwinner << "\n";
    cout << twocowwinner;
}