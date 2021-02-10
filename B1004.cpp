#include <iostream>
#include <string>
using namespace std;

int main(){
    int stu_num;
    cin >> stu_num;
    string max_name, max_no, min_name, min_no;
    int max_grade, min_grade;
    for(int i = 0; i < stu_num; i++){
        string name,no;
        int grade;
        cin >> name >> no >> grade;
        if(i == 0){
            max_name = name;
            max_no = no;
            max_grade = grade;
            min_name = name;
            min_no = no;
            min_grade = grade;
        }
        else{
            if(grade > max_grade){
                max_grade = grade;
                max_name = name;
                max_no = no;
            }
            else if(grade < min_grade){
                min_grade = grade;
                min_name = name;
                min_no = no;
            }
        }
    }
    cout << max_name << " " << max_no << endl;
    cout << min_name << " " << min_no << endl; 
    return 0;
}