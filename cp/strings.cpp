#include<iostream>


using namespace std;

int main(){

    string first,second;

    getline(cin,first);
    getline(cin,second);

    cout << first.size() << " " << second.size() << endl;
    cout << first + second << endl;

    char temp = first[0];

    first[0] = second[0];
    second[0] = temp;




    cout << first << " " << second ;



}