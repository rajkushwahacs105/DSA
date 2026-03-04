#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;

int fs(vector<int>&arr ,int low ,int high){

   int pivot = arr[low];
   int i = low;
   int j = high;
   
   while(i<j){
    while(arr[i]<=pivot && i <= high - 1){
        i++;
    }
    while(arr[j]>pivot && j >= low + 1){
        j--;
    }

    if(i<j) swap(arr[i],arr[j]);

   }
   swap(arr[low] , arr[j]);
   return j;
}


void qs(vector<int>&arr ,int low ,int high){
     if(low<high){

        int pindex= fs(arr , low ,high);

        qs(arr , low , pindex - 1);
        qs(arr, pindex+1,high);
     }
}


int main(){

    vector<int> arr = {4,3,2,6,7,9,8,15};

    qs(arr , 0 , arr.size()-1);


    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<endl;
    }


   
    return 0;
}