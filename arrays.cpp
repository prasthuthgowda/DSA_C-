#include<iostream>
using namespace std;


int smallest(int a[], int size){
    int small = INT_MAX;
    for(int i= 0; i<size;i++){
        if(a[i] < small){
            small = a[i];
        }
        // also instead of if we can use
        // min(a[i],small);
    }
    return small;


}

int largest(int a[] , int size){
    int large = INT_MIN;

    for(int i=0;i<size;i++){
        if(a[i] > large){
            large = a[i];
        }
        // max(a[i], large);
    }
    return large;
}

int linearSearch(int arr[] , int target, int size){
    for(int i=0;i<size;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

void reverseArr(int arr[], int size){
    int start = 0 , end = size-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }    
}

int main(){

    // int marks[] = {99, 54, 78, 91, 98};
    // int size = 5;
    // cout<<marks[0] << endl;
    // cout<<marks[1] << endl;
    // cout<<marks[2] << endl;

    // loop : 0 to size-1;
    // for(int i=0; i<size; i++){
    //     cout<< marks[i] <<endl;
    // }
    // int size = 6;
    // int a [] = {5, 15, 22, 1, -15 , 24};
    // cout <<"Smallest : "<< smallest(a , size) <<endl;
    // cout <<"Largest : " << largest(a, size) <<endl;
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;
    int target = 5;
    // cout<<linearSearch( arr,target,size);
    reverseArr(arr,size);

    for(int i=0; i<size;i++){
        cout<< arr[i] <<" ";
    }
    cout << endl;
    return 0;
}