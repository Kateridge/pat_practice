#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b,result;
    cin >> a >> b;
    result = a + b;
    string str = to_string(result);
    if(str[0] == '-'){
        if(str.length() <= 4)
            for(int i = 0;i<str.length();i++)
                cout << str[i];
        else{
            cout << str[0];
            int k = (str.length()-1) % 3;
            int j,count = 0;
            for(j = 1;j<k+1;j++)
                cout << str[j];
            if(k > 0)
                cout << ",";
            for(;j<str.length();j++){
                if(count == 3){
                    count = 0;
                    cout << ",";
                }
                cout << str[j];
                count ++;
            }
        }
    }
    else{
        if(str.length() <= 3)
            for(int i = 0;i<str.length();i++)
                cout << str[i];
        else{
            int k = str.length() % 3;
            int j,count = 0;
            for(j = 0;j<k;j++)
                cout << str[j];
            if(k > 0)
                cout << ",";
            for(;j<str.length();j++){
                if(count == 3){
                    count = 0;
                    cout << ",";
                }
                cout << str[j];
                count ++;
            }
        }
    }
}