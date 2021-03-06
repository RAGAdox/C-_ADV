#include<iostream>
#include<thread>                    //Used to get the  thread library
#include<chrono>                    //For time  measuring 
using namespace std;
using namespace std::chrono;        //get the namespace for chrono
void threadFn(){
    cout<<"IN thread"<<endl;
}
int main(){
    auto start = high_resolution_clock::now();
    cout<<"Welcome to advanced C++"<<endl;
    thread t1(threadFn);            //thread gets created and started it's  execution along side main
    cout<<"thread was created"<<endl;
    t1.join();                      //waiting for the thread to finnish it's execution 
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(stop - start); 
    cout << duration.count() << endl; 
    return 1;
}