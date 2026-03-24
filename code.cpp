#include<iostream>
using namespace std;

int main(){
    // Primitive Data types

    // int age = 24;
    // char grade = 'A';
    float PI = 3.142f;
    bool  isSafe = true;

    // type casting (implicit)
    char grade = 'a';
    int value = grade;

    // type casting (explicit)
    double price = 300.23;
    int newPrice = (int) price;

    // int age;
    // cout << "Enter you age please : " ;
    // cin >> age;

    // int a = 5 , b = 10;
    // int a,b;

    // airthematic operator

    // cout<<"Enter value of a: ";
    // cin>>a;
    // cout<<"Enter value of b : ";
    // cin>>b;
    // cout <<"sum a and b is : "<<(a+b)<<endl;
    // cout <<"differnce of a and b :"<<(a-b)<<endl;
    // cout<<"Multiply : "<<(a*b)<<endl;
    // cout <<"Divison : "<<(a/b)<<endl;
    // cout <<"Modula : "<<(a%b)<<endl;

    // Relation operator

    // cout << (3 < 5) ; true -> 1;
    // cout << (3 > 5); false -> 0;

    // Logical operator

    // cout << !(3<5)<<endl; false -> 0;
    // cout << ((1<2) || (0!=0)) <<endl;  True -> 1
    // cout << ((1<2) && (0!=0)) <<endl; false -> 0
    // cout << ((1<2) && (0==0)) <<endl; true - > 1

    // Unary opereator 
            // post increment
    // int a = 10; 
    // int b = a++;
    // cout << "a is " << a <<endl; a is 11
    // cout << "b is " << b <<endl; b is 10
        // pre-increment
    // int a = 10; 
    // int b = ++a;
    // cout << "a is " << a <<endl; a is 11
    // cout << "b is " << b <<endl; b is 11

            // post decrement
    // int a = 10;
    // int b = a--;
    // cout<<"a is " << a <<endl;  a is 9
    // cout<<"b is " << b <<endl;  b is 10

            // pre-decrement
    int a = 10;
    int b = --a;
    cout <<" a is " <<a <<endl; // a is 9 
    cout <<" b is " <<b << endl; // b is 9

    
    return 0;
}