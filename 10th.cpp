# include<iostream>
using namespace std;

int main()
 {
   cout<<"\t\t BREAK AND CONTINUE STATEMENT";

   //break
   for (int i=0; i<13; i++)
      {
          cout<<i<<endl;
          if(i==4){
            break;
          }  
      }
   // continue
   cout<<"contnue statement";
   
   int j=0;
   while (j<=15){
      if (j>11){
         continue;
      }
      cout<<j <<endl;
      j++;   
   }
   
   
    return 0;
 }


 