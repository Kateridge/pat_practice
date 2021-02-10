#include <iostream>
using namespace std;

int main(){
    int input, a, b, c;
    cin >> input;
    c = input % 10;
    b = (input / 10) % 10;
    a = (input / 100) % 10;
    for(int i = 0; i<a; i++){
        cout << "B";
    }
    for(int i = 0; i<b; i++){
        cout << "S";
    }
    for(int i = 1; i<=c; i++){
        cout << i;
    }
}