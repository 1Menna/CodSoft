#include <bits/stdc++.h> 
using namespace std;
string satue(int x)
{
if(x==0)
  return"Pending";
else 
  return"Completed";  
}
int main(){
      map<string,int>list;
      cout<<"♡ welcome to my list ♡\n";
      cout<<"press the character of what you want +..task..\n";
      cout<<"for adding tasks              ----> press a..task..\n";
      cout<<"for viewing list              ----> press v \n";
      cout<<"to mark task as completed     ----> press c..task..\n";
      cout<<"for deleteing task            ----> press d ..task..\n";
      cout<<"for finishing using programme ----> press f\n";
      char x;
      while(cin>>x)
      {
      if(x=='a')
      {
      string s;
      cin>>s;
      list.insert({s,0});
      }
      else if(x=='v')
      {
      for(auto k:list)
          {
          int p=k.second;
          cout<<k.first<<"------>"<<satue(p)<<"\n";
          cout<<"_______________________________\n";
          }
      }
      else if(x=='c')
      {
      string s;
      cin>>s;
      list[s]=1;
      }
      else if(x=='d')
      {
      string s;
      cin>>s;
      list.erase(s);
      }
      else if(x=='f'){
        cout<<"Thanks for using 'my list program' \n";
        break;
      }
      else
         cout <<"invalid character\n";  
      }
       
    
}