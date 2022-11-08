#pragma once
#include"constans.h"

template<typename T>
void shiftLeft(T arr[], int n, int number_of_shifts);

template<typename T>
void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

template<typename T>
void shiftRight(T arr[], int n, int number_of_shifts);