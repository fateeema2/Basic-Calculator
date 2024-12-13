#include<iostream>
using namespace std;
int main()
{
int num1,num2;
char operation;

cout<<"Enter the num 1:";
cin>>num1;

cout<<"Enter the num2:";
cin>>num2;

cout<<"Enter Operator(+,-,*,%):";
cin>>operation;

if(operation=='+'){
    cout<<"Result:"<<num1+num2<<endl;
}
else if (operation=='-'){
    cout<<"Result:"<<num1-num2<<endl;
}
else if (operation=='*'){
    cout<<"Result:"<<num1*num2<<endl;
}
else if (operation=='%')}
    cout<<"Result:"<<num1%num2<<endl;
}
else{
    cout<<"invalid operator";}

return 0;
}
