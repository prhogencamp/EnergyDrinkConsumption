// EnergyDrinkConsumption.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    int customersSurveyed = 16500;
    int energyDrinkers = customersSurveyed * 0.15;
    int citrusDrinkers = energyDrinkers * 0.58;
    //Introducing the survey, then calculating 15% for energyDrinkers variable and 58% for citrus preferred variable. Used integers for approximations.
    cout << "We surveyed 16,500 of our customers and here are the results pertaining to energy drinks:" << endl;
    cout << "Approximate customers purchasing one or more energy drinks per week: " << energyDrinkers << endl;
    cout << "Approximate customers preferring citrus-flavored energy drinks: " << citrusDrinkers<< endl;

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

/*A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed
purchase one or more energy drinks per week.
Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. 
Write a program that displays the following:
•	The approximate number of customers in the survey purchasing one or more energy drinks per week.
•	The approximate number of customers in the survey preferring citrus-flavored energy drinks.
*/
