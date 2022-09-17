#include<iostream>
using namespace std;

int main(){

    int sidea, sideb, sidec;

    cin>>sidea>>sideb>>sidec;

    if(sidea == sideb && sideb == sidec){
        cout<<"Equilatetal";
    }
    else if(sidea == sideb || sidea == sidec || sideb == sidec){
        cout<<"Isoscales";
    }
    else{
        cout<<"Scalene";
    }



    return 0;





}