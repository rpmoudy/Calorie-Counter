#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include<string>  // Libraries

using namespace std;
int lifeStyleQuestion();

class Calories   // Class definition
{
	private: 
		static const int sizeRow = 5;
				
	public: 
		Calories();
		double bmr, lbm;
};

int main()
{
	int option, tee;
	double multiplier;
	
	Calories c;
	
	option = lifeStyleQuestion();
	
	switch (option)
	{
		case 1:
			{
			multiplier = 1.2;	
			break;
		}
		case 2: 
			multiplier = 1.35;
			break;
			
		case 3:
			multiplier = 1.55;
			break;
		case 4:
			multiplier = 1.75;
			break;
		case 5:
			multiplier = 1.95;
			break;
		default:
			break;
	}
			
	tee = c.bmr*multiplier;
	
	cout << endl << endl << "Your total calories that you would need to consume during the day to maintain your body weight would be " << tee << ".";
	
}

Calories::Calories()
{
	double weight, newWeight, kg, bodyfat;
	
	cout << "Hello! I'm here to help you calculate your daily calorie intake!" << endl << endl;
	
	cout << "First off tell me how much you weight? (lbs)  "
	<< endl << "Press enter when done:  ";
	cin >> weight;
	
	while (weight == NULL){
		cin.clear();
		cin.ignore();
		cout << endl << "Ummm please try again...";
		cin >> weight;
	}
	
	kg = 0.453592*weight;
		
	cout << endl << endl << "Very good! Now I will need an estimation of your bodyfat percentage."
	<< endl << "Enter your  bodyfat percentage:  ";
	cin >> bodyfat;
	
	while (bodyfat == NULL){
		cin.clear();
		cin.ignore();
		cout << endl << "Ummm please try again...";
		cin >> bodyfat;
	}
	
	lbm = kg*((100-bodyfat)/100);
		
	bmr = 370+(lbm*21.6);
}

int lifeStyleQuestion()
{
	int temp;
	
cout << endl << endl << "What is your lifestyle like right now?" << endl << "Choose one of the following options: " << endl << endl
	<< "1. Desk job, and Little Formal Exercise" << endl << "2. Light daily activity AND light exercise 1-3 days a week"
	<< endl << "3. Moderately daily Activity & Moderate exercise 3-5 days a week"
	<< endl << "4. Physically demanding lifestyle & Hard exercise 6-7 days a week" 
	<< endl << "5. Athlete in ENDURANCE training or VERY HARD physical job"
	<< endl << endl << "Type in the corresponding number and press enter:  ";	
	
	cin >> temp;
	
	while (temp == NULL or temp <= 0 or temp > 5){
		cin.clear();
		cin.ignore();
		cout << endl << "Ummm please try again...";
		cin >> temp;
	}
	
	return temp;
}
