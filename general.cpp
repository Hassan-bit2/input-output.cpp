#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	cout << "Please enter first number" << endl;/*<< is an insertion operator*/
	cin >> num1;/* >> is called extraction operator */
	cout << "Please enter second number" << endl;
	cin >> num2;
	cout << "Result is " << num1+num2 << endl;
	return 0;
}
