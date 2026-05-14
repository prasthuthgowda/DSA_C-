#include<iostream>
using namespace std;

int main(){

    // While Loop

    // int n = 50;
    // int i = 1;
    // while( i <= n ){
    //     cout<<i <<" ";
    //     i++;
    // }
    // cout<<endl;

    // q sum of n numbers
    // int n = 5;
    // int sum = 0;
    // int i = 1;
    // for(int i=1; i<=n;i++){
    //     sum = sum + i; //sum += i
    // }
    // cout <<sum<< endl;

        // Using while loop
    // while( i <= n ){
    //     sum +=i;
    //     i++;
    // }
    // cout<< sum <<endl;

    // Sum of all odd number from 1 to N
    // int n = 10;
    // int sum = 0;
    // for(int i=1; i<=n; i++){
    //     if( i%2 != 0 ){
    //         sum+=i;
    //     }
        
    // }
    // cout << sum << endl;

    int n = 9;
    bool isPrime = true;
    for(int i=2;i*i<=n;i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout <<n <<" is a prime";
    }
    else{
        cout<< n <<" is not a prime";
    }
    return 0;
}