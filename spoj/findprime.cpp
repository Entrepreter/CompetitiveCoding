#include<iostream>

using namespace std;


void print_prime_numbers_bet_range(int n, int m){

    for (int i = n; i <= m; i++)  {  
       
        if((i%2 == 0 && i >= 4 )|| (i%5 == 0 && i >= 25) ||(i%3 == 0 && i >= 9) || i == 1){
            continue;
        }
        cout << i << endl;     
    }


}

int main(){

  
   int tests ;
   cin >> tests;

   while (tests--)
   {

       int n ,m ;
       cin >> n >> m;

       print_prime_numbers_bet_range(n,m);

        if(tests != 0){
       cout << endl;
   }
   
   }

  
    

}