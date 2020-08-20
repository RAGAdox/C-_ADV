#include<iostream>
#include<thread>
#include<chrono>
#include<future>
using namespace std;
using namespace chrono;
//Async Programming in C++
/*void asyncFunc(){
    cout<<"Async Thread ID=>\t"<<this_thread::get_id()<<endl;
    this_thread::sleep_for(2s);
}*/
int asyncFunc(int a){
    cout<<"Async function with Params ID=>\t"<<this_thread::get_id()<<endl;
    this_thread::sleep_for(2s);
    return ++a;
}
int main(){
    cout<<"Main Thread ID=>\t\t"<<this_thread::get_id()<<endl;
    future<int> fn=async(launch::async,asyncFunc,100);
    int  result;
    if(fn.valid())
        result=fn.get();
    cout<<"output of Async Function=>\t"<<result<<endl;
    return 0;
}