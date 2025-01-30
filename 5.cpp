
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*write a program to edentify the even numbers after after excluding
 the number x from the given array of N element*/
int main(){
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int x;
    cin>>x;

    for(int num:arr){
        if(num!=x && num%2==0){
        cout<<num<<"";
        }
    }
    cout<<endl;
    return 0;
}