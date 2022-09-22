#include<iostream>
using namespace std;


int main(){

    char button;
    cout<<"Input a Character: "<<endl;
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Namaste"<<endl;
        break;
    case 'c':
        cout<<"Adab"<<endl;
        break;

    case 'd':
        cout<<"Salut"<<endl;
        break;
    case 'e':
        cout<<"Hola"<<endl;
        break;
    
    default:
        cout<<"I'm still learning"<<endl;
        break;
    }



    return 0;
}