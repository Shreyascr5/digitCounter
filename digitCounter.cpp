#include<iostream>	
using namespace std;

int main()
{
	int number;
	cout << "Enter your number: " << endl;
	cin >> number;

	if (number == 0) {
		cout << "You have entered 0. " << endl;
	}
	else {
		//for numbers that are negative and are less than 0;
		//convert the entered number to positive and when it is positive it follows the function cond(number>0);

		if (number < 0) {
			number = -1 * number;
		}
		int counter=0;
		while (number > 0) {
			number /= 10; //if number entered is 123 , 123/10=12.3 where 3 is taken since  / operator only accepts 
			//integer values, then the counter value is incremented; then on next iteration 12/10=1.2 where counter value is 2 now;
			counter++;
		}
		cout << counter << " digits.\n";
	}
	system("pause>0");
}