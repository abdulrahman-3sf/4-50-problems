// #####################################################################################

//                                Abdulrahman Alassaf
//                              github: @abdulrahman-3sf

//             4/50 problem solved in ways that make reading and reuse easy.
//                                  Solved with C++

// #####################################################################################

#include <iostream>      // For cin, cout
#include <string>        // For string
#include <vector>        // For vector
#include <cstdlib>       // For random number
#include <iomanip>       // For setw
#include <fstream>       // For files
#include <cmath>         // For math
using namespace std;

short readNumber(string msg="Enter a number: ") {
	short number;

	cout << msg;
	cin >> number;

	return number;
}

// #####################################################################################
// ################################################
//          Number to Text
// ################################################
int readIntNumber() {
	int number;

	cout << "Enter a number: ";
	cin >> number;

	return number;
}
string numberToText(int number) {
	if (number == 0) {
		return "";
	}
	if (1 <= number && number <= 19) {
		string arr[] = { "",
			"One","Two","Three","Four","Five","Six","Seven",
			"Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen",
			"Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"
		};
		return arr[number] + " ";
	}
	if (20 <= number && number <= 99) {
		string arr[] = { "","",
			"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"
		};
		return arr[number / 10] + " " + numberToText(number % 10);
	}
	if (100 <= number && number <= 199) {
		return "One Hundred " + numberToText(number % 100);
	}
	if (200 <= number && number <= 999) {
		return numberToText(number / 100) + "Hundreds " + numberToText(number % 100);
	}
	if (1000 <= number && number <= 1999) {
		return "One Thousand " + numberToText(number % 1000);
	}
	if (2000 <= number && number <= 999999) {
		return numberToText(number / 1000) + "Thousands " + numberToText(number % 1000);
	}
	if (1000000 <= number && number <= 1999999) {
		return "One Million " + numberToText(number % 1000000);
	}
	if (2000000 <= number && number <= 999999999) {
		return numberToText(number / 1000000) + "Millons " + numberToText(number % 1000000);
	}
	if (1000000000 <= number && number <= 1999999999) {
		return "One Billion " + numberToText(number % 1000000000);
	}
	else {
		return numberToText(number / 1000000000) + "Billions " + numberToText(number % 1000000000);
	}

}

// TO USE IT RUN THIS IN MAIN
// int number = readIntNumber();
// cout << numberToText(number);
// #####################################################################################

// #####################################################################################
// ################################################
//          Leap Year
// ################################################
// short readNumber()
bool isLeapYear(short year) {

	// leap year if perfectly divisible by 400
	if (year % 400 == 0)
		return true;

	// not a leap year if divisible by 100
	// but not divisible by 400
	else if (year % 100 == 0)
		return false;

	// leap year if not divisible by 100
	// but divisible by 4
	else if (year % 4 == 0)
		return true;

	// all other years are not leap
	else
		return false;
}

// TO USE IT RUN THIS IN MAIN
// cout << isLeapYear(readNumber("Enter a year: "));
// #####################################################################################

// #####################################################################################
// ################################################
//          Leap Year (One Line Of Code)
// ################################################
// short readNumber()
bool isLeapYearInOneLine(short year) {
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	// return (year % 400 == 0) ? true : ((year % 100 == 0) ? false : ((year % 4 == 0) ? true : false));
}

// TO USE IT RUN THIS IN MAIN
// cout << isLeapYearInOneLine(readNumber("Enter a year: "));
// #####################################################################################

// #####################################################################################
// ##############################################################
//      Number of Days-Hours-Minutes-Seconds In a Year
// ##############################################################
// short readNumber()
// bool isLeapYear(short year)
short numberOfDaysInYear(short year) {
	return (isLeapYear(year)) ? 366 : 355;
}
short numberOfHoursInYear(short year) {
	return numberOfDaysInYear(year) * 24;
}
int numberOfMinutesInYear(short year) {
	return numberOfHoursInYear(year) * 60;
}
int numberOfSecondsInYear(short year) {
	return numberOfMinutesInYear(year) * 60;
}
void printYearInAllUnits(short year) {
	cout << "Number of Days    in Year [" << year << "] is " << numberOfDaysInYear(year) << endl;
	cout << "Number of Hours   in Year [" << year << "] is " << numberOfHoursInYear(year) << endl;
	cout << "Number of Minutes in Year [" << year << "] is " << numberOfMinutesInYear(year) << endl;
	cout << "Number of Seconds in Year [" << year << "] is " << numberOfSecondsInYear(year) << endl;
}

// TO USE IT RUN THIS IN MAIN
// short year = readNumber("Enter a year: ");
// printYearInAllUnits(year);
// #####################################################################################

// #####################################################################################
// ##############################################################
//          Number of Days-Hours-Minutes-Seconds In a Year
// ##############################################################
// short readNumber()
// bool isLeapYear(short year)
short readMonth() {
	short month;

	cout << "Enter a month: ";
	cin >> month;

	return month;
}
short numberOfDaysInMonth(short year, short month) {
	if (month < 1 || month > 12)
		return 0;

	if (month == 2)
		return (isLeapYear(year) ? 29 : 28);

	short arr31Days[7] = {1, 3, 5, 7, 8, 10, 12};

	for (short i = 0; i < 7; i++) {
		if (arr31Days[i] == month)
			return 31;
	}
	
	return 30;
}
short numberOfHoursInMonth(short year, short month) {
	return numberOfDaysInMonth(year, month) * 24;
}
int numberOfMinutesInMonth(short year, short month) {
	return numberOfHoursInMonth(year, month) * 60;
}
int numberOfSecondsInMonth(short year, short month) {
	return numberOfMinutesInMonth(year, month) * 60;
}
void printMonthInAllUnits(short year, short month) {
	cout << "Number of Days    in Month [" << month << "] is " << numberOfDaysInMonth(year, month) << endl;
	cout << "Number of Hours   in Month [" << month << "] is " << numberOfHoursInMonth(year, month) << endl;
	cout << "Number of Minutes in Month [" << month << "] is " << numberOfMinutesInMonth(year, month) << endl;
	cout << "Number of Seconds in Month [" << month << "] is " << numberOfSecondsInMonth(year, month) << endl;
}

// TO USE IT RUN THIS IN MAIN
// short year = readNumber("Enter a year: ");
// short month = readNumber("Enter a month: ");
// printMonthInAllUnits(year, month);
// #####################################################################################

// #####################################################################################
// ##############################################################
//          Number of Days in a Month (short logic)
// ##############################################################
// short readNumber()
// bool isLeapYear(short year)
short numberOfDaysInMonthBEST(short year, short month) {
	if (month < 1 || month > 12)
		return 0;

	short numberOfDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	return (month == 2) ? (isLeapYear(year) ? 29 : 28) : numberOfDays[month - 1];
}

// TO USE IT RUN THIS IN MAIN
// short year = readNumber("Enter a year: ");
// short month = readNumber("Enter a month: ");
// cout << numberOfDaysInMonthBEST(year, month);
// #####################################################################################

// #####################################################################################
// ################################################
//          Day Name
// ################################################
// short readNumber()
short weakDayOrder(short year, short month, short day) {
	short a = floor((14 - month) / 12);
	short y = year - a;
	short m = month + (12 * a) - 2;

	short d = (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

	return d;
}
string weakDayName(short day) {
	string days[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
	return days[day];
}
void printDayTextFromDate(short year, short month, short day) {
	short weakDay = weakDayOrder(year, month, day);

	cout << "Date     : " << day << '/' << month << '/' << year << endl;
	cout << "Day Order: " << weakDay << endl;
	cout << "Day Name : " << weakDayName(weakDay);
}

// TO USE IT RUN THIS IN MAIN
// short year = readNumber("Enter year: ");
// short month = readNumber("Enter month: ");
// short day = readNumber("Enter day: ");
// printDayTextFromDate(year, month, day);
// #####################################################################################

// #####################################################################################
// ################################################
//          Month Calendar
// ################################################
// short readNumber()
// bool isLeapYear(short year)
// short numberOfDaysInMonthBEST(short year, short month)
// short weakDayOrder(short year, short month, short day)
string monthName(short month) {
	string months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	return months[month];
}
void printMonthCalendar(short year, short month) {
	short startDay = weakDayOrder(year, month, 1);
	short numberOfDays = numberOfDaysInMonthBEST(year, month);
	short counter = 1, continueTheCount = startDay;

	cout << "\n  _______________" << monthName(month - 1) << "_______________" << endl << endl;
	cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;

	short i;
	for (i = 0; i < startDay; i++)
		cout << setw(5) << " ";
	for (int j = 1; j <= numberOfDays; j++) {
		printf("%5d", j);
		i++;

		if (i == 7) {
			i = 0;
			cout << endl;
		}
	}

	cout << "\n  _________________________________" << endl;

	//for (short i = 0; i < 6; i++) {
	//	if (counter > numberOfDays)
	//		break;
	//	for (short j = 0; j < 7; j++) {
	//		if (counter > numberOfDays)
	//			break;
	//		if (continueTheCount == j) {
	//			cout << setw(5) << counter;
	//			counter++;
	//			continueTheCount++;
	//		}
	//		else {
	//			cout << setw(5) << " ";
	//		}
	//	}
	//	cout << endl;
	//	continueTheCount = 0;
	//}
}

// TO USE IT RUN THIS IN MAIN
// short year = readNumber();
// short month = readNumber();
// printMonthCalendar(year, month);
// #####################################################################################

// #####################################################################################
// ################################################
//          year Calendar
// ################################################
// void printMonthCalendar(short year, short month)
void printYearCalendar(short year) {
	cout << "\n  _________________________________" << endl << endl;
	cout << "           Calendar " << year;
	cout << "\n  _________________________________" << endl << endl;

	for (short i = 1; i <= 12; i++) {
		printMonthCalendar(year, i);
	}
}

// TO USE IT RUN THIS IN MAIN
// short year = readNumber();
// printYearCalendar(year);
// #####################################################################################

// #####################################################################################
// ################################################
//          Days from the beginning of Year
// ################################################
// short numberOfDaysInMonthBEST(short year, short month)
short daysFromDayOneToSpecificDateinYear(short year, short month, short days) {
	short totalDays = 0;
	for (int i = 1; i < month; i++) {
		totalDays += numberOfDaysInMonthBEST(year, i);
	}
	totalDays += days;

	return totalDays;
}

// TO USE IT RUN THIS IN MAIN
// short year = readNumber();
// short month = readNumber();
// short days = readNumber();
// cout << daysFromDayOneToSpecificDateinYear(year, month, days);
// #####################################################################################

// #####################################################################################
// ################################################
//          
// ################################################


// TO USE IT RUN THIS IN MAIN
// #####################################################################################

int main() {
	// Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	

	return 0;
}