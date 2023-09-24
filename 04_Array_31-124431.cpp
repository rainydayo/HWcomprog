#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
string read(int num){
    string all = "";
    string word[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine","ten",
    "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen","twenty", 
    "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety","hundred"};
    if(num >= 100){
        all += (word[num/100] + " hundred");
        num%=100;
        if(num >= 20){
            all += (" "+word[num/10+18]);
            num%=10;
            if(num != 0){
                all += (" "+word[num]);
            }
        } else if(num != 0 && num < 10){
                all += (" "+word[num]);
        } else if(num >= 10 && num < 20){
                all += (" " + word[num]);
        }
    } else if(num >= 20){
            all += (word[num/10+18]);
            num%=10;
            if(num != 0){
                all += (" "+word[num]);
            }
    } else {
        if(num != 0 || (num < 20 && num >= 10)){
            all += (word[num]);
        }
    }
    return all;
}
int main() {
    long long n;
    string all = "";
    cin >> n;
    string word[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine","ten",
    "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen","twenty", 
    "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety","hundred", "thousand", "million", "billion", "trillion"};
    if(n==0){
        all = word[0];
    } else {
    if(n/1000000000000 >= 1){
        all += (read(n/1000000000000) + " " + word[32]);
        n%=1000000000000;
        if(n > 0){
            all += " ";
        }
    }
    if(n/1000000000 >= 1){
        all += (read(n/1000000000) + " " + word[31]);
        n%=1000000000;
        if(n > 0){
            all += " ";
        }
    }
    if(n/1000000 >= 1){
        all += (read(n/1000000) + " " + word[30]);
        n%=1000000;
        if(n > 0){
            all += " ";
        }
    }
    if(n/1000 >= 1){
        all += (read(n/1000) + " " + word[29]);
        n%=1000;
        if(n > 0){
            all += " ";
        }
    }
    if(n >= 1){
        all += (read(n));
    }
    }
    cout << all;
}