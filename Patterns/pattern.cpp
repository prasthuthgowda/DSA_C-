#include<iostream>
using namespace std;

int main(){

    // int n = 5;
    // for(int i=1; i<=n;i++){
    //     for(int j=1; j<=n;j++){
    //         cout<<j << " ";

    //     }
    //     cout<<endl;
    // }

    // int n = 4;
    // for(int i=1; i<=n; i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Square pattern with char

    // int n = 5;
    // for(int i=0; i<n; i++){
    //     char ch = 'A';
    //     for(int j=0;j<n;j++){
    //         cout<<ch <<" ";
    //         ch = ch+1;
    //     }
    //     cout<<endl;
    // }

// Pattern of number without resetting

    // int n = 3;
    // int num = 1;
    // for(int i=0; i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }
    // cout<<"Num is " <<num;

    // Pattern for Char without resetting

    // int n = 3;
    // char ch = 'A';
    // for(int i=0; i<n;i++){

    //     for(int j=0;j<n; j++){
    //         cout << ch <<" ";
    //         ch= ch+1;
    //     }
    //     cout<<endl;
    // }

    // Triangle Pattern
    // int n = 6;
    // for(int i=0; i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // } 

    // Triangle Pattern with numbers
    // int n = 4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<(i+1)<<" ";
    //     }
    //     cout<<endl;
    // }
    // Triangle Pattern with Character
    // int n = 5;
    // char ch = 'A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch;
    //     }
    //     ch++;
    //     cout<<endl;
    // }

    // int n = 4;
    // for(int i=0; i<n;i++){
    //     for(int j=1;j<=i+1;j++){
    //         cout<<j;
            
    //     }
    //     cout<<endl;
    // } 
    // int n = 4;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1; j>0;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n = 4;
    // int nums = 1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<nums<< " ";
    //         nums++;
    //     }
    //     cout<<endl;
    // }

    // A
    // B C
    // D E F
    // G H I J

    // int n = 4;
    // char ch = 'A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // Inverted continues char
    // int n = 4;
    // for(int i=0 ;i<n;i++){
    //     char ch = 'A' + i;
    //     for(int j=i+1;j>0;j--){
    //         cout<<ch<<" ";
    //         ch--;
    //     }
    //     cout<<endl;
    // }

    // Reverse numbers
    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4   
    // int n = 4;
    // for(int i=0;i<n;i++){
    //     // spaces
    //     for(int j=0;j<i;j++){
    //         cout<<" "<<" ";
    //     }
    //     // nums
    //     for(int j=0;j<n-i;j++){
    //         cout<<(i+1)<<" ";
    //     }
    //     cout<<endl;
    // }

    // Pyramid Pattern
    // int n = 5;
    // for(int i=0;i<n;i++){
    //     // Spaces
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i+1;j++){
    //         cout<<j;
    //     }
    //     for(int j=i;j>0; j--){
    //         cout<< j;
    //     }
    //     cout<<endl;

    // }

    // Hollow Diamond pattern;

    int n = 4;

    // top
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<< "*";

        if(i != 0){
            // spaces
            for(int j=0;j<2*i-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout << endl; 

    }
    for(int i=0; i<n-1;i++){
        // spces
        for(int j=0; j<i+1; j++){
            cout<< " ";
        }
        cout<<"*";
        if(i != n-2){
            // spaces
            for(int j=0; j<2*(n-i)-5; j++){
                cout<< " ";
            }

            cout<<"*";
        }
        cout<< endl;
    }
    
    return 0;

}