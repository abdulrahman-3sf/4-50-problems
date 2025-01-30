// #####################################################################################

//                                Abdulrahman Alassaf
//                              github: @abdulrahman-3sf

//             3/50 problem solved in ways that make reading and reuse easy.
//                                  Solved with C++

// #####################################################################################

#include <iostream>
#include <cstdlib>	     // For random number
#include <iomanip>	     // For setw
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
//          
// ################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithNumbersFromTo(int matrix[3][3], int from, int to)

// void printMatrix(int matrix[3][3])


// TO USE IT RUN THIS IN MAIN
// #####################################################################################

int main() {
	// Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));



	return 0;
}