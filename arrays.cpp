#include<iostream>
using namespace std;


int smallest(int a[], int size){
    int small = INT_MAX;
    for(int i= 0; i<size;i++){
        if(a[i] < small){
            small = a[i];
        }
    }
    return small;


}

int largest(int a[] , int size){
    int large = INT_MIN;

    for(int i=0;i<size;i++){
        if(a[i] > large){
            large = a[i];
        }
    }
    return large;
}
int main(){

    int marks[] = {99, 54, 78, 91, 98};
    // int size = 5;
    // cout<<marks[0] << endl;
    // cout<<marks[1] << endl;
    // cout<<marks[2] << endl;

    // loop : 0 to size-1;
    // for(int i=0; i<size; i++){
    //     cout<< marks[i] <<endl;
    // }
    int size = 6;
    int a [] = {5, 15, 22, 1, -15 , 24};
    cout <<"Smallest : "<< smallest(a , size) <<endl;
    cout <<"Largest : " << largest(a, size) <<endl;
    return 0;
}