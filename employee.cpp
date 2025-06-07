#include<iostream>
using namespace std;
class program{
protected:
    int salary;
};
class news:public program{
public:

    int bonous;
    void setSalary(int s){
        salary=s;
    }
    int getSalary(){
        return salary;
    }
};
int main(){
    news n;

    n.setSalary(50000);
    cout << n.getSalary();
}
