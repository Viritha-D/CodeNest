#include<iostream>
using namespace std;

int gcder(int n,int m){
    int gcdm=1;
    for(int i=1;i<=min(n,m);i++){

    if(n%i==0 && m%i==0){
        gcdm=i;
    }
}
return gcdm;
}


int main(){
int n1=9;
int n2=12;
int g=gcder(n1,n2);
cout<<"gcd is: ";
cout<<g;


return 0;

}
