#include <string>
#include <stdexcept> 
using namespace std;

class TestException2 : public runtime_error 
{
public: 
   TestException2( const string &message ) 
      : runtime_error( message ) {}
}; 