#include<iostream>
using namespace std;
bool checkarmstrong(int num){
    int original=num;
    int sume=0;
    while(num>0){

    int digi=num%10;
    sume=sume+(digi*digi*digi);

    num=num/10;
    }
    if(sume==original){
        return true;
    }
    else{
        return false;
    }
}
int main(){
 cout<<"enter a number: ";
 int num;
 cin>>num;

int ans=checkarmstrong(num);
cout<<ans;


return 0;
}
