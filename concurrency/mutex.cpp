#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
using namespace std;
std:: mutex gLock;
static int dx =0;
void shared()
{
    gLock.lock();
    dx+=1;
    gLock.unlock();
}
int main()
{
  
  vector<thread>threads;
  for(int i=0;i<10;i++)
  {
    threads.push_back(thread(shared));
  }
for(int i=0;i<10;i++)
{
    threads[i].join();
}
    cout<<"hello to my main thread"<<dx<<endl;

    return 0;
}