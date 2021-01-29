#include<iostream>
#include"Account.h"

using namespace std;

Account::Account(int m){
    balance=0;
    if(m>0)
    balance=m;
    if(m<0)
    cout<<"Error:iszero!\n"<<endl;

}

void Account::credit(int m)
{
balance=balance+m;
}
void Account::debit(int amount )
{
     if ( amount > balance ) // debit amount exceeds balance
      cout << "Debit amount exceeded account balance.\n" << endl;

   if ( amount <= balance ) // debit amount does not exceed balance
      balance = balance - amount;
}

int Account::getBalance(){
    return balance;
}