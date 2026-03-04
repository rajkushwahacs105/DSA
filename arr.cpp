#include<iostream>
#include<climits>
using namespace std;



int unicvalue(){
   int arr[] = { 1 ,6, 5 , 2 };
   int arrr[] = { 1,5,3,8};

   for(int i= 0; i < sizeof(arr)/sizeof(arr[0]) ; i++){
    

    for(int j= 0; j < sizeof(arr)/sizeof(arr[0]) ; j++){
        
            if(arr[i] == arrr[j]){
            
             cout<<arr[i];
            
             break;
        
        }
        
        
    }

   
   }
   return 0;
}


int main(){
    unicvalue();
}