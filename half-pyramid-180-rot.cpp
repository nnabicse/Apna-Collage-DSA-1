#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Number: "<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==n-1-i){
                for(int k=j; k<n; k++){
                    cout<<"*";
                }
            }
            else{
                cout<<" ";
            }
            

        }
        cout<<endl;
    }



    return 0;
}