#include <string>
#include <stdexcept> 
using namespace std;

class TestException : public runtime_error 
{
public:   
   TestException( const string& message ) 
      : runtime_error( message ) {}
}; 
