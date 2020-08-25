#include<iostream>
#include<thread>
#include <chrono>
#define PBSTR "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
#define PBWIDTH 60
using namespace std;
void printProgress(double percentage) {
    int val = (int) (percentage * 100);
    int lpad = (int) (percentage * PBWIDTH);
    int rpad = PBWIDTH - lpad;
    printf("\r%3d%% [%.*s%*s]", val, lpad, PBSTR, rpad, "");
    fflush(stdout);
}
int main(){
    printProgress(.51);
    std::cout<<std::this_thread::get_id();
    std::this_thread::sleep_for((std::chrono::seconds)std::literals::chrono_literals::operator ""s<'1'>()
);
    printProgress(.81);
}