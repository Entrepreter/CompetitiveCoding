#include<iostream>

using namespace std;

int main(){

    int n, k;
    int p= 0;

    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        if(a[i] >= a[k -1] && a[i] > 0){

            p++;

        }
    }
    
    cout << p;
    return 0;

}