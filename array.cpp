#include<iostream>
#include<array>
template<size_t length>
void printArray(std::array<int,length> arr){
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<"\t";
    }
}
int main(){
    std::cout<<"Enter the values of a static array \'std::array\' of size 10"<<std::endl;
    std::array<int,10> arr;
    for(int i=0;i<10;i++){
        std::cin>>arr[i];
    }
    printArray(arr);
    std::cout<<std::endl;
    

}