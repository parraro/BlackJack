//============================================================================
// Name        : BlackJack.cpp
// Author      : Esteban Parra
// Version     :
// Copyright   : 
// Description : BlackJack simulator in C++, Ansi-style
//============================================================================

#include <iostream>
#include "card.cpp"

using namespace std;

int main() {
	cout << "d" << endl; // prints !!!Hello World!!!
	for(int i=0; i<10; i++){
		Card c;
		c.set_value(rand()%10);
	}
	return 0;
}

void numbers(int limit){
	for(int i=0; i < limit; i++){
		cout << i << "\n";
	}
}
