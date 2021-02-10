#include <iostream>
using namespace std;

void reverse(int a[], int start, int end){
    for(int i = start; i <= (start + end) / 2; i++){
        int temp = a[i];
        a[i] = a[start + end - i];
        a[start + end - i] = temp;
    }
}

int main(){
    int N,M;
    cin >> N >> M;
    M = M % N; // 位移数可能大于N，因此做取余操作
    int *array = new int[N];
    for(int i = 0;i < N; i++){
        cin >> array[i];
    }
    //先反转前面部分和后面部分
    reverse(array,0,N-M-1);
    reverse(array,N-M,N-1);
    //再整体反转
    reverse(array,0,N-1);
    for(int i = 0;i < N;i++){
        if(i == N -1)
            cout << array[i];
        else
            cout << array[i] << " ";       
    }
}