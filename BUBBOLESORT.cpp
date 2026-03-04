#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;



int main(){

    int arr [n] ; 

    for(int i = 0 ; i < n-1 ; i++){
        bool isswap = false;
        for(int j = 0 ; j < n-i-1 ; j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
                isswap = true;
            }

            if(!isswap){
                return;
            }
        }
    }

   
    return 0;
}