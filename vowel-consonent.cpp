#include<iostream>
using namespace std;


int main(){
    int lowervowel, uppervower;

    char n;
    cin>>n;

    lowervowel = (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u');
    uppervower = (n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U');

    if(lowervowel || uppervower){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonent";
    }

    return 0;
}