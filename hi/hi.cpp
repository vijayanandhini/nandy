#include<iostream>
using namespace std;
class get_yr
{
   
    protected:
        int birth_year;
        int current_year; 
    public:
    void get_year()
    {
      cout<<"Enter your year of birth \n";
      cin>>birth_year;
      cout<<"\n"; 
    }
    get_yr()
   { 
       cout<<"In base class constructor.......\n";
       current_year=2016;
      
     }
    ~get_yr()
   { 
       cout<<"In base class destructor.......\n";
    }
};

class my_age : public get_yr
{

  private:
    int age;
 
  public:
    void dis_age()
    {
	get_year();
      age=current_year-birth_year;
      cout<<"your age is ...... "<<age<<"\n";
	}
    my_age()
    {
      cout<<"In derived class constructor.......\n";
    
    }
    ~my_age()
    {
      cout<<"In derived class destructor.......\n";
    }
};

int main()
{
   cout<<"hi vijayanandhini changed in github.com.........\n";
 my_age a;
 get_yr yr;
   cout<<"In main............\n";
  a.dis_age();
   return 0;
}
