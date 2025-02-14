// #####################################################################################

//                                Abdulrahman Alassaf
//                              github: @abdulrahman-3sf

//             3/50 problem solved in ways that make reading and reuse easy.
//                                  Solved with C++

// #####################################################################################

#include <iostream>      // For cin, cout
#include <string>        // For string
#include <vector>        // For vector
#include <cstdlib>       // For random number
#include <iomanip>       // For setw
#include <fstream>       // For files
using namespace std;

// Commnly Use
int randomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

void fill3x3MatrixWithNumbersFromTo(int matrix[3][3], int from, int to) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			matrix[i][j] = randomNumber(from, to);
		}
	}
}

// #####################################################################################
// ################################################
//          3x3 Random Matrix
// ################################################
// int randomNumber(int from, int to)
void fill3x3MatrixWithRandomNumbers(int matrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			matrix[i][j] = randomNumber(1, 100);
		}
	}
}
void printMatrix(int matrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf(" %02d  ", matrix[i][j]);
		}
		cout << endl;
	}
}

// TO USE IT RUN THIS IN MAIN
// int martix[3][3];
// fill3x3MatrixWithRandomNumbers(martix);
// printMatrix(martix);
// #####################################################################################

// #####################################################################################
// ################################################
//          Sum Each Row in Matrix
// ################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithRandomNumbers(int matrix[3][3])
int rowSum(int matrix[3][3], short rowNumber) {
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += matrix[rowNumber][i];
	}
	return sum;
}
void printTheSumOfTheRows(int matrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		cout << "Sum of the " << i + 1 << " row: " << rowSum(matrix, i) << endl;
	}
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix[3][3];
// fill3x3MatrixWithRandomNumbers(matrix);
// printMatrix(matrix);
// printTheSumOfTheRows(matrix);
// #####################################################################################

// #####################################################################################
// ################################################
//          Sum Each Row in Matrix in Array
// ################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithRandomNumbers(int matrix[3][3])
// int rowSum(int matrix[3][3], short rowNumber)
void sumMatrixRowsInArray(int matrix[3][3], int sumMatrix[3]) {
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sumMatrix[i] = rowSum(matrix, i);
	}
}
void printTheSumOfTheRows(int sumMatrix[3]) {
	for (int i = 0; i < 3; i++) {
		cout << "Sum of the " << i + 1 << " row: " << sumMatrix[i] << endl;
	}
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix[3][3];
// int sumMatrix[3];
// fill3x3MatrixWithRandomNumbers(matrix);
// printMatrix(matrix);
// sumMatrixRowsInArray(matrix, sumMatrix);
// printTheSumOfTheRows(sumMatrix);
// #####################################################################################

// #####################################################################################
// ################################################
//          Sum Each Col in Matrix
// ################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithRandomNumbers(int matrix[3][3])
int sumCol(int matrix[3][3], short col) {
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += matrix[i][col];
	}
	return sum;
}
void printTheSumOfTheCol(int matrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		cout << "The sum of the " << i + 1 << " col: " << sumCol(matrix, i) << endl;
	}
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix[3][3];
// fill3x3MatrixWithRandomNumbers(matrix);
// printMatrix(matrix);
// printTheSumOfTheCol(matrix);
// #####################################################################################

// #####################################################################################
// ###################################################################
//          Sum Each Col in Matrix In Another Array
// ###################################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithRandomNumbers(int matrix[3][3])
// int sumCol(int matrix[3][3], short col)
void sumMatrixClosInArray(int matrix[3][3], int sumMatrix[3]) {
	for (int i = 0; i < 3; i++) {
		sumMatrix[i] = sumCol(matrix, i);
	}
}
void printTheSumOfTheCol(int sumMatrix[3]) {
	for (int i = 0; i < 3; i++) {
		cout << "The sum of the " << i + 1 << " col: " << sumMatrix[i] << endl;
	}
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix[3][3];
// int sumMatrix[3];
// fill3x3MatrixWithRandomNumbers(matrix);
// printMatrix(matrix);
// sumMatrixClosInArray(matrix, sumMatrix);
// printTheSumOfTheCol(sumMatrix);
// #####################################################################################

// #####################################################################################
// ################################################
//          3x3 Ordered Matrix
// ################################################
void fill3x3MatrixWithOrderedNumbers(int matrix[3][3]) {
	int orderdNumber = 1;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			matrix[i][j] = orderdNumber;
			orderdNumber++;
		}
	}
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix[3][3];
// fill3x3MatrixWithOrderedNumbers(matrix);
// printMatrix(matrix);
// #####################################################################################

// #####################################################################################
// ################################################
//          Transpose Matrix
// ################################################
// void fill3x3MatrixWithOrderedNumbers(int matrix[3][3])
void transposeMatrix(int matrix[3][3], int tMatrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			tMatrix[i][j] = matrix[j][i];
		}
	}
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix[3][3];
// int tMatrix[3][3];
// fill3x3MatrixWithOrderedNumbers(matrix);
// printMatrix(matrix);
// transposeMatrix(matrix, tMatrix);
// printMatrix(tMatrix);
// #####################################################################################

// #####################################################################################
// ################################################
//          Multiply Two Matrices
// ################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithNumbersFromTo(int matrix[3][3], int from, int to)
void multiplyTwoMatrix(int matrix[3][3], int matrix2[3][3], int multiplyedMatrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			multiplyedMatrix[i][j] = matrix[i][j] * matrix2[i][j];
		}
	}
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix[3][3];
// int matrix2[3][3];
// int multiplyedMatrix[3][3];
//
// fill3x3MatrixWithNumbersFromTO(matrix, 1, 10);
// fill3x3MatrixWithNumbersFromTO(matrix2, 1, 10);
// multiplyTwoMatrix(matrix, matrix2, multiplyedMatrix);
//
// printMatrix(matrix);
// cout << endl;
// printMatrix(matrix2);
// cout << endl;
// printMatrix(multiplyedMatrix);
// #####################################################################################

// #####################################################################################
// ############################################################
//          Print Middle Row and Col of Matrix
// ############################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithNumbersFromTo(int matrix[3][3], int from, int to)
void printMiddleRow(int matrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		cout << matrix[1][i] << " ";
	}
}
void printMiddleCol(int matrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		cout << matrix[i][1] << " ";
	}
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix[3][3];
// fill3x3MatrixWithNumbersFromTO(matrix, 1, 10);
// printMatrix(matrix);
// cout << endl;
// printMiddleRow(matrix);
// cout << endl;
// printMiddleCol(matrix);
// #####################################################################################

// #####################################################################################
// ################################################
//          Sum of Matrix
// ################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithNumbersFromTo(int matrix[3][3], int from, int to)
int sumOfMatrix(int matrix[3][3]) {
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum += matrix[i][j];
		}
	}
	return sum;
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix[3][3];
// fill3x3MatrixWithNumbersFromTO(matrix, 1, 10);
// printMatrix(matrix);
// cout << "The Sum of Matrix: " << sumOfMatrix(matrix);
// #####################################################################################

// #####################################################################################
// ################################################
//          Equality Matrices Check
// ################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithNumbersFromTo(int matrix[3][3], int from, int to)
// int sumOfMatrix(int matrix[3][3])
bool areTheMatricesEqual(int matrix[3][3], int matrix2[3][3]) {
	int sumMatrix1 = sumOfMatrix(matrix);
	int sumMatrix2 = sumOfMatrix(matrix2);

	return sumMatrix1 == sumMatrix2;
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix1[3][3], matrix2[3][3];
// fill3x3MatrixWithNumbersFromTo(matrix1, 1, 10);
// fill3x3MatrixWithNumbersFromTo(matrix2, 1, 10);
// cout << "Matrix1:\n";
// printMatrix(matrix1);
// cout << "\nMatrix1:\n";
// printMatrix(matrix2);
// cout << "\nThe matrices equals? " << areTheMatricesEqual(matrix1, matrix2);
// #####################################################################################

// #####################################################################################
// ################################################
//          Check Typical Matrices
// ################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithNumbersFromTo(int matrix[3][3], int from, int to)
bool areTheMatricesTypical(int matrix1[3][3], int matrix2[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (matrix1[i][j] != matrix2[i][j])
				return false;
		}
	}
	return true;
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix1[3][3], matrix2[3][3];
// fill3x3MatrixWithNumbersFromTo(matrix1, 1, 10);
// fill3x3MatrixWithNumbersFromTo(matrix2, 1, 10);
// cout << "Matrix1:\n";
// printMatrix(matrix1);
// cout << "\nMatrix1:\n";
// printMatrix(matrix2);
// cout << "\nThe matrices typical? " << areTheMatricesTypical(matrix1, matrix2);
// #####################################################################################

// #####################################################################################
// ################################################
//          Check Identity Matrix
// ################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithNumbersFromTo(int matrix[3][3], int from, int to)
bool isIdentityMatrix(int matrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j && matrix[i][j] != 1)
				return false;
			else if (i != j && matrix[i][j] != 0)
				return false;
		}
	}
	return true;
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix2[3][3] = { {1,0,0}, {0,1,0}, {0,0,1} };
// cout << "Matrix1:\n";
// printMatrix(matrix2);
// cout << "\nIs Identity matrix: " << isIdentityMatrix(matrix2);
// #####################################################################################

// #####################################################################################
// ################################################
//          Check Scalar Matrix
// ################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithNumbersFromTo(int matrix[3][3], int from, int to)
bool isScalarMatrix(int matrix[3][3]) {
	int scalarValue = matrix[0][0];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j && matrix[i][j] != scalarValue)
				return false;
			else if (i != j && matrix[i][j] != 0)
				return false;
		}
	}
	return true;
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix2[3][3] = { {4,0,0}, {0,4,0}, {0,0,4} };
// cout << "Matrix1:\n";
// printMatrix(matrix2);
// cout << "\nIs Scalar matrix: " << isScalarMatrix(matrix2);
// #####################################################################################

// #####################################################################################
// ################################################
//          Count Number in Matrix
// ################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithNumbersFromTo(int matrix[3][3], int from, int to)
int countNumberInMatrix(int matrix[3][3], int number) {
	int counter = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (number == matrix[i][j])
				counter++;
		}
	}
	return counter;
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix1[3][3];
// fill3x3MatrixWithNumbersFromTo(matrix1, 1, 10);
// cout << "Matrix1:\n";
// printMatrix(matrix1);
// int number;
// cout << "\nEnter the number to count in matrix: ";
// cin >> number;
// cout << "\nNumber " << number << " count in matrix is: " << countNumberInMatrix(matrix1, number);
// #####################################################################################

// #####################################################################################
// ################################################
//          Check Sparse Matrix
// ################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithNumbersFromTo(int matrix[3][3], int from, int to)
// int countNumberInMatrix(int matrix[3][3], int number)
bool isSparceMatrix(int matrix[3][3]) {
	int countZeros = countNumberInMatrix(matrix, 0);
	int otherNumbers = 9 - countZeros;

	return countZeros > otherNumbers;
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix1[3][3];
// fill3x3MatrixWithNumbersFromTo(matrix1, 0, 1);
// cout << "Matrix1:\n";
// printMatrix(matrix1);
// cout << "\nIs Sparce matrix: " << isSparceMatrix(matrix1);
// #####################################################################################

// #####################################################################################
// ################################################
//          Number Exists In Matrix
// ################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithNumbersFromTo(int matrix[3][3], int from, int to)
bool findNumberInMatrix(int matrix[3][3], int number) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (number == matrix[i][j])
				return true;
		}
	}
	return false;
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix1[3][3];
// fill3x3MatrixWithNumbersFromTo(matrix1, 0, 10);
// cout << "Matrix1:\n";
// printMatrix(matrix1);
// int number;
// cout << "Enter number to find: ";
// cin >> number;
// cout << "\nIs number exists: " << findNumberInMatrix(matrix1, number);
// #####################################################################################

// #####################################################################################
// ##################################################
//          Intersected Numbers in Matrices
// ##################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithNumbersFromTo(int matrix[3][3], int from, int to)
// bool findNumberInMatrix(int matrix[3][3], int number)
void printIntersectedNumbers(int matrix1[3][3], int matrix2[3][3]) {
	int number;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			number = matrix1[i][j];
			if (findNumberInMatrix(matrix2, number))
				cout << number << "\t";
		}
	}
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix1[3][3], matrix2[3][3];
// fill3x3MatrixWithNumbersFromTo(matrix1, 0, 10);
// fill3x3MatrixWithNumbersFromTo(matrix2, 0, 10);
// cout << "Matrix1:\n";
// printMatrix(matrix1);
// cout << "Matrix2:\n";
// printMatrix(matrix2);
// printIntersectedNumbers(matrix1, matrix2);
// #####################################################################################

// #####################################################################################
// ################################################
//          Min/Max Number in Matrix
// ################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithNumbersFromTo(int matrix[3][3], int from, int to)
int minNumberInMatrix(int matrix[3][3]) {
	int minNumber = matrix[0][0];
	int currentNumber;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			currentNumber = matrix[i][j];
			if (currentNumber < minNumber)
				minNumber = currentNumber;
		}
	}
	return minNumber;
}
int maxNumberInMatrix(int matrix[3][3]) {
	int maxNumber = matrix[0][0];
	int currentNumber;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			currentNumber = matrix[i][j];
			if (currentNumber > maxNumber)
				maxNumber = currentNumber;
		}
	}
	return maxNumber;
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix1[3][3];
// fill3x3MatrixWithNumbersFromTo(matrix1, 0, 10);
// cout << "Matrix1:\n";
// printMatrix(matrix1);
// cout << "Min number: " << minNumberInMatrix(matrix1) << endl;
// cout << "Max number: " << maxNumberInMatrix(matrix1) << endl;
// #####################################################################################

// #####################################################################################
// ################################################
//          Palindrome Matrix
// ################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithNumbersFromTo(int matrix[3][3], int from, int to)
bool isPalindromeMatix(int matrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3/2; j++) {
			if (matrix[i][j] != matrix[i][3 - 1 - j])
				return false;
		}
	}
	return true;
}
// void printMatrix(int matrix[3][3])

// TO USE IT RUN THIS IN MAIN
// int matrix1[3][3] = { {1, 2, 1},{5, 5, 5},{7, 3, 7} };
// cout << "Matrix1:\n";
// printMatrix(matrix1);
// cout << "is palindrome: " << isPalindromeMatix(matrix1) << endl;
// #####################################################################################

// #####################################################################################
// ################################################
//          Fibonacci Series
// ################################################
void printFibonacciUsingLoops(int number) {
	int fibNumber = 0;
	int prev2 = 0, prev1 = 1;

	cout << "1\t";
	for (int i = 2; i <= number; i++) {
		fibNumber = prev2 + prev1;
		cout << fibNumber << "\t";
		prev2 = prev1;
		prev1 = fibNumber;
	}
}

// TO USE IT RUN THIS IN MAIN
// printFibonacciUsingLoops(10);
// #####################################################################################

// #####################################################################################
// ####################################################
//          Fibonacci Series With Recursion
// ####################################################
int FibonacciUsingRecursion(int number) {
	if (number < 2) 
		return number;
	else 
		return FibonacciUsingRecursion(number - 1) + FibonacciUsingRecursion(number - 2); 
}
void printFibonacciUsingRecursion(int number) {
	for (int i = 1; i <= number; i++) {
		cout << FibonacciUsingRecursion(i) << "\t";
	}
}

// TO USE IT RUN THIS IN MAIN
// printFibonacciUsingRecursion(10);
// #####################################################################################

// #####################################################################################
// ################################################
//          Print First Letter of Each Word
// ################################################
string readString() {
	string str;

	cout << "Enter a string: ";
	getline(cin, str);

	return str;
}
void printFirstLetterOfEachStatement(string statement) {
	bool isFirstLetter = true;

	for (int i = 0; i < statement.length(); i++) {
		if (statement[i] != ' ' && isFirstLetter)
			cout << statement[i] << endl;

		isFirstLetter = (statement[i] == ' ' ? true : false);
	}

	//string word = "";
	//for (int i = 0; i < statement.length(); i++) {
	//	if (statement[i] != ' ') {
	//		word += statement[i];
	//	}		
	//	else {
	//		cout << word[0] << endl;
	//		word = "";
	//	}

	//	if (i == statement.length() - 1)
	//		cout << word[0] << endl;
	//}
}

// TO USE IT RUN THIS IN MAIN
// printFirstLetterOfEachStatement(readString());
// #####################################################################################

// #####################################################################################
// ################################################
//          Upper First Letter of Each Word
// ################################################
// string readString()
void upperFirstLetterOfEachWord(string& statement) {
	bool isFirstLetter = true;

	for (int i = 0; i < statement.length(); i++) {
		if (statement[i] != ' ' && isFirstLetter)
			statement[i] = toupper(statement[i]);

		isFirstLetter = (statement[i] == ' ' ? true : false);
	}
}

// TO USE IT RUN THIS IN MAIN
// string str = readString();
// upperFirstLetterOfEachWord(str);
// cout << str;
// #####################################################################################

// #####################################################################################
// ################################################
//          Lower First Letter of Each Word
// ################################################
// string readString()
void lowerFirstLetterOfEachWord(string& statement) {
	bool isFirstLetter = true;

	for (int i = 0; i < statement.length(); i++) {
		if (statement[i] != ' ' && isFirstLetter)
			statement[i] = tolower(statement[i]);

		isFirstLetter = (statement[i] == ' ' ? true : false);
	}
}

// TO USE IT RUN THIS IN MAIN
// string str = readString();
// lowerFirstLetterOfEachWord(str);
// cout << str;
// #####################################################################################

// #####################################################################################
// ####################################################
//          Upper/Lower All Letters of a String
// ####################################################
// string readString()
string upperAllLetters(string statement) {
	string upperStatement = statement;
	
	for (int i = 0; i < statement.length(); i++) {
		upperStatement[i] = toupper(upperStatement[i]);
	}

	return upperStatement;
}
string lowerAllLetters(string statement) {
	string lowerStatement = statement;

	for (int i = 0; i < statement.length(); i++) {
		lowerStatement[i] = tolower(lowerStatement[i]);
	}

	return lowerStatement;
}

// TO USE IT RUN THIS IN MAIN
// string str = readString();
// cout << "\nUpper: " << upperAllLetters(str) << endl;
// cout << "\nLower: " << lowerAllLetters(str);
// #####################################################################################

// #####################################################################################
// ################################################
//          Invert Charcter Case
// ################################################
char readChar() {
	char letter;

	cout << "Enter a letter: ";
	cin >> letter;

	return letter;
}
char invertLetter(char letter) {
	return isupper(letter) ? tolower(letter) : toupper(letter);

	// if (65 <= letter && letter <= 90)
	// 	letter = tolower(letter);
	// else
	// 	letter = toupper(letter);

	// return letter;
}

// TO USE IT RUN THIS IN MAIN
// char str = readChar();
// cout << invertLetter(str);
// #####################################################################################

// #####################################################################################
// ################################################
//          Invert All Letters Case
// ################################################
// string readString()
// char invertLetter(char letter)
string invertAllLetters(string statement) {
	for (int i = 0; i < statement.length(); i++) {
		statement[i] = invertLetter(statement[i]);
	}

	return statement;
}

// TO USE IT RUN THIS IN MAIN
// cout << invertAllLetters(readString());
// #####################################################################################

// #####################################################################################
// ################################################
//          Count Small/Capital Letters
// ################################################
// string readString()
int countSmallLetters(string statement) {
	int counter = 0;
	for (int i = 0; i < statement.length(); i++) {
		if (islower(statement[i]))
			counter++;
	}
	return counter;
}
int countCapitaletters(string statement) {
	int counter = 0;
	for (int i = 0; i < statement.length(); i++) {
		if (isupper(statement[i]))
			counter++;
	}
	return counter;
}

// TO USE IT RUN THIS IN MAIN
// string statement = readString();
// cout << statement.length() << endl;
// cout << countSmallLetters(statement) << endl;
// cout << countCapitaletters(statement) << endl;
// #####################################################################################

// #####################################################################################
// ################################################
//     Count Specific Letter
// ################################################
// string readString()
// char readChar()
int countSpecificLetter(char letter, string statement) {
	int counter = 0;

	for (int i = 0; i < statement.length(); i++) {
		if (letter == statement[i])
			counter++;
	}

	return counter;
}

// TO USE IT RUN THIS IN MAIN
// cout << countSpecificLetter(readChar(), readString());
// #####################################################################################

// #####################################################################################
// ################################################
//        Count Letters (Match Case)  
// ################################################
// string readString()
// char readChar()
int countLetters(char letter, string statement, bool matchCase=true) {
	int counter = 0;

	if (matchCase) {
		for (int i = 0; i < statement.length(); i++) {
			if (letter == statement[i])
				counter++;
		}
	}
	else {
		for (int i = 0; i < statement.length(); i++) {
			if (tolower(letter) == tolower(statement[i]))
				counter++;
		}
	}

	return counter;
}

// TO USE IT RUN THIS IN MAIN
// string statement = readString();
// char letter = readChar();
// cout << "Letter " << (char)letter << " count = " << countLetters(letter, statement) << endl;
// cout << "Letter " << (char)tolower(letter) << " and " << (char)toupper(letter) << "count = " << countLetters(letter, statement, false);
// #####################################################################################

// #####################################################################################
// ################################################
//          Is Vowel?
// ################################################
// char readChar()
bool isVowel(char letter) {

	letter = tolower(letter);

	return ((letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o') || (letter == 'u'));

	//char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };

	//for (int i = 0; i < 5; i++) {
	//	if (letter == vowels[i])
	//		return true;
	//}

	//return false;
}

// TO USE IT RUN THIS IN MAIN
// char letter = readChar();
// cout << isVowel(letter);
// #####################################################################################

// #####################################################################################
// ################################################
//          Count Vowels
// ################################################
// char readChar()
// bool isVowel(char letter)
int countVowels(string statement) {
	int counter = 0;

	for (int i = 0; i < statement.length(); i++) {
		if (isVowel(statement[i]))
			counter++;
	}

	return counter;
}

// TO USE IT RUN THIS IN MAIN
// string statement = readString();
// cout << countVowels(statement);
// #####################################################################################

// #####################################################################################
// ################################################
//        String ln VoweIs AII Print  
// ################################################
// char readChar()
// bool isVowel(char letter)
void printVowelsInString(string statement) {
	for (int i = 0; i < statement.length(); i++) {
		if (isVowel(statement[i]))
			cout << statement[i] << '\t';
	}
}

// TO USE IT RUN THIS IN MAIN
// string statement = readString();
// printVowelsInString(statement);
// #####################################################################################

// #####################################################################################
// ################################################
//          Print Each Word In String
// ################################################
// string readString()
void printEachWordInString(string statement) {
	string newWord = "";
	string delimiter = " ";
	int position = 0;

	while ((position = statement.find(delimiter)) != string::npos) {
		newWord = statement.substr(0, position);
		if (newWord != "")
			cout << newWord << endl;

		statement.erase(0, position + delimiter.length());
	}

	if (statement != "")
		cout << statement;

	//string newWord = "";
	//char currentLetter;
	//
	//for (int i = 0; i < statement.length(); i++) {
	//	currentLetter = statement[i];
	//	if (currentLetter != ' ') {
	//		newWord += currentLetter;
	//	}
	//	if (currentLetter == ' ' || i == statement.length() - 1) {
	//		cout << newWord << endl;
	//		newWord = "";
	//	}
	//}
}

// TO USE IT RUN THIS IN MAIN
// string statement = readString();
// printEachWordInString(statement);
// #####################################################################################

// #####################################################################################
// ################################################
//          Count Each Word In String
// ################################################
// string readString()
int countNumberOfWordsInString(string statement) {
	int counter = 0;
	string newWord = "";
	string deli = " ";
	int position = 0;

	while ((position = statement.find(deli)) != string::npos) {
		newWord = statement.substr(0, position);
		if (newWord != "")
			counter++;
		statement.erase(0, position + deli.length());
	}
	if (newWord != "")
		counter++;

	return counter;
}

// TO USE IT RUN THIS IN MAIN
// #####################################################################################

// #####################################################################################
// ################################################
//          Split Function
// ################################################
// string readString()
vector<string> splitString(string statement, string deli=" ") {
	vector<string> vNames;
	string newWord = "";
	int pos = 0;

	while ((pos = statement.find(deli)) != string::npos) {
		newWord = statement.substr(0, pos);
		if (newWord != "")
			vNames.push_back(newWord);
		statement.erase(0, pos + deli.length());
	}
	if (newWord != "")
		vNames.push_back(statement);

	return vNames;
}

// TO USE IT RUN THIS IN MAIN
// string statement = readString();
// vector<string> vNames;
// vNames = splitString(statement, ",");
// cout << "Tokens: " << vNames.size() << endl;
// for (string& word : vNames)
//     cout << word << endl;
// #####################################################################################

// #####################################################################################
// ################################################
//          TrimLeft, TrimRight, Trim
// ################################################
// string readString()
string trimLeft(string statement) {
	for (int i = 0; i < statement.length(); i++) {
		if (statement[i] != ' ')
			return statement.substr(i, statement.length());
	}
}
string trimRight(string statement) {
	for (int i = statement.length() - 1; i >= 0; i--) {
		if (statement[i] != ' ')
			return statement.substr(0, i + 1);
	}
}
string trim(string statement) {
	return trimLeft(trimRight(statement));

	//statement = trimLeft(statement);
	//statement = trimRight(statement);
	//return statement;
}

// TO USE IT RUN THIS IN MAIN
// string statement = "    Hello WOrld    ";
// string left = trimLeft(statement);
// cout << left << " = " << left.length() << endl;
// string right = trimRight(statement);
// cout << right << " = " << right.length() << endl;
// string t = trim(statement);
// cout << t << " = " << t.length() << endl;
// #####################################################################################

// #####################################################################################
// ################################################
//          Join String (Vector)
// ################################################
string joinString(vector<string>& vString, string deli=" ") {
	string newString = "";
	for (string& word : vString) {
		newString += word + deli;
	}
	return newString.substr(0, newString.length() - deli.length());
}

// TO USE IT RUN THIS IN MAIN
//	vector<string> vNames = { "abd", "abdd", "abddd", "abdddd" };
// cout << joinString(vNames, "####");
// #####################################################################################

// #####################################################################################
// ################################################
//          Join String (List) (Overloading) 
// ################################################
string joinString(string array[], int arrayLength, string deli = " ") {
	string newString = "";
	for (int i = 0; i < arrayLength; i++) {
		newString += array[i] + deli;
	}
	return newString.substr(0, newString.length() - deli.length());
}

// TO USE IT RUN THIS IN MAIN
// string names[4] = {"abd", "abdd", "abddd", "abdddd"};
// cout << joinString(names, 4, "####");
// #####################################################################################

// #####################################################################################
// ################################################
//          Reverse Words
// ################################################
// string readString()
string reverseWords(string statement) {

	string newString = "";
	vector<string> vString = splitString(statement);
	vector<string>::iterator iter = vString.end();

	while (iter != vString.begin()) {
		iter--;
		newString += *iter + ' ';
	}

	newString = newString.substr(0, newString.length() - 1);
	return newString;

	//string newWord = "";

	//for (int i = statement.length(); i >= 0; i--) {
	//	if (statement[i] == ' ') {
	//		newWord += statement.substr(i + 1, statement.length()) + ' ';
	//		statement.erase(i, statement.length());
	//	}
	//}
	//if (statement != "")
	//	newWord += statement;

	//return newWord;
}

// TO USE IT RUN THIS IN MAIN
// cout << reverseWords(readString());
// #####################################################################################

// #####################################################################################
// ################################################
//          Replace Words (using built-in)
// ################################################
// string readString()
string replaceWordsUsingReplace(string statement, string currentWord, string newWord) {
	int pos = 0;

	while ((pos = statement.find(currentWord)) != string::npos) {
		statement.replace(pos, currentWord.length(), newWord);
	}

	return statement;
}

// TO USE IT RUN THIS IN MAIN
// cout << replaceWordsUsingReplace("Hello ahmed how are you ahmed ?", "ahmed", "ali");
// #####################################################################################

// #####################################################################################
// ################################################
//          Replace Words (custom)
// ################################################
// string readString()
// vector<string> splitString(string statement, string deli=" ")
// string lowerAllLetters(string statement)
// string joinString(vector<string>& vString, string deli=" ")
string replaceWords(string statement, string currentWord, string newWord, bool caseSensitive=true) {
	vector<string> vWords = splitString(statement);

	for (string& word : vWords) {
		if (caseSensitive) {
			if (word == currentWord)
				word = newWord;
		}
		else {
			if (lowerAllLetters(word) == lowerAllLetters(currentWord))
				word = newWord;
		}
	}

	statement = joinString(vWords, " ");
	return statement;
}

// TO USE IT RUN THIS IN MAIN
// cout << replaceWords("Hello ahmed how are you ahmed ?", "Ahmed", "ali") << endl;
// cout << replaceWords("Hello ahmed how are you ahmed ?", "Ahmed", "ali", false);
// #####################################################################################

// #####################################################################################
// ################################################
//          Remove Punctuations
// ################################################
// readString()
string removePunctuations(string statement) {
	string newString;

	for (int i = 0; i < statement.length(); i++) {
		if (!ispunct(statement[i]))
			newString += statement[i];
	}

	//for (int i = 0; i < statement.length(); i++) {
	//	if ((statement[i] == 32) || (65 <= statement[i] && statement[i] <= 90) || 97 <= statement[i] && statement[i] <= 122)
	//		newString += statement[i];
	//}

	return newString;
}

// TO USE IT RUN THIS IN MAIN
// cout << removePunctuations("Hello WOrld; it's your name#s or wh!tt") << endl;
// #####################################################################################

// #####################################################################################
// ################################################
//          Convert Record to Line
// ################################################
struct sPerson {
	string accountNumber;
	short pinCode;
	string name;
	string phone;
	int accountBalance;
	bool deleteMark = false;
};
sPerson readNewPerson() {
	sPerson person;

	cout << "Enter your account number: ";
	getline(cin >> ws, person.accountNumber);

	cout << "Enter your pin code: ";
	cin >> person.pinCode;
	cin.ignore();

	cout << "Enter your name: ";
	getline(cin, person.name);

	cout << "Enter your phone number: ";
	getline(cin, person.phone);

	cout << "Enter your account balance: ";
	cin >> person.accountBalance;

	return person;
}
string convertRecoredToLine(sPerson person, string deli="###") {
	string newString;
	newString += person.accountNumber + deli 
		+ to_string(person.pinCode) + deli 
		+ person.name + deli 
		+ person.phone 
		+ deli + to_string(person.accountBalance);
	return newString;
}

// TO USE IT RUN THIS IN MAIN
// sPerson person = readNewPerson();
// cout << convertRecoredToLine(person);
// #####################################################################################

// #####################################################################################
// ################################################
//       Convert Line Data to Record
// ################################################
// struct sPerson
// readString()
sPerson convertLineToRecord(string line, string deli="###") {
	sPerson person;
	vector<string> personData = splitString(line, deli);

	person.accountNumber = personData[0];
	person.pinCode = stoi(personData[1]);
	person.name = personData[2];
	person.phone = personData[3];
	person.accountBalance = stoi(personData[4]);

	return person;
}
void printStructPerson(sPerson person) {
	cout << "Accout Number\t: " << person.accountNumber << endl;
	cout << "Pin Code\t: " << person.pinCode << endl;
	cout << "Name\t\t: " << person.name << endl;
	cout << "Phone\t\t: " << person.phone << endl;
	cout << "Accout Balance\t: " << person.accountBalance << endl;
}

// TO USE IT RUN THIS IN MAIN
// string line = "A150###1234###Ahmed Ali###079123###50000";
// sPerson person = convertLineToRecord(line);
// printStructPerson(person);
// #####################################################################################

// #####################################################################################
// ################################################
//          Add Clients to File
// ################################################
// struct sPerson
// sPerson readNewPerson()
// string convertRecoredToLine(sPerson person, string deli="###")
void addRecoredToFile(string dataLine, string fileName="Person Records.txt") {
	fstream file;
	file.open("Person Records.txt", ios::app);

	if (file.is_open()) {
		file << dataLine << '\n';
		file.close();
	}

	cout << "Client Added Successfully";
}
void addNewClients() {
	sPerson person = readNewPerson();
	addRecoredToFile(convertRecoredToLine(person), "Clients.txt");
}

// TO USE IT RUN THIS IN MAIN
// char addMore = 'n';
// do {
//  system("cls");
// 	addNewClients();
// 	cout << ", do you want to add more clients? (y/n) ";
// 	cin >> addMore;
// } while (tolower(addMore) == 'y');
// #####################################################################################

// #####################################################################################
// ################################################
//        Show All Clients  
// ################################################
// sPerson convertLineToRecord(string line, string deli="###")
void loadClientsDataFromFile(string fileName, vector<sPerson>& vFileContent) {
	fstream file;
	file.open(fileName, ios::in);

	if (file.is_open()) {
		string line;
		sPerson person;

		while (getline(file, line)) {
			person = convertLineToRecord(line);
			vFileContent.push_back(person);
		}

		file.close();
	}
}
void printClinets(vector<sPerson> clients) {

	cout << "\t\t\t\tClient List (" << clients.size() << ") Client(s)." << endl;
	cout << "_____________________________________________________________________________________" << endl << endl;
	cout << "| " << setw(15) << left << "Account Number";
	cout << "| " << setw(10) << left << "Pic Code";
	cout << "| " << setw(30) << left << "Client Name";
	cout << "| " << setw(12) << left << "Phone";
	cout << "| " << setw(12) << left << "Balance" << endl;
	cout << "_____________________________________________________________________________________" << endl << endl;
	
	for (sPerson& client : clients) {
		cout << "| " << setw(15) << left << client.accountNumber;
		cout << "| " << setw(10) << left << client.pinCode;
		cout << "| " << setw(30) << left << client.name;
		cout << "| " << setw(12) << left << client.phone;
		cout << "| " << setw(12) << left << client.accountBalance << endl;
	}
	cout << "_____________________________________________________________________________________" << endl;
}

// TO USE IT RUN THIS IN MAIN
// vector<sPerson> persons;
// loadClientsDataFromFile("Persons Records.txt", persons);
// printClinets(persons);
// #####################################################################################

// #####################################################################################
// ################################################
//        Find Client By Account Number
// ################################################
// readString()
// void loadClientsDataFromFile(string fileName="Person Records.txt", vector<sPerson>& vFileContent)
bool findClientWithAccountNumber(string accountNumber, vector<sPerson> clients, sPerson& client) {
	for (sPerson& person : clients) {
		if (person.accountNumber == accountNumber) {
			client = person;
			return true;
		}
	}
	return false;
}
// void printStructPerson(sPerson person)

// TO USE IT RUN THIS IN MAIN
// vector<sPerson> persons;
// loadClientsDataFromFile("Person Records.txt", persons);
// string accountNumber = readString();
// sPerson person;
// if (findClientWithAccountNumber(accountNumber, persons, person))
//     printStructPerson(person);
// else
//     cout << "Client with account number (" << accountNumber << ") not found!";
// #####################################################################################

// #####################################################################################
// ################################################
//          Number Account By Client belete
// ################################################
void markClientToDelete(string accountNumber, vector<sPerson>& clients) {
	for (sPerson& client : clients) {
		if (client.accountNumber == accountNumber) {
			client.deleteMark = true;
			break;
		}
	}
}
void saveClientsDataToFile(string fileName, vector<sPerson>& clients) {
	fstream file;
	file.open(fileName, ios::out);

	if (file.is_open()) {
		for (sPerson& client : clients) {
			if (!client.deleteMark) {
				file << convertRecoredToLine(client) << endl;
			}
		}

		file.close();
	}
}
void deleteClientByAccountNumber(string accountNumber, vector<sPerson>& clients) {
	sPerson person;
	char areYouSure = 'n';

	if (findClientWithAccountNumber(accountNumber, clients, person)) {
		printStructPerson(person);

		cout << "\nAre you sure you want to delete the account? (y/n) ";
		cin >> areYouSure;

		if (tolower(areYouSure) == 'y') {
			markClientToDelete(accountNumber, clients);
			saveClientsDataToFile("Person Records.txt", clients);
		}

		cout << "Deleted Successfully!";
	}
	else {
		cout << "The client with account number (" << accountNumber << ") not found!";
	}
}

// TO USE IT RUN THIS IN MAIN
// vector<sPerson> persons;
// loadClientsDataFromFile("Person Records.txt", persons);
// deleteClientByAccountNumber(readString(), persons);
// #####################################################################################

// #####################################################################################
// ################################################
//       Update Client By Account Number   
// ################################################
// sPerson readNewPerson()
// void saveClientsDataToFile(string fileName, vector<sPerson>& clients)
void updateClientByAccountNumber(string accountNumber, vector<sPerson>& clients) {
	sPerson person;
	char updateIt = 'n';

	if (findClientWithAccountNumber(accountNumber, clients, person)) {
		printStructPerson(person);

		cout << "\nAre you sure you want to update the client? (y/n) ";
		cin >> updateIt;

		if (tolower(updateIt) == 'y') {
			for (sPerson& client : clients) {
				if (client.accountNumber == accountNumber) {
					client = readNewPerson();
					break;
				}
			}
			saveClientsDataToFile("Person Records.txt", clients);
			cout << "\nUpdate Seccessfully!";
		}
		else {
			cout << "The client with account number (" << accountNumber << ") not found!";
		}

		
	}
}

// TO USE IT RUN THIS IN MAIN
// vector<sPerson> persons;
// loadClientsDataFromFile("Person Records.txt", persons);
// updateClientByAccountNumber(readString(), persons);
// #####################################################################################

int main() {
	// Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));



	return 0;
}