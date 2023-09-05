#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void GAME(){
    cout<<" welcome to Number Guessing Game ### \n";
 srand(time(NULL));
 int x=rand()%10;
 int y;
 cout<<"guess the number:";
 while(cin>>y){
     if(y==x){
         cout<<"your guessing is Correct \n";
         break;}
     else if(y>x){
         cout<<"your guessing is high \n";
         cout<<"guess another number:";}
     else{
         cout << "your guessing is low \n";
         cout << "guess another number:";
     }
 }
 cout<<"If you want to play again enter 1 else 0\n";
 int p;
 cin>>p;
 if(p==1)
   GAME();
 else
   cout<<"Thanks for playing\n";  
}
int main() {
GAME();
}