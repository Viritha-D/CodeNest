#include<iostream>
using namespace std;
int factorial(int n){

  if(n==0||n==1){
    return 1;
  }
 int ans=n*factorial(n-1);

return ans;
}
int main(){

int n;
cout<<"enter value of n: ";
cin>>n;
int sol=factorial(n);

cout<<sol;


return 0;
}
