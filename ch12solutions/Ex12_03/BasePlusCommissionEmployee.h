#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> 
#include "CommissionEmployee.h" 
using namespace std;

class BasePlusCommissionEmployee
{
public:
   BasePlusCommissionEmployee( const string &, const string &, 
      const string &, double = 0.0, double = 0.0, double = 0.0 );
   
   void setFirstName( const string & );
   string getFirstName() const; 

   void setLastName( const string & ); 
   string getLastName() const; 

   void setSocialSecurityNumber( const string & ); 
   string getSocialSecurityNumber() const;

   void setGrossSales( double ); 
   double getGrossSales() const; 

   void setCommissionRate( double ); 
   double getCommissionRate() const; 

   void setBaseSalary( double ); 
   double getBaseSalary() const; 

   double earnings() const; 
   void print() const; 
private:
   double baseSalary; 
   CommissionEmployee commissionEmployee; 
}; 

#endif

