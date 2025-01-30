#include<iostream>
using namespace std;
int main(){
    int fuelNeeded, costPerLiter;
    std::cin>>fuelNeeded>>costPerLiter;
    long long totalAmount = (long long)fuelNeeded *costPerLiter;
    std::cout <<totalAmount<<std::endl;
    return 0;
}