#include <iostream>
#include <vector>
using namespace std;

int main(){
   string s;
   cin >> s;
   int x = 0;
   int i = s.length() - 1;
   while( i >= 0){
        if(s[i] == 'I'){
            x += 1;
            i--;
        }
        else if(s[i] =='V'){
            if(s[i-1] == 'I'){
                x += 4;
                i = i - 2;
            }
            else{
                x += 5;
                i--;
            }
        }
        else if(s[i] == 'X'){
            if(s[i-1] == 'I'){
                x += 9;
                i = i - 2;
            }
            else{
                x += 5;
                i--;
            }
        }
        else if(s[i] == 'L'){
            if(s[i-1] == 'X'){
                x += 40;
                i = i -2;
            }
            else{
                x += 50;
                i--;
            }
        }
        else if(s[i] == 'C'){
            if(s[i-1] == 'X'){
                x += 90;
                i = i - 2;
            }
            else{
                x += 100;
                i--;
            }
        }
        else if(s[i] == 'D'){
            if(s[i-1] == 'C'){
                x += 400;
                i = i - 2;
            }
            else{
                x += 500;
                i--;
            }
        }
        else if(s[i] == 'M'){
            if(s[i-1] == 'C'){
                x += 900;
                i = i - 2;
            }
            else{
                x += 1000;
                i--;
            }
        }

    }
    cout << x;
}