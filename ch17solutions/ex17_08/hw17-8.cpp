#include <iostream> 
#include <iomanip> 
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
   const int ITEMS = 4; 

   const int accountNumbers[ ITEMS ] = { 100, 300, 500, 700 };

   const string names[ ITEMS ] =
      { "Alan Jones", "Mary Smith", "Sam Sharp", "Suzy Green" };

   const double balances[ ITEMS ] = { 348.17, 27.19, 0.00, -14.22 }; 

   const double transactionAmounts[ ITEMS ] =
      { 27.14, 62.11, 100.56, 82.17 };
   
   ofstream outOldMaster( "oldMast.dat" );
   ofstream outTransaction( "trans.dat" );

   if ( !outOldMaster ) 
   {
      cerr << "Unable to open oldmast.dat\n";
      exit( 1 );
   } 

   if ( !outTransaction ) 
   {
      cerr << "Unable to open trans.dat\n";
      exit( 1 );
   } 
   cout << fixed << showpoint << "Contents of \"oldmast.dat\":\n";

   outOldMaster << fixed << showpoint;

   for ( int i = 0; i < ITEMS; ++i ) 
   {
      outOldMaster << accountNumbers[ i ] << ' ' << names[ i ] << ' '
         << setprecision( 2 ) << balances[ i ] << '\n';
      cout << accountNumbers[ i ] << ' ' << names[ i ] << ' ' 
         << setprecision( 2 ) << balances[ i ] << '\n';
   } 
   cout << "\nContents of \"trans.dat\":\n";        
   outTransaction << fixed << showpoint;

   for ( int i = 0; i < ITEMS; ++i ) 
   {
      outTransaction << accountNumbers[ i ] << ' ' << setprecision( 2 )
         << transactionAmounts[ i ] << '\n';
      cout << accountNumbers[ i ] << ' ' << setprecision( 2 )
         << transactionAmounts[ i ] << '\n';
   } 
} 

