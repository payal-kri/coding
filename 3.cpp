#include<iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;

    int arr[n];

    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int maxval = INT_MIN ;
    for(int i=0;i<n;i++){
        int currentmin = INT_MAX;
        for(int j=i;j<i+k;j++){
            currentmin = min(currentmin,arr[j]);

        }
        maxval = max(maxval,currentmin);
    }
    cout<<maxval;
    return 0;
}