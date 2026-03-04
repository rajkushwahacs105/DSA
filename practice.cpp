#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;

int selection_sort(int arr[] , int n){
    for(int i = 0; i< n; i++){
        int mini = i ;
        for(int j = i ; j<n ; j++ ){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }

        int temp = arr[mini];
         arr[mini] = arr[i];
        arr[i] = temp;
    }
};

int bubble_sort(int arr[],int n){
     
    
    for (int i = n-1; i>=0; i--)
    {
        bool flag = true;
        
        for (int j = 0; j < i ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag){
           break;
        }
        
        
    }
    
}

    


int main(){
    int arr[5] = { 1,2,3,4,5};
    int n =5;
    // selection_sort(arr,n);

    bubble_sort(arr,n);

    for(int i = 0 ; i <n ; i++){
        cout<<arr[i]<<endl;
    }

   
   
    return 0;
}