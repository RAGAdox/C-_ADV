#include<iostream>
#include<fstream>
#include <sys/stat.h>

struct stat info;
int random_range(int l,int u){
    return rand()%(u-l+1)+l;
}
int main(){
    stat("lib",&info);
    if(info.st_mode>0||mkdir("lib",0777)==0){
        std::cout<<"Wtriting to file";
        std::ofstream my_file("lib/filename.txt",std::ofstream::out|std::ofstream::app);
        srand((unsigned) time(0));
        for(long double i=0;i<2000000000000;i++){
            my_file<<"Rishi Mukherjee,"<<rand()<<","<<random_range(6,20)<<std::endl;
        }
        my_file.close();
    }
}