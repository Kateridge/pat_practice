#include <iostream>
#include <string>
using namespace std;

int main(){
    int num;
    cin >> num;
    for(int i = 0;i < num;i++){
        double a,b,c;
        cin >> a >> b >> c;
        if(a+b>c)
            cout << "Case #" << i + 1 << ": true" << endl;
        else
            cout << "Case #" << i + 1 << ": false" << endl;
    }
    return 0;
}