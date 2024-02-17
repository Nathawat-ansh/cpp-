   // array and pointer
# include<iostream>
using namespace std;

int main()
   {
// access element of array
   /*
   int var[]={1,2,3,4};
   cout<<"first element  :-"<<var[0]<<endl;
   cout<<"second element :-"<<var[1]<<endl;
   cout<<"third element  :-"<<var[2]<<endl;
   cout<<"fourth element :-"<<var[3]<<endl;
   */
// define value to each element of an array    
   /*
   int arr[6];
   arr[1]=13;
   arr[2]=3;
   arr[4]=1;
   arr[5]=65;
   cout<<"1st element :- "<<arr[0] <<endl;
   cout<<"2nd element :- "<<arr[1] <<endl;
   cout<<"3rd element :- "<<arr[2] <<endl;
   cout<<"4th element :- "<<arr[3] <<endl;
   cout<<"5th element :- "<<arr[4] <<endl;
   cout<<"6th element :- "<<arr[5] <<endl;
   */

// update an array
   int a[]={122};
   
   //before update
   cout<<"'before update "<<endl;
   cout<<" value of a[0] is :- "<< a[0] <<endl;
   
   //after update
   a[0]=12;
   cout<<"after update "<<endl;
      
   cout<<"value of a[0] is :- "<< a[0] <<endl;

//Traverse an array (print values of an array using for loop )
      int arrs[]={1,2,3,4,5,6,7,8,9,10};
      for(int a=0; a<10; a++){
         cout<<"value of "<< a <<"th element is :- " <<arrs[a]<<endl;
      } 

//  size and length of an array (size of)
       
      //  size 
      cout<<"sixe of 0th elemrnt of an array "<<sizeof(arrs[0])  <<endl;
      cout<<"sixe of of an array "<<sizeof(arrs)  <<endl;
      // length 
      int len=sizeof(arrs)/sizeof(arrs[1]);
      cout<<" length of an array is :- "<< len <<endl;
            
// pointer and array 

      // (array_name store the address of 1st block)
      int arr1[4]={1,2,3,4} ;
      int* ptr= arr1;
      cout<<"the address of 1st block of am array :- "<< arr1  <<endl;
      cout<<"the address of 1st block of am array using pointer :- "<< ptr  <<endl;
   
      // printing array elemrnt without index 
      cout<<" value of 0th element is :- "<<*arr1  <<endl;
      cout<<" value of 1st element is :- "<<*(arr1+1)  <<endl;
      cout<<" value of 2nd element is :- "<<*(arr1+2)  <<endl;
      cout<<" value of 3rd element is :- "<<*(arr1+3)  <<endl;
         
      // print value of an array using pointer 
      cout<<" value of 0th element is using pointer :- "<<*ptr  <<endl;
      cout<<" value of 1st element is using pointer :- "<<*(ptr+1)  <<endl;
      cout<<" value of 2nd element is using pointer :- "<<*(ptr+2)  <<endl;
      cout<<" value of 3rd element is using pointer :- "<<*(ptr+3)  <<endl;
      


   return 0;
   }