#include <iostream>
#include <iomanip>
using namespace std;

int getA1(int a[], int len){
    int sum = 0;
    for(int i = 0;i<len;i++){
        if(a[i] % 10 == 0)
            sum += a[i];
    }
    if(sum == 0)
        return -1;
    else 
        return sum;
}

int getA2(int a[], int len){
    int sum = 0,index = 1,flag = 0;
    for(int i = 0;i<len;i++){
        if(a[i] % 5 == 1){
            sum += a[i] * index;
            index *= -1;
            flag = 1;
        }
    }
    if(flag == 0)
        return -1;
    else 
        return sum;
}

int getA3(int a[], int len){
    int count = 0;
    for(int i =0;i<len;i++){
        if(a[i] % 5 == 2){
            count++;
        }
    }
    if(count == 0)
        return -1;
    else 
        return count;
}

double getA4(int a[], int len){
    double avg = 0;
    int count = 0;
    for(int i =0;i<len;i++){
        if(a[i] % 5 == 3){
            count++;
            avg += a[i];
        }
    }
    if(count == 0)
        return 0;
    else 
        return avg/count;
}

int getA5(int a[], int len){
    int max = 0;
    for(int i=0;i<len;i++){
        if(a[i] % 5 == 4){
            if(a[i] > max){
                max = a[i];
            }
        }
    }
    if(max == 0)
        return -1;
    else 
        return max;
}

int main(){
    int num;
    cin >> num;
    int *array = new int[num];
    for(int i = 0;i<num;i++){
        cin >> array[i];
    }
    int A1,A2,A3,A5;
    float A4;
    A1 = getA1(array,num);
    A2 = getA2(array,num);
    A3 = getA3(array,num);
    A4 = getA4(array,num);
    A5 = getA5(array,num);
    if(A1 == -1)
        cout << "N" << " ";
    else
        cout << A1 << " ";
    if(A2 == -1)
        cout << "N" << " ";
    else
        cout << A2 << " ";
    if(A3 == -1)
        cout << "N" << " ";
    else
        cout << A3 << " ";
    if(A4 == 0)
        cout << "N" << " ";
    else
        printf("%.1f ",A4);
    if(A5 == -1)
        cout << "N";
    else
        cout << A5;
}