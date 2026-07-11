#include <iostream>
#include <thread>
#include <vector>
using namespace std;
int main()
{
    auto lambda =[](int x)
    {
        cout<<"hello from kaustubh"<<this_thread::get_id()<<endl;
    cout<<"argument from "<<x<<endl;
    };
   vector<std::thread>threads;
   for(int i=0;i<10;i++)
   {
    threads.push_back(std::thread(lambda,i));
   }
   for(int i=0;i<10;i++)
   {
    threads[i].join();
   }
    cout<<"hello to my main thread"<<endl;

    return 0;
}