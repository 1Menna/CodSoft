#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void booking(){
cout<<"___________________________________________\n";
cout<<"     ROW         |         COST           |\n";
cout<<" ________________|________________________|\n";
cout<<" 1- first row    |       500L.E           |\n";
cout<<" 2- second row   |       450L.E           |\n";
cout<<" 3- third row    |       400L.E           |\n";
cout<<" 4- fourth row   |       380L.E           |\n";
cout<<" 5- fifth row    |       350L.E           |\n";
cout<<" 6- sixth row    |       300L.E           |\n";
cout<<" ________________|________________________|\n";      
cout <<"choose the number of the row that you want .. the number of persons \n";
cout<<"after you finish press f \n";
int n,b,total=0;
char x='t';
while (cin>>n>>b){
switch(n){
    case 1:
      total+=500*b;
      break;
    case 2:
       total+=450*b;
       break; 
    case 3:
       total+=400*b;
       break; 
    case 4:
       total+=380*b;
       break; 
    case 5:
       total+=350*b;
       break;  
    case 6:
       total+=300*b;
       break;                  
} 
if(x=='f'){
   break;}   
}
 
   cout <<"total cost = "<<total<<"L.E"<<endl;
   cout<<"Thanksfor using our application😊\n";

}
void show_list()
{
cout<<"___________________________________________\n";
cout<<" MOVIE           |      AVAILABLE TIMES   |\n";
cout<<" ________________|________________________|\n";
cout<<" 1-Lightyear     |  A.  9:00 Pm  friday   |\n";
cout<<"                 |  B.  8:00 pm Saturday  |\n";
cout<<" ________________|________________________|\n";             
cout<<"2- The Princess. |  A.  6:00 Pm  monday   |\n";
cout<<"                 |  B.  5:00 pm sunday    |\n";
cout<<" ________________|________________________|\n";           
cout<<"3-The Woman King.|  A.  9:00 pm  Monday ; |\n";
cout<<"                 |  B.  10:00 pm Tuesda   |\n";
cout<<" ________________|________________________|\n";
cout<<"4- Bullet Train. |  A.  5:00 pm Saturday  |\n";
cout<<"                 |  B.  8:00 pm Sunday    |\n";
cout<<" ________________|________________________|\n";         
cout<<"5-The Gray Man.  |  A.  7:00 pm  Tuesday  |\n";
cout<<"                 |  B.  5:00 pm  Monday   |\n";
cout<<"                 |  C.  6:00 pm Friday    |\n";
cout<<" ________________|________________________|\n";    
cout<<"enter the number of the movie .. the character of the time\n";
int n;char c;cin>>n>>c ;
cout<<"for booking seats press 1\n";
int m=0;
cin>>m;
if(m==1){
   booking();}
}

int main()
{
cout<<"Hello In Movie Ticket Booking System\n";
cout<<"choose the number of what you want\n";
cout<<" 1-view movie listings\n ";
cout<<"2-booking seats\n ";
cout<<"3-CLOSE\n";
 int n;
 cin>>n;
 if(n==1)
   show_list();
 else if(n==2)
   booking();
 else
    return 0; 
}