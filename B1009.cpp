#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    string words[80];
    int i = 0;
    while(cin >> words[i++]){
        if (getchar() == '\n')    //检测如果是空格，退出循环；
        break;
    }
    for(int j = i-1; j > 0; j--){
        cout << words[j] << " ";
    }
    cout << words[0];
    return 0;
}