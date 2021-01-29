#include <iostream> 
#include "TestException.h"
using namespace std;

void f() 
{ 
   throw TestException( "TestException" ); 
} 

void g() { f(); } 

void h() { g(); } 

int main()
{
   try 
   {
      h();
   } 
   catch ( TestException &t ) 
   {
      cerr << "In main: Caught " << t.what() << '\n';
   } 
} 
