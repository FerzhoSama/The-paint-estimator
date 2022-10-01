#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;
const  double PI = 3.14159;
int ShapeRectangular = 1;
int ShapeCircular = 2;
int shape = { 0 };
int Rectangular_Ceiling = 0;
int Rectangular_Wall = 0;
int Circular_Ceiling = 0;
int Circular_Wall = 0;
int Ceiling = { 0 };


#ifndef FUNCTIONS_H
#define FUNCTIONS_H




void WriteHeader();
void Goodbye();//say goobye
bool DoAnother();//Ask if the user wants to calculate more rooms


int	HowManyGallons(double length, double width, double height, int coverage, int coats, string ceiling, int percentNoPaint);
int HowManyGallons	(double radius, double height, int coverage, int coats, string ceiling, int percentNoPaint);
void AskForNameAndShape(string &rName, int &rShape);
void AskForDimensions(double* pRadius, double* pHeight, int* pPercentNoPaint, string* pDimens);
void AskForDimensions(double* plength, double* pWidth, double* pHeight, int* pPercentNoPaint, string* pDimens); //Gets dimensions of the rectangular room
void AskForPaintInfo(int& rCoats, int& rCoverage, string& rCeiling);


#endif