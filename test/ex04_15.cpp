#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
   int counter,number;
   int largest=INT8_MIN;
   int secondlargest=INT8_MIN;
   cout<<"Enter the next number: ";
       cin>>largest;
   for(counter=1;counter<10;counter++)
   {
       cout<<"Enter the next number: ";
       cin>>number;
       if(number>largest){
           secondlargest=largest;
           largest=number;
       }
       else if(number<largest&&number>secondlargest){
           secondlargest=number;
       }
   }
   cout<<"The largest number: "<<largest<<endl;
   cout<<"The second largest number: "<<secondlargest<<endl;
return 0;
}