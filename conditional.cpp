#include <iostream>
using namespace std;

int main(){
    // int n;
    // cout << "Enter an Integer: ";
    // cin >> n;
    // if(n >= 0){
    //     cout<<n <<" is a postive integer";
    // }
    // else{
    //     cout << n <<" is a negative integer";
    // }
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;

    // if(age >= 18){
    //     cout << "You can vote! \n";
    // }else{
    //     cout << "You cannot vote!\n";
    // }

    // cout << "Enter a number : ";
    // cin >> n;
    // if(n%2 == 0){
    //     cout<<n << " is even";
    // }
    // else{
    //     cout << n <<" is odd";
    // }

//     int marks;
//     cout<<"Enter you marks : ";
//     cin>>marks;
//     if(marks>= 90){
//         cout << "Your grade is A";
//     }
//    else if(marks>=80 && marks<90){
//     cout << "You are grade is B";
//    }
//    else if(marks>=70 && marks<80){
//     cout << "Your grade is c";
//    }
//    else if(marks>=35 && marks<70){
//     cout << "You are passed";
//    }
//    else{
//     cout << "Better luck next time!";
//    }

    char ch;
    cout << "Enter a character : ";
    cin >> ch;

    if(ch >='a' && ch<='z'){
        cout << ch<<" is Lower case\n";
    }
    else if(ch >='A' && ch<='Z'){
        cout << ch <<" is Upper case\n";
    }
    else{
        cout<<"Please Enter alphabets only\n";
    }
    // Ternry opertor
     int n = 24;
     cout << (n>=0? "postive" : "negtive\n") <<endl;
     
    return 0;
}