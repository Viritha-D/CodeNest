#include<iostream>
using namespace std;
int main(){
int n=36;
cout<<"the divisors: "<<endl;
for(int i=1;i<=n;i++){
    if(n%i==0){
        cout<<i<<endl;
    }
}




return 0;
}
