#include<iostream>

using namespace std;

int main()
{
    int row=1,column,stars;
    cout<<"Enter number: ";
    cin>>stars;
    while(row<=stars)
    {
        column=1;
        while(column<=stars)
        {
        if(row==1)cout<<"*";
        else if(column==1)cout<<"*";
        else if(row==stars)cout<<"*";
        else if(column==stars)cout<<"*";
        else cout<<" ";
        column++;
        }
        cout<<endl;
        row++;
    }
}