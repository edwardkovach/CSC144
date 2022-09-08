using namespace std;

int main() {

	int number1{ 0 };
	int number2{ 0 };
	int sum{ 0 };

	cout << "Input two integers\n";
	cin >> number1 >> number2;

	sum = number1 + number2;
	
	cout << "The sum of " << number1 << " and " << number2 << " is " << sum << endl;

	return 0;

}