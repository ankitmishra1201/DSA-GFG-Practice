// Given an array, cyclically rotate the array clockwise by one.
// Input:  arr[] = {1, 2, 3, 4, 5}
// Output: arr[] = {5, 1, 2, 3, 4} 

#include<iostream>
using namespace std;

void PrintTheArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void cyclic_rotate(int arr[], int n){
    int k=0;
    int temp[n];

    temp[0]=arr[n-1];
    k++;
    for(int i=0;i<n-1;i++){
        temp[k]=arr[i];
        k++;
    }
    PrintTheArray(temp,n);

}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    cyclic_rotate(arr,5);

    
    return 0;

}