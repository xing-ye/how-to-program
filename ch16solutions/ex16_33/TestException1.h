#include <string>
#include <stdexcept> 
using namespace std;

class TestException1 : public runtime_error 
{
public:  
   TestException1( const string &message ) 
      : runtime_error( message ) {}
};
