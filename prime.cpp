#include<iostream>
using namespace std;
bool checkprime(int n){
    int coun=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            coun+=1;
        }
    }
    if(coun>2){
        return false;
    }
    else{
        return true;
    }
}
int main(){
cout<<"enter a number n: ";

int n;
cin>>n;
int ans=checkprime(n);
cout<<ans;


return 0;
}
