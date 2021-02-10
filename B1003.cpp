//
// Created by 10167 on 2021/1/26.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int input_num;
    cin >> input_num;
    for(int i = 0;i < input_num;i++){
        string str;
        cin >> str;
        int left = 0, mid = 0, right = 0;
        int p = 0,t = 0, error = 0;
        for(char j : str){
            if(j == 'A' && p == 0 && t == 0)
                left++;
            else if(j == 'A' && p == 1 && t == 0)
                mid++;
            else if(j == 'A' && p ==1 && t == 1)
                right++;
            else if(j == 'P')
                p++;
            else if(j == 'T' && mid > 0)
                t++;
            else
                break;
        }
        if(p == 1 && t == 1 && left * mid == right)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}