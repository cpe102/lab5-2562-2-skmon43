#include<iostream>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	
	string name[N];
	int age[N], i = 0;
	while (i < N) {
		cout << "Name of student " << i + 1 << " = " ;
		cin >> name[i];
		cout << "Age of student  " << i + 1 << " = ";
		cin >> age[i];
		i++;
	}
	
	int key;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	i = 0;
	cout << "--------------------------------------\n";
	while (i < N) {
		if (age[i] == key){
			cout << name[i] << endl;
		}
		i++;
	}
	cout << "--------------------------------------\n";
	
	return 0;
}
