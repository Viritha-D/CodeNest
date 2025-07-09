#include<iostream>
#include<vector>
using namespace std;
int main(){

int rows;
int col;
cout<<"enter rows and columns: "<<endl;
cin>>rows>>col;
vector<vector<int>>name(rows,vector<int>(col));
cout<<"enter elements into the array: ";
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>name[i][j];
        }
    }
 for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<name[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;
}
