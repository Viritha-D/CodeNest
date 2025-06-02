#include<iostream>
using namespace std;
int main(){
    int num[10]={7,12,9,15,19,32,56,70};
    cout<<"original array";
    for(int i=0;i<8;i++){
    cout<<num[i]<<"\n";
    }

   for(int i=0;i<8;i++){
       for(int j=i+1;j<8;j++){
          if(num[j]<num[i]){
            int temp=num[i];
            num[i]=num[j];
            num[j]=temp;
          }
       }
   }
   cout<<"sorted array"<<"\n";
   for(int i=0;i<8;i++){
       cout<<num[i]<<",";
       }
    cout<<"\n";
    cout<<"integers with atleast two greater elements"<<"\n";

    for(int i=0;i<8;i++){
            int gcount=0;
        for(int j=0;j<8;j++){
            if(num[i]<num[j]){
              gcount=gcount+1;
            }
        }
    if(gcount>=2){
                cout<<num[i]<<"\n";
            }


    }
    return 0;
}
