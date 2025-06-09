#include<iostream>
using namespace std;
bool lemonade(int arr[],int n){
int five=0;
int ten=0;
for(int i=0;i<n;i++){
    if(arr[i]==5){
        five++;
    }
    else if(arr[i]==10){
            if(five>0){
                five--;
                ten++;
            }
            else{
                return false;
            }

    }
    else if(arr[i]==20){
        if(five>0&&ten>0){
            five--;
            ten--;
        }
        else if(five>=3){
            five-=3;
        }
        else{
            return false;
        }
    }


}
return true;



}
int main(){
int n;
cout<<"enter n: "<<endl;
cin>>n;
int bills[n];
cout<<"enter bills value into the array: "<<endl;
for(int i=0;i<n;i++){
    cin>>bills[i];
}
if(lemonade(bills,n)){
    cout<<"TRUE";
}
else{
    cout<<"FALSE";
}

return 0;
}

