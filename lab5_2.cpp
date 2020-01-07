#include<iostream>
#include<string>
using namespace std;


string mixText(string x, string y) {
	int i = 0, c = 0;
	string word = x + y;
	if (x.size() == y.size()) {
		while (i < x.size() * 2) {
			word[i] = x[c];
			i++;
			word[i] = y[c];
			i++;
			c++;
		}	
		return word;
	} else {
		return "E";
	}
}

int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
