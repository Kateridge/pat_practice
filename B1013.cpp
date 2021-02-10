#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int a){
    for(int i = 2; i <= sqrt(a);i++){
        if(a % i == 0)
            return false;
    }
    return true;
}

int main(){
    int M,N,i=2;
    cin >> M >> N;
    int count = 0,enter_flag = 1;
    while(count <= N){
        if(isPrime(i)){
            count++;
            if(count >= M && count <=N){
                if(enter_flag > 10){
                    cout << endl;
                    enter_flag %= 10; 
                }
                if(enter_flag == 1){
                    enter_flag++;
                    cout << i;
                }
                else{
                    cout << " " << i;
                    enter_flag++;
                }
            }
        }
        i++;
    }
    return 0;
}