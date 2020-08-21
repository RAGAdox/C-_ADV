#include<iostream>
#include<thread>
#include<future>
//Using Promise
using namespace std;
void threadFunc(promise<int> &p){
    cout<<"threadFunc Thread ID=>\t"<<this_thread::get_id()<<endl;
    this_thread::sleep_for(3s);
    p.set_value(20);
    this_thread::sleep_for(3s);
}
int main(){
    promise<int> myPromise;
    future<int> fu=myPromise.get_future();
    cout<<"Main Thread ID=>\t"<<this_thread::get_id()<<endl;
    thread t1 {threadFunc,ref(myPromise)};
    int valueFromThread=fu.get();
    cout<<"Value Set from Thread"<<valueFromThread<<endl;
    t1.join();
    return 0;
}