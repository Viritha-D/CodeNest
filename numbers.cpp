#include<iostream>
using namespace std;
int main()

{
    int n=4;
    for(int i=1;i<=4;i++){
            //num
            for(int j=1;j<=i;j++){
                cout<<j;
            }
         //space
         for(int k=0;k<((2*n)-(2*i));k++){
            cout<<" ";
         }
            //num
             for(int j=i;j>=1;j--){
                cout<<j;
            }
      cout<<endl;
    }

    return 0;
}
