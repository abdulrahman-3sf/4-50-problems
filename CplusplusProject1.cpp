// #####################################################################################

//                                Abdulrahman Alassaf
//                              github: @abdulrahman-3sf

//             4/50 problem solved in ways that make reading and reuse easy.
//                                  Solved with C++

// #####################################################################################

#pragma warning(disable: 4996)
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
short weekDayOrder(short year, short month, short day) {
	short a = floor((14 - month) / 12);
	short y = year - a;
	short m = month + (12 * a) - 2;

	short d = (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

	return d;
}
string weekDayName(short day) {
	string days[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
	return days[day];
}
void printDayTextFromDate(short year, short month, short day) {
	short weekDay = weekDayOrder(year, month, day);

	cout << "Date     : " << day << '/' << month << '/' << year << endl;
	cout << "Day Order: " << weekDay << endl;
	cout << "Day Name : " << weekDayName(weekDay);
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
// short weekDayOrder(short year, short month, short day)
string monthName(short month) {
	string months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	return months[month];
}
void printMonthCalendar(short year, short month) {
	short startDay = weekDayOrder(year, month, 1);
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
//          Date from bay Order In a Year
// ################################################
// short numberOfDaysInMonthBEST(short year, short month)
struct stDate {
	short year;
	short month;
	short day;
};
stDate specificDateFromDateOrderInYear(short daysOrdershort, short year) {
	stDate date;
	short remainingDays = daysOrdershort;
	short monthDays = 0;
	date.year = year;
	date.month = 1;

	while (true) {
		monthDays = numberOfDaysInMonthBEST(year, date.month);
		if (remainingDays > monthDays) {
			remainingDays -= monthDays;
			date.month++;

			if (date.month > 12) {
				date.year++;
				date.month = 1;
			}
		}
		else {
			date.day = remainingDays;
			break;
		}
	}

	return date;
}

// TO USE IT RUN THIS IN MAIN
// short year = readNumber("year: ");
// short month = readNumber("month: ");
// short days = readNumber("days: ");
// short daysOrderd = daysFromDayOneToSpecificDateinYear(year, month, days);
// stDate dateOrderd = specificDateFromDateOrderInYear(daysOrderd, year);
// cout << daysOrderd << endl;
// cout << dateOrderd.day << '/' << dateOrderd.month << '/' << dateOrderd.year;
// #####################################################################################

// #####################################################################################
// ################################################
//          Add Days to Date
// ################################################
// struct stDate
stDate readDate() {
	stDate date;

	cout << "Year: ";
	cin >> date.year;

	cout << "Month: ";
	cin >> date.month;

	cout << "Days: ";
	cin >> date.day;

	return date;
}
// short daysFromDayOneToSpecificDateinYear(short year, short month, short days)
// stDate specificDateFromDateOrderInYear(short daysOrdershort, short year)
stDate addDaysToDate(stDate date, short daysToAdd) {
	short dateInDaysOrder = daysFromDayOneToSpecificDateinYear(date.year, date.month, date.day);
	short totalDays = dateInDaysOrder + daysToAdd;

	return specificDateFromDateOrderInYear(totalDays, date.year);
}

// TO USE IT RUN THIS IN MAIN
// short year = readNumber("year: ");
// short month = readNumber("month: ");
// short days = readNumber("days: ");
// short daysToAdd = readNumber("days to add: ");
// stDate date = addDaysToDate(year, month, days, daysToAdd);
// cout << date.day << '/' << date.month << '/' << date.year;
// #####################################################################################

// #####################################################################################
// ################################################
//          Date1 Greater than Date2
// ################################################
// struct stDate
// stDate readDate()
bool date1LessThanDate2(stDate date1, stDate date2) {

	return (date1.year < date2.year) ? true : ((date1.year == date2.year) ? (date1.month < date2.month ? true : (date1.month == date2.month ? date1.day < date2.day : false)) : false);

	/*short date1Days = daysFromDayOneToSpecificDateinYear(date1.year, date1.month, date1.day);
	short date2Days = daysFromDayOneToSpecificDateinYear(date2.year, date2.month, date2.day);
	return date1Days > date2Days;*/
}

// TO USE IT RUN THIS IN MAIN
// stDate date1 = readDate();
// stDate date2 = readDate();
// cout << date1GreaterThanDate2(date1, date2);
// #####################################################################################

// #####################################################################################
// ################################################
//          Date1 Equal than Date2
// ################################################
// struct stDate
// stDate readDate()
bool date1EqualToDate2(stDate date1, stDate date2) {
	return (date1.year == date2.year) ? ((date1.month == date1.month) ? (date1.day == date2.day) : false) : false;
	// return (date1.year == date2.year && date1.month == date1.month && date1.day == date2.day);
}

// TO USE IT RUN THIS IN MAIN
// // stDate date1 = readDate();
// stDate date2 = readDate();
// cout << date1EqualToDate2(date1, date2);
// #####################################################################################

// #####################################################################################
// ################################################
//          Last Day, Last Month
// ################################################
// struct stDate
// stDate readDate()
// short numberOfDaysInMonthBEST(short year, short month)
bool lastMonthInYear(short month) {
	return month == 12;
}
bool lastDayInMonth(stDate date) {
	return date.day == numberOfDaysInMonthBEST(date.year, date.month);
}

// TO USE IT RUN THIS IN MAIN
// stDate date = readDate();
// cout << lastMonthInYear(date.month) << endl;
// cout << lastDayInMonth(date) << endl;
// #####################################################################################

// #####################################################################################
// ################################################
//          Increase Date By One Day
// ################################################
// struct stDate
// stDate readDate()
// short numberOfDaysInMonthBEST(short year, short month)
// bool lastMonthInYear(short month)
// bool lastDayInMonth(stDate date)
stDate increaseDateByOneDay(stDate date) {
	if (lastDayInMonth(date)) {
		if (lastMonthInYear(date.month)) {
			date.year++;
			date.month = 1;
			date.day = 1;
		}
		else {
			date.month++;
			date.day = 1;
		}
	} 
	else {
		date.day++;
	}
	return date;
}

// TO USE IT RUN THIS IN MAIN
// stDate date = readDate();
// date = increaseDateByOneDay(date);
// cout << date.day << " " << date.month << " " << date.year << endl;
// #####################################################################################

// #####################################################################################
// ################################################
//          Diff in Days
// ################################################
// struct stDate
// stDate readDate()
// short daysFromDayOneToSpecificDateinYear(short year, short month, short days)
void swapDates(stDate& date1, stDate& date2) {
	stDate temp;
	
	temp.year = date1.year;
	temp.month = date1.month;
	temp.day = date1.day;

	date1.year = date2.year;
	date1.month = date2.month;
	date1.day = date2.day;

	date2.year = temp.year;
	date2.month = temp.month;
	date2.day = temp.day;
}
short diffBetweenTwoDates(stDate date1, stDate date2, bool endDayIncluded=false) {
	int days = 0;
	short swapFlagValue = 1;

	if (!date1LessThanDate2(date1, date2)) {
		swapFlagValue = -1;
		swapDates(date1, date2);
	}

	while (date1LessThanDate2(date1, date2)) {
		days++;
		date1 = increaseDateByOneDay(date1);
	}
	return endDayIncluded ? ++days * swapFlagValue : days * swapFlagValue;
}

// TO USE IT RUN THIS IN MAIN
// stDate date = readDate();
// stDate date2 = readDate();
// cout << diffBetweenTwoDates(date, date2) << endl;
// #####################################################################################

// #####################################################################################
// ################################################
//          Age in Days
// ################################################
// struct stDate
// stDate readDate()
// short diffBetweenTwoDates(stDate date1, stDate date2, bool endDayIncluded=false)
stDate systemDate() {
	stDate date;

	time_t t = time(0);
	tm* now = localtime(&t);

	date.year = now->tm_year + 1900;
	date.month = now->tm_mon + 1;
	date.day = now->tm_mday;

	return date;
}
int ageInDays(stDate age, stDate date) {
	return diffBetweenTwoDates(age, date, true);
}

// TO USE IT RUN THIS IN MAIN
// stDate age = readDate();
// stDate date = systemDate();
// cout << ageInDays(age, date);
// #####################################################################################

// #####################################################################################
// ######################################################
//          Increase Date Problems (13 Problem)
// ######################################################
// struct stDate
// stDate readDate()
// stDate increaseDateByOneDay(stDate date)
stDate increaseDateByXDays(int x, stDate date) {
	for (int i = 0; i < x; i++) {
		date = increaseDateByOneDay(date);
	}
	return date;
}

// short daysFromDayOneToSpecificDateinYear(short year, short month, short days)
// stDate specificDateFromDateOrderInYear(short daysOrdershort, short year)
stDate increaseDateByOneWeek(stDate date) {
	for (int i = 0; i < 7; i++) {
		date = increaseDateByOneDay(date);
	}
	return date;
}
stDate increaseDateByXWeeks(int x, stDate date) {
	for (int i = 0; i < x; i++) {
		date = increaseDateByOneWeek(date);
	}
	return date;
}

stDate increaseDateByOneMonth(stDate date) {
	if (lastMonthInYear(date.month)) {
		date.month = 1;
		date.year++;
	}
	else {
		date.month++;
	}
	
	short monthDays = numberOfDaysInMonthBEST(date.year, date.month);
	if (date.day > monthDays)
		date.day = monthDays;
	
	return date;
}
stDate increaseDateByXMonth(int x, stDate date) {
	for (int i = 0; i < x; i++) {
		date = increaseDateByOneMonth(date);
	}
	return date;
}

stDate increaseDateByOneYear(stDate date) {
	date.year++;
	return date;
}
stDate increaseDateByXYear(int x, stDate date) {
	for (int i = 0; i < x; i++) {
		date = increaseDateByOneYear(date);
	}
	return date;
}
stDate increaseDateByXYearFASTER(int x, stDate date) {
	date.year += x;
	return date;
}

stDate increaseDateByOneDecade(stDate date) {
	date.year += 10;
	return date;
}
stDate increaseDateByXDecade(int x, stDate date) {
	for (int i = 0; i < x; i++) {
		date = increaseDateByOneDecade(date);
	}
	return date;
}
stDate increaseDateByXDecadeFASTER(int x, stDate date) {
	date.year += (x * 10);
	return date;
}

stDate increaseDateByOneCentury(stDate date) {
	date.year += 100;
	return date;
}
stDate increaseDateByOneMillennium(stDate date) {
	date.year += 1000;
	return date;
}

// #####################################################################################

// #####################################################################################
// ######################################################
//          Decrease Date Problems (14 Problem)
// ######################################################
stDate DecreaseDateByOneDay(stDate date) {
	if (date.day == 1) {
		if (date.month == 1) {
			date.year--;
			date.month = 12;
			date.day = 31;
		}
		else {
			date.month--;
			date.day = numberOfDaysInMonthBEST(date.year, date.month);
		}
	}
	else {
		date.day--;
	}
	return date;
}
stDate DecreaseDateByXDays(int x, stDate date) {
	for (int i = 0; i < x; i++) {
		date = DecreaseDateByOneDay(date);
	}
	return date;
}

stDate DecreaseDateByOneWeek(stDate date) {
	for (int i = 0; i < 7; i++) {
		date = DecreaseDateByOneDay(date);
	}
	return date;
}
stDate DecreaseDateByXWeeks(int x, stDate date) {
	for (int i = 0; i < x; i++) {
		date = DecreaseDateByOneWeek(date);
	}
	return date;
}

stDate DecreaseDateByOneMonth(stDate date) {
	if (date.month == 1) {
		date.month = 12;
		date.year--;
	}
	else {
		date.month--;
	}

	short monthDays = numberOfDaysInMonthBEST(date.year, date.month);
	if (date.day > monthDays)
		date.day = monthDays;

	return date;
}
stDate DecreaseDateByXMonth(int x, stDate date) {
	for (int i = 0; i < x; i++) {
		date = DecreaseDateByOneMonth(date);
	}
	return date;
}

stDate DecreaseDateByOneYear(stDate date) {
	date.year--;
	return date;
}
stDate DecreaseDateByXYear(int x, stDate date) {
	for (int i = 0; i < x; i++) {
		date = DecreaseDateByOneYear(date);
	}
	return date;
}
stDate DecreaseDateByXYearFASTER(int x, stDate date) {
	date.year -= x;
	return date;
}

stDate DecreaseDateByOneDecade(stDate date) {
	date.year -= 10;
	return date;
}
stDate DecreaseDateByXDecade(int x, stDate date) {
	for (int i = 0; i < x; i++) {
		date = DecreaseDateByOneDecade(date);
	}
	return date;
}
stDate DecreaseDateByXDecadeFASTER(int x, stDate date) {
	date.year -= (x * 10);
	return date;
}

stDate DecreaseDateByOneCentury(stDate date) {
	date.year -= 100;
	return date;
}
stDate DecreaseDateByOneMillennium(stDate date) {
	date.year -= 1000;
	return date;
}

// TO USE IT RUN THIS IN MAIN
// #####################################################################################

// #####################################################################################
// ################################################
//          Date Problems (7 Problem)
// ################################################
short weekDayOrder(stDate date) {
	return weekDayOrder(date.year, date.month, date.day);
}
// string weekDayName(short day)

void printTodayDate(stDate date) {
	short weekDay = weekDayOrder(date);
	cout << "Today is " << weekDayName(weekDay) << ", " << date.day << '/' << date.month << '/' << date.year << endl;
}

bool isEndOfWeek(stDate date) {
	return weekDayOrder(date) == 6;
}
bool isWeekEnd(stDate date) {
	short weekDay = weekDayOrder(date);
	return weekDay == 5 || weekDay == 6;
	//short weekDay = weekDayOrder(date);
	//if (weekDay == 5 || weekDay == 6)
	//	return true;
	//return false;
}
bool isBusinessDay(stDate date) {
	return (!isWeekEnd(date));

	//short weekDay = weekDayOrder(date);
	//return weekDay != 5 && weekDay != 6;

	//short weekDay = weekDayOrder(date);
	//if (weekDay != 5 && weekDay != 6)
	//	return true;
	//return false;
}

short daysUntilTheEndOfWeek(stDate date) {
	return 6 - weekDayOrder(date);
	//short weekDay = weekDayOrder(date);
	//return 6 - weekDay;
}
short daysUntilTheEndOfMonth(stDate date) {
	short monthDays = numberOfDaysInMonthBEST(date.year, date.month);
	return monthDays - date.day + 1;
}
short daysUntilTheEndOfYear(stDate date) {
	short currentDate = daysFromDayOneToSpecificDateinYear(date.year, date.month, date.day);
	short endDate = daysFromDayOneToSpecificDateinYear(date.year, 12, 31);

	return endDate - currentDate + 1;
}

// TO USE IT RUN THIS IN MAIN
// stDate date = readDate();
// printTodayDate(date);
// cout << isEndOfWeek(date) << endl;
// cout << isWeekEnd(date) << endl;
// cout << isBusinessDay(date) << endl;
// cout << daysUntilTheEndOfWeek(date) << endl;
// cout << daysUntilTheEndOfMonth(date) << endl;
// cout << daysUntilTheEndOfYear(date) << endl;
// #####################################################################################

// #####################################################################################
// ################################################
//          Calculate Vacation Days
// ################################################
short calculateVacationDays(stDate startDate, stDate endDate) {
	short daysCount = 0;
	while (date1LessThanDate2(startDate, endDate)) {
		if (isBusinessDay(startDate))
			daysCount++;
		startDate = increaseDateByOneDay(startDate);
	}
	return daysCount;
	/*short weekEndsDays = 0;
	short totalDays = diffBetweenTwoDates(startDate, endDate, true);

	while (date1LessThanDate2(startDate, endDate)) {
		if (isWeekEnd(startDate))
			weekEndsDays++;
		startDate = increaseDateByOneDay(startDate);
	}
	if (isWeekEnd(startDate))
		weekEndsDays++;

	return totalDays - weekEndsDays;*/
}

// TO USE IT RUN THIS IN MAIN
// #####################################################################################

// #####################################################################################
// ################################################
//       Calculate Vacation Return Date   
// ################################################
stDate calculateVacationReturnDate(stDate startDate, short vacationDays) {
	short daysCount = 0;

	while (daysCount != vacationDays) {
		if (isBusinessDay(startDate)) {
			daysCount++;
		}
		startDate = increaseDateByOneDay(startDate);
	}

	return startDate;
}

// TO USE IT RUN THIS IN MAIN
// stDate startDate = readDate();
// short vacationDays = readNumber("Enter Days Vacations: ");
// stDate endDate = calculateVacationReturnDate(startDate, vacationDays);
// cout << endDate.day << '/' << endDate.month << '/' << endDate.year;
// #####################################################################################

// #####################################################################################
// ################################################
//          Is Date1 After Date2
// ################################################
bool isDate1AfterDate2(stDate date1, stDate date2) {
	return (!date1LessThanDate2(date1, date2)) && (!date1EqualToDate2(date1, date2));
	// return (date1.year > date2.year) ? true : ((date1.year == date2.year) ? ((date1.month > date2.month) ? (date1.day > date2.day) : (false)) : (false));
}

// TO USE IT RUN THIS IN MAIN
// stDate date = readDate();
// stDate date2 = readDate();
// cout << isDate1AfterDate2(date, date2);
// #####################################################################################

// #####################################################################################
// ################################################
//          Compare Date Function
// ################################################
short compareDate(stDate date, stDate date2) {
	return (date1LessThanDate2(date, date2) ? -1 : date1EqualToDate2(date, date2) ? 0 : 1);
}

// TO USE IT RUN THIS IN MAIN
// stDate date = readDate();
// stDate date2 = readDate();
// cout << compareDate(date, date2);
// #####################################################################################

// #####################################################################################
// ################################################
//          Is Overlap Periods
// ################################################
struct stPeriod {
	stDate startDate;
	stDate endDate;
};
stPeriod readPeriod() {
	stPeriod peroid;

	cout << "Peroid One: " << endl;
	peroid.startDate = readDate();

	cout << "Peroid Two: " << endl;
	peroid.endDate = readDate();

	return peroid;
}
bool isOverLapPeriods(stPeriod peroid1, stPeriod peroid2) {
	if (compareDate(peroid1.endDate, peroid2.startDate) == -1 || compareDate(peroid2.endDate, peroid1.startDate) == -1)
		return false;
	return true;
}

// TO USE IT RUN THIS IN MAIN
// stPeroid peroidOne = readPeroid();
// stPeroid peroidTwo = readPeroid();
// cout << isOverLapPeriods(peroidOne, peroidTwo);
// #####################################################################################

// #####################################################################################
// ################################################
//         Period Length In bays 
// ################################################
// short diffBetweenTwoDates(stDate date1, stDate date2, bool endDayIncluded=false)

// TO USE IT RUN THIS IN MAIN
// #####################################################################################

// #####################################################################################
// ################################################
//          Is Date In Period
// ################################################
bool isDateInPeriod(stDate date, stPeriod period) {
	if (!date1LessThanDate2(date, period.startDate) && !isDate1AfterDate2(date, period.endDate))
		return true;
	return false;
}

// TO USE IT RUN THIS IN MAIN
// stPeriod periodOne = readPeriod();
// stDate date = readDate();
// cout << isDateInPeriod(date, periodOne);
// #####################################################################################

// #####################################################################################
// ################################################
//          Count Overlap Days
// ################################################
short countOverlapDays(stPeriod period1, stPeriod period2) {
	short days = 0;
	if (isOverLapPeriods(period1, period2)) {
		while (compareDate(period2.startDate, period1.endDate) != 0) {
			days++;
			period2.startDate = increaseDateByOneDay(period2.startDate);
		}
	}
	return days;
}

// TO USE IT RUN THIS IN MAIN
// stPeriod period1 = readPeriod();
// stPeriod period2 = readPeriod();
// cout << endl << countOverlapDays(period1, period2);
// #####################################################################################

// #####################################################################################
// ################################################
//          Validate Date
// ################################################
bool validateDate(stDate date) {
	if (date.year < 0)
		return false;
	
	if (date.month < 1 || 12 < date.month)
		return false;

	if (date.day < 1 || numberOfDaysInMonthBEST(date.year, date.month) < date.day)
		return false;

	return true;
}

// TO USE IT RUN THIS IN MAIN
// stDate date = readDate();
// cout << endl << validateDate(date);
// #####################################################################################

// #####################################################################################
// ################################################
//          Read/Print Date String
// ################################################
vector<string> splitString(string text, string deli=" ") {
	vector<string> vText;
	int pos = 0;
	string newText = "";

	while ((pos = text.find('/')) != string::npos) {
		newText = text.substr(0, pos);
		if (newText != "")
			vText.push_back(newText);
		text.erase(0, pos + 1);
	}
	if (newText != "")
		vText.push_back(text);

	return vText;
}
stDate convertStringToDate(string stringDate) {
	stDate date;
	vector<string> splitedDate = splitString(stringDate, "/");

	date.day = stoi(splitedDate[0]);
	date.month = stoi(splitedDate[1]);
	date.year = stoi(splitedDate[2]);

	return date;
}
string convertDateToString(stDate date) {
	string stringDate = to_string(date.day) + '/' + to_string(date.month) + '/' + to_string(date.year);
	return stringDate;
}

// TO USE IT RUN THIS IN MAIN
// string stringDate = "31/3/2022";
// stDate date = convertStringToDate(stringDate);
// cout << date.day << " " << date.month << " " << date.year << endl;
// cout << convertDateToString(date);
// #####################################################################################

// #####################################################################################
// ###############################################################################
//          Format Date (use replaceWordInString to git the most of it)
// ###############################################################################
// Bad Way :|
string formatDate(stDate date, string format = "dd/mm/yyyy") {
	if (format == "dd/mm/yyyy")
		return to_string(date.day) + '/' + to_string(date.month) + '/' + to_string(date.year);
	else if (format == "yyyy/dd/mm")
		return to_string(date.year) + '/' + to_string(date.day) + '/' + to_string(date.month);
	else if (format == "mm/dd/yyyy")
		return to_string(date.month) + '/' + to_string(date.day) + '/' + to_string(date.year);
	else if (format == "mm-dd-yyyy")
		return to_string(date.month) + '-' + to_string(date.day) + '-' + to_string(date.year);
	else if (format == "dd-mm-yyyy")
		return to_string(date.day) + '-' + to_string(date.month) + '-' + to_string(date.year);
	else
		return "Day: " + to_string(date.day) + ", Month: " + to_string(date.month) + ", Year: " + to_string(date.year);
}

// TO USE IT RUN THIS IN MAIN
// string stringDate = "31/3/2022";
// stDate date = convertStringToDate(stringDate);
// cout << formatDate(date, "daff");
// #####################################################################################

int main() {
	// Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	
	return 0;
}