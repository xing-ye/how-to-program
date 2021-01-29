#include <iostream> 
#include "TestException1.h"
#include "TestException2.h"
using namespace std;

void f()
{
   throw TestException1( "TestException1" );
} 

void g()
{
   try 
   {
      f();
   } 
   catch ( TestException2 &t2 ) 
   {
      cerr << "In g: Caught " << t2.what() << '\n';
   } 
} 

int main()
{
   try 
   {
      g();
   } 
   catch ( TestException1 &t1 ) 
   {
      cerr << "In main: Caught " << t1.what() << '\n';
   } 
} 
