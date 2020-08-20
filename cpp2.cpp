#include<iostream>
#include<thread>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;
void tFun(int x){
    cout<<"INSIDE THREAD\t"<<x<<endl;
}
void tFun(){
    cout<<"INSIDE THREAD "<<endl;
    sleep(5);
    cout<<"Sleep ended \n";
}
int main(){
    cout<<"Overloding function Threads in c++ \n";
    thread t1(static_cast<void(*)(void)>(tFun));
    cout<<"thread t1 created"<<endl;
    thread t2(static_cast<void(*)(int)>(tFun),100);
    cout<<"thread t2  created"<<endl;
    t1.join();
    t2.join();
    return 0;
}