#include<iostream>
using namespace std;

int main(){

    float num1, num2;
    cout<<"Input 2 Numbers: ";
    cin>>num1>>num2;
    char op;
    cout<<"Enter an Operator: ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<num1 + num2<<endl;
        break;
    case '-':
        cout<<num1 - num2<<endl;
        break;
    case '*':
        cout<<num1 * num2<<endl;
        break;
    case '/':
        cout<<num1 / num2<<endl;
        break;
    default:
    cout<<"Invalid Operator";
        break;
    }



    return 0;
}