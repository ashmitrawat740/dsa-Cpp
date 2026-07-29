//Counting Frequencies
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    //precompute
    int hash[13] = {0};
    for(int i =0; i<n; i++ ){
        hash[arr[i]]++;
    }
    //to print queries and no to find element freq//
    int q;
    cin >> q ;
    while(q--){
        int num;
        cin>> num;
         //fetch
         cout << hash[num];
}
return 0;
}