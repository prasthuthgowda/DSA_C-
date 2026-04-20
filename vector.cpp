#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec;
    // vector <int> vec = {1,2,3};
    // vector <char> vec = {'a','b','c','d'};
    // vector <int> vec = (3,0);
    // cout << "Size = " << vec.size() << endl;
    // vec.push_back(34);
    // vec.push_back(23);
    // vec.push_back(48);

    // cout << "after push back size = " << vec.size() << endl;
    // vec.pop_back();
    // for(int val : vec){ //for each loop
    //     cout << val << " " <<endl;
    // }
    // cout<<"after vec.front() - " << vec.front() <<endl;
    // cout<<"after vec.bsck() - " << vec.back() <<endl;
    // cout << vec.at(0);

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout<<"Size = " << vec.size();
    cout <<" Capacity = " << vec.capacity();
    return 0;
}