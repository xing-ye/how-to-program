#include<iostream>

using namespace std;

int main()
{
    int binary;
    int decimal=0;
    int bit =1;
    cout<<"Enter a binary number: ";
    cin>>binary;
    while(binary!=0)
    {
        decimal+=binary%10*bit;
        binary/=10;
        bit*=2;
    }
    cout<<"Decimal is "<<decimal<<endl;
    return 0;
}