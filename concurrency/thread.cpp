#include <iostream>
#include <thread>
using namespace std;
int main()
{
    auto lambda =[](int x)
    {
        cout<<"hello from kaustubh"<<endl;
    cout<<"argument from "<<x<<endl;
    }
    std::thread myThread(lambda,100);
    myThread.join();
    cout<<"hello to my main thread"<<endl;

    return 0;
}