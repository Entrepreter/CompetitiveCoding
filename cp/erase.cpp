#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n;
    cin >> n;

     vector<int> a;

    for (int i = 0; i < n; i++)
    {
        int t ;
        cin >> t;
        a.push_back(t);
    }

    int f;
    cin >> f;

    a.erase(a.begin() + f - 1 );

    int s,e;

    cin >> s >> e;

    a.erase(a.begin() + s - 1, a.begin() + e - 1);


    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    


}