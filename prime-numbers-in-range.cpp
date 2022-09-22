#include<iostream>
using namespace std;

int main(){

    int start, end;
    
    cin>>start>>end;



    for(int i = start+1; i<end; i++){
        int num;
        for(num=2; num<i; num++){
            if(i%num == 0){
            break;
        }
        }
        if(num==i){
            cout<<num<<endl;
        }

    }







    return 0;
}