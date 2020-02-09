// Alex Daly jad803
// Software Testing QA HW2

// -------------------------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	bool keep_running = true;
	while (keep_running == true) {
		int selection;

		cout << endl << "What are you looking to accomplish?" << endl
			<< "1. Caluclate BMI" << endl
			<< "2. Retirment Calculation" << endl
			<< "3. Exit" << endl << endl
			<< "Selection (number please): ";

		cin >> selection;
		cout << endl;

		if (selection == 1) {
			float height_feet;
			float height_inches;
			float weight;
			cout << "You have chosen to Calculate BMI" << endl
				<< "Please enter height in feet, inches will be next: ";
			cin >> height_feet;
			cout << "Remaining inches: ";
			cin >> height_inches;
			cout << "Enter weight in pounds: ";
			cin >> weight;

			height_inches += height_feet * 12;
			float BMI = float(weight * 0.45) / ((height_inches*.025) * ((height_feet*12) * .025));

			cout << endl << endl << "Calculated BMI: ";
			if (BMI < 18.5) {
				cout << fixed << setprecision(1) << BMI << " - Underweight";
			}
			else if (BMI >= 18.5 and BMI <= 24.9) {
				cout << fixed << setprecision(1) << BMI << " - Normal weight";
			}
			else if (BMI >= 25 and BMI <= 29.9) {
				cout << fixed << setprecision(1) << BMI << " - Overweight";
			}
			else if (BMI >= 30) {
				cout << fixed << setprecision(1) << BMI << " - Obeese";
			}
		}
		else if (selection == 2) {
			int age;
			int salary;
			float percent_saved;
			float employer_match;
			int desired_amt;

			cout << "Input Age: ";
			cin >> age;
			cout << "Input salary: ";
			cin >> salary;
			cout << "Percentage Saved (whole number): ";
			cin >> percent_saved;
			employer_match = 1.35;

			cout << "Desired Amount: ";
			cin >> desired_amt;

			int num_years_to_save = 100 - age;

			float amt_saved_per_year = salary * (percent_saved/100) * employer_match;
			float total_saved = 0;

			for (int x = 1; x <= num_years_to_save; x++) {
				total_saved += amt_saved_per_year;

				if (total_saved >= desired_amt) {
					cout << endl << "Desired amount met at age " << x + age
						<< endl;
					break;
				}
			}
			if (total_saved < desired_amt) {
				cout << endl << "Savings will not be met in time" << endl;
			}

		}
		else if (selection == 3) {
			cout << "Exiting Program" << endl;
			keep_running = false;
		}
	}
	return 0;
}