#include<iostream>
#include<unistd.h>
#include<thread>
#include<chrono>
#include<iomanip>
#include<sstream>
using namespace std::this_thread;
using namespace std::chrono;

class twinkle 
{
  public:
    void execute()
    {
     std::cout<<"\n in twinkle function \n";
     }
};

class factory
{
public :
void run()
{
  std::cout<<"\n in run function \n";
 auto *cmd=new twinkle();
   cmd->execute();
}
};






int main()
{
  int min=1,wait,sec=55;
  factory shell;
  std::cout<<"\n in main \n";
  shell.run();
  return 0;
}
