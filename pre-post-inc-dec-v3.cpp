#include<iostream>
using namespace std;

int main(){

    int i=1, j=2, k=3;

    int m = i-- - j-- - k--;
    cout<<i<<" "<<j<<" "<<k<<" "<<m<<endl;


    return 0;
}