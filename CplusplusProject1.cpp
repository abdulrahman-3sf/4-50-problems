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

void fill3x3MatrixWithNumbersFromTO(int matrix[3][3], int from, int to) {
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
//    int martix[3][3];
//    fill3x3MatrixWithRandomNumbers(martix);
//    printMatrix(martix);
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
//    int matrix[3][3];
//    fill3x3MatrixWithRandomNumbers(matrix);
//    printMatrix(matrix);
//    printTheSumOfTheRows(matrix);
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
//    int matrix[3][3];
//    int sumMatrix[3];
//    fill3x3MatrixWithRandomNumbers(matrix);
//    printMatrix(matrix);
//    sumMatrixRowsInArray(matrix, sumMatrix);
//    printTheSumOfTheRows(sumMatrix);
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


// TO USE IT RUN THIS IN MAIN
//    int matrix[3][3];
//    fill3x3MatrixWithRandomNumbers(matrix);
//    printMatrix(matrix);
//    printTheSumOfTheCol(matrix);
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


// TO USE IT RUN THIS IN MAIN
//    int matrix[3][3];
//    int sumMatrix[3];
//    fill3x3MatrixWithRandomNumbers(matrix);
//    printMatrix(matrix);
//    sumMatrixClosInArray(matrix, sumMatrix);
//    printTheSumOfTheCol(sumMatrix);
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
//    int matrix[3][3];
//    fill3x3MatrixWithOrderedNumbers(matrix);
//    printMatrix(matrix);
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
//    int matrix[3][3];
//    int tMatrix[3][3];
//    fill3x3MatrixWithOrderedNumbers(matrix);
//    printMatrix(matrix);
//    transposeMatrix(matrix, tMatrix);
//    printMatrix(tMatrix);
// #####################################################################################

// #####################################################################################
// ################################################
//          Multiply Two Matrices
// ################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithNumberFromTo(int matrix[3][3], int from, int to)
void multiplyTwoMatrix(int matrix[3][3], int matrix2[3][3], int multiplyedMatrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			multiplyedMatrix[i][j] = matrix[i][j] * matrix2[i][j];
		}
	}
}


// TO USE IT RUN THIS IN MAIN
//    int matrix[3][3];
//    int matrix2[3][3];
//    int multiplyedMatrix[3][3];
//
//    fill3x3MatrixWithNumbersFromTO(matrix, 1, 10);
//    fill3x3MatrixWithNumbersFromTO(matrix2, 1, 10);
//    multiplyTwoMatrix(matrix, matrix2, multiplyedMatrix);
//
//    printMatrix(matrix);
//    cout << endl;
//    printMatrix(matrix2);
//    cout << endl;
//    printMatrix(multiplyedMatrix);
// #####################################################################################

// #####################################################################################
// ############################################################
//          Print Middle Row and Col of Matrix
// ############################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithNumberFromTo(int matrix[3][3], int from, int to)
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


// TO USE IT RUN THIS IN MAIN
//    int matrix[3][3];
//    fill3x3MatrixWithNumbersFromTO(matrix, 1, 10);
//    printMatrix(matrix);
//    cout << endl;
//    printMiddleRow(matrix);
//    cout << endl;
//    printMiddleCol(matrix);
// #####################################################################################

// #####################################################################################
// ################################################
//          Sum of Matrix
// ################################################
// int randomNumber(int from, int to)
// void fill3x3MatrixWithNumberFromTo(int matrix[3][3], int from, int to)
int sumOfMatrix(int matrix[3][3]) {
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum += matrix[i][j];
		}
	}
	return sum;
}


// TO USE IT RUN THIS IN MAIN
//    int matrix[3][3];
//    fill3x3MatrixWithNumbersFromTO(matrix, 1, 10);
//    printMatrix(matrix);
//    cout << "The Sum of Matrix: " << sumOfMatrix(matrix);
// #####################################################################################

int main() {
	// Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int matrix[3][3];
	fill3x3MatrixWithNumbersFromTO(matrix, 1, 10);
	printMatrix(matrix);
	cout << "The Sum of Matrix: " << sumOfMatrix(matrix);

	return 0;
}

