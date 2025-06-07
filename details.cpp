#include<iostream>
using namespace std;
class Student{
private:
    int age;
public:
    void setAge(int a){
        age=a;
    }
    int getAge(){
        return age;
    }
};
int main(){
    Student S;
    S.setAge(18);
    cout<<S.getAge();

    return 0;
}
