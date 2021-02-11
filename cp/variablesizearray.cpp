#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n, q;

    cin >> n >> q;
    vector<int> a[n];
    for (int  i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        for (int j = 0; j < s; j++)
        {
            int t;
            cin >> t; 
            a[i].push_back(t);
        }
    }


    int j,k;

    for (int i = 0; i < q; i++){
        cin >> j >> k;
        cout << a[j].at(k) << endl;
    }


}