#pragma once
#include"constants.h"
void shiftLeft(int arr[], int n, int number_of_shifts);
void shiftLeft(double arr[], int n, int number_of_shifts);
void shiftLeft(char arr[], int n, int number_of_shifts);
void shiftLeft(float arr[], int n, int number_of_shifts);

void shiftRight(int arr[], int n, int number_of_shifts);
void shiftRight(double arr[], int n, int number_of_shifts);
void shiftRight(char arr[], int n, int number_of_shifts);
void shiftRight(float arr[], int n, int number_of_shifts);

void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);