#include<iostream>
using namespace std;

int main(){

    int pmoney = 3000;

    for(int i=1; i<=30; i++){
        if(i%2==0){
            continue;;
        }
        else{
            cout<<i<<"You Can Go Out Today"<<endl;
            pmoney = pmoney-300;
            if(pmoney == 0){
                break;
            }
        }
    }




return 0;


}