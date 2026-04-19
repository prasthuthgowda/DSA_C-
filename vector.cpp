#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec;
    // vector <int> vec = {1,2,3};
    // vector <char> vec = {'a','b','c','d'};
    // vector <int> vec = (3,0);
    cout << "Size = " << vec.size() << endl;
    vec.push_back(34);
    vec.push_back(23);
    vec.push_back(48);
    cout << "after push back size = " << vec.size() << endl;
    for(int val : vec){ //for each loop
        cout << val << " ";
    }
    return 0;
}