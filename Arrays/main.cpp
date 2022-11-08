#include"stdafx.h"
#include"constans.h"
//#include"FillRand.h"
//#include"FillRand.cpp"
#include"Print.h"
#include"Print.cpp"
#include"statistics.h"
#include"statistics.cpp"
#include"Sort.h"
#include"Sort.cpp"
#include"Shift.h"
#include"Shift.cpp"





void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	//FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение: " << maxValueIn(arr, n) << endl;


	//int number_of_shifts; // количество сдвигов

	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//shiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);

	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);

	const int SIZE = 8;
	int brr[SIZE];
	//FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;

	const int D_SIZE = 5;
	double d_arr[D_SIZE];
	//FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	Sort(d_arr, D_SIZE);

	int i_arr_2[ROWS][COLS];
	//FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;

	double d_arr_2[ROWS][COLS];
	//FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;


}

