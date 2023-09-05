#include<iostream>
using namespace std;
char board[3][3]; 
void board1 (){   
cout<<"    |       |    \n";
cout<<board[0][0]<<"   |  "<<board[0][1]<<"    | "<<board[0][2]<<endl; 
cout<<"    |       |    \n"; 
cout<<"__ __ __ __ __ __ \n";
cout<<"    |       |    \n"; 
cout<<board[1][0]<<"   |  "<<board[1][1]<<"    | "<<board[1][2]<<endl; 
cout<<"    |       |    \n"; 
cout<<"__ __ __ __ __ __ \n";
cout<<"    |       |    \n"; 
cout<<board[2][0]<<"   |   "<<board[2][1]<<"   | "<<board[2][2]<<endl; 
cout<<"    |       |    \n"; 
}
int check_winner(char arr[3][3]){
    //rows
    if(arr[0][0]==arr[0][1]&&arr[0][1]==arr[0][2])
        return 1;
    else if(arr[1][0]==arr[1][1]&&arr[1][1]==arr[1][2])
        return 1; 
    else if(arr[2][0]==arr[2][1]&&arr[2][1]==arr[2][2])
       return 1;
    //columns   
    else if(arr[0][0]==arr[1][0]&&arr[1][0]==arr[2][0])
       return 1; 
    else if(arr[0][1]==arr[1][1]&&arr[1][1]==arr[2][1])
       return 1;  
    else if(arr[0][2]==arr[1][2]&&arr[1][2]==arr[2][2])
       return 1;  
    //arrows
    else if(arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2])
       return 1; 
    else if(arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0])
       return 1;  
    else
       return 0;                
}
void change(int num,char x,char arr[3][3]){
    if(num==1)
      arr[0][0]=x;
    else if(num==2)
      arr[0][1]=x; 
    else if(num==3)
      arr[0][2]=x; 
    else if(num==4)
      arr[1][0]=x; 
    else if(num==5)
      arr[1][1]=x; 
    else if(num==6)
      arr[1][2]=x; 
    else if(num==7)
      arr[2][0]=x; 
    else if(num==8)
      arr[2][1]=x; 
    else if(num==9)
      arr[2][2]=x;               
}
void GAME(){
  cout<<"Welcome to TIC TAC TOE Game\n";
int cnt=49;
for(int i=0;i<3;i++){
    for (int j = 0; j < 3; j++){
          board[i][j]=cnt;
          cnt++;
    } 
}  
string first,second;
cout<<"please enter the name of first player:";cin>>first;
cout<<"please enter the name of second player:";cin>>second;
board1 ();
int i;
bool p=0;
 for(i=1;i<=9;i++){
    if(i%2!=0){
        cout<<"it is the Turn of "<<first<<"\n";
        int place;
        cout<<"enter place from[1:6] :";
        cin>>place;
        char x='x';
        change(place,x,board);
        board1 ();
        if(check_winner(board)){
          cout<<first<<" is winner \n";
          p=1;
          break;}
        else{
            continue;
        }
    }
    if(i%2==0){
        cout<<"it is the Turn of "<<second<<"\n";
        int place;
        cout<<"enter place from[1:6] :";
        cin>>place;
        char x='o';
        change(place,x,board);
        board1 ();
        if(check_winner(board)){
          cout<<second<<" is winner \n";
          p=1;
          break;}
        else{
            continue;
        }
    }
     
 }
 if(p==0&&i==10){
  cout<<"The Game Finished With DRAW\n";
 }
 cout<<"if you want to play again enter 1 else enter 0  \n";
 int x;
 cin>>x;
 if(x==1)
   GAME();
 else
   cout<<"Thanks for playing  "; 
 }
int main(){
GAME();
}