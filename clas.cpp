#include<iostream>

using namespace std;

class Book{

	public: 
		string title;
		string author;
		int pages;

};

int main(){

	Book book1;
	book1.title = "Harry Poter";

	cout << book1.title;
	cout << book1.author;



}

