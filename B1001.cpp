#include<iostream>
using namespace std;

int main(){
    int num_input, count = 0;
    cin >> num_input;
    while(num_input != 1){
        if (num_input % 2 == 0){
        num_input = num_input / 2;
        count++;
        }
        else{
        num_input = (3 * num_input + 1) / 2;
        count++;
        }
    }
    cout << count;
}