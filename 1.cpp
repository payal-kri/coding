#include<iostream>
#include<vector>
using namespace std;
/*write a program that takes a list of integer as input.calculate and print the 
 sum of even numbers and the sum of odd numbers in the list*/
void sumEvenOdd(const vector<int>& numbers){
 int evenSum = 0,oddSum =0;
 for (int num :numbers){
    if (num %2 ==0){
        evenSum+= num;
    }
    else{
        oddSum+=num;
    }
 }
 cout<<"Sum of even Numbers:"<<evenSum<<endl;
 cout<<"Sum of odd Numbers:"<<oddSum<<endl;
}
int main(){
    vector<int>numbers={1,2,3,4,5,6};
    sumEvenOdd(numbers);
    return 0;
}