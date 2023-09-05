#include <bits/stdc++.h>
using namespace std;
int main() {
// Simple Calculator
double x,y;
cout<<" enter first number:";
cin>>x;
cout<<" enter second number:";
cin>>y;
cout<<" choose arithmetic operation between [ + , - , * , / ] :";
char z;
cin>>z;
if(z=='+')
    cout<<" result is "<<x<<'+'<<y<<'='<<x+y<<endl;
else if(z=='-')
    cout<<" result is "<<x<<'-'<<y<<'='<<x-y<<endl;
else if(z=='*')
    cout<<" result is "<<x<<'*'<<y<<'='<<x*y<<endl;
else if(z=='/')
    cout<<" result is "<<x<<'/'<<y<<'='<<x/y<<endl;
else
    cout<<" invalid operation\n ";
}