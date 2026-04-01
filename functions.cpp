#include<iostream>
using namespace std;

// function defination
// int  sum(int a, int b){
//     int sum = a + b;
//     return sum;
// }

// double min(double x, double y){
//     if(x < y){
//         return x;
//     }
//     else{
//         return y;
//     }
// }

int sumN(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}

// int factorialN(int n){
//     int fact = 1;
//     for(int i=1;i<=n;i++){
//         fact *= i;
//     }
//     return fact;
// }


int sumofDigits(int num){
    int digSum = 0;

    while(num > 0){
        int lastDig = num%10;
        num = num/10;

        digSum += lastDig;
    }
    return digSum;
}
int factorial(int n){
    int fact = 1;

    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int ncr (int n , int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_r * fact_nmr);
}
 
int main(){
    // functional call / invoke
    // cout<<sum(10,10);
    // cout<<"Min of two :  "<<min(40,20 );
    // cout<<sumN(5);
    // cout << factorialN(4) << endl;
    // cout << factorialN(5) << endl;
    // cout << "Sum = " << sumofDigits(2356) <<endl;
    int n = 6, r = 3;
    cout << ncr(n,r);
    return 0;
    

}