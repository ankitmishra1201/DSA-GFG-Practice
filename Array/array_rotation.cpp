// Given an array of integers arr[] of size N and an integer, the task is to rotate the array elements to the left by d positions.

// Approach 1 (Using temp array): This problem can be solved using the below idea:

// After rotating d positions to the left, the first d elements become the last d elements of the array

// First store the elements from index d to N-1 into the temp array.
// Then store the first d elements of the original array into the temp array.
// Copy back the elements of the temp array into the original array

#include<iostream>
using namespace std;


void PrintTheArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void rotate(int arr[], int d, int n){
    int k=0;
    int temp[n];
    
    for(int i=d;i<n;i++){
        temp[k]=arr[i];
        k++;
    }

    for(int i=0;i<d;i++){
        temp[k]=arr[i];
        k++;
    }

    PrintTheArray(temp,n);
        
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    rotate(arr,2,7);



    
    return 0;
}