#include<iostream>
using namespace std;

int main(){
    char input;
    cout<<"Enter a Character: ";
    cin>>input;

    switch (input)
    {
    case 'a':
        cout<<"vowel"<<endl;
        break;
    case 'e':
        cout<<"vowel"<<endl;
        break;
    case 'i':
        cout<<"vowel"<<endl;
        break;
    case 'o':
        cout<<"vowel"<<endl;
        break;
    case 'u':
        cout<<"vowel"<<endl;
        break;
    
    default:
    cout<<"consonent";
        break;
    }

}