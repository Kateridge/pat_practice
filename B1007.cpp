#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(int n) {
    int i;
    for(i = 2; i <= sqrt(n); i++) {
        if((n % i) == 0) // 如果能被除了1和它本身的数整除，就不是素数
            return false;
    }
    return true; // 是素数
}

int main(){
    int N;
    cin >> N;
    int count = 0;
    for(int i =2; i<N-1; i++){ //注意i的范围
        if(isPrime(i) && isPrime(i+2) && !isPrime(i+1)) //差为2且不相邻
            count++;
    }
    cout << count;
}