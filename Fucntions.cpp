#include "Functions.h"



void WriteHeader() //Header
{
	cout << "\n Welcome to Painting Estimate! ";
}
bool DoAnother()
{
	string doAgain;
	cout << "\n\n Do you want to check some more? yes/no    ";
	getline(cin, doAgain);
	if (doAgain == "yes" || "y")
	{
		return true;
	}
	return false;
}
void Goodbye()
{
	cout << "\n Thank you for using Paint Estimation !";
}
void AskForNameAndShape(string &rName, int &rShape)
{
	cout << "\n Your name, Please: ";
	cin >> rName;

	cout << "\n Please seletect a Shape room: ";
	cout << "\n 1. Rectangular ";
	cout << "\n 2. Circular ";
	cin >> rShape;
	cout << "\n You have Chose: " << rShape;
	cin.ignore();

	if (shape == 1)
	{
		shape = ShapeRectangular;
	}
	if (shape == 2)
	{
		shape = ShapeCircular;
	}

}
void AskForPaintInfo(int &rCoats, int &rCoverage, string &rCeiling)
{
	
	cout << "\n How many coats of painting would you like to have ?: ";
	cout << "\n ==> ";
	cin >> rCoats;
	cout << "\n The coverage of the paint chosen: ";
	cout << "\n ==> ";
	cin >> rCoverage;
	cout << "\n Do you want to plaint the Ceiling? (yes or no): ";
	cin >> rCeiling;
    cin.ignore();


}

void AskForDimensions(double *plength, double *pWidth, double *pHeight, int *pPercentNoPaint, string* pDimens)
{
	cout << "\n Please, enter the Dimension for Rectangle room: ";
	cout << "\n Lenght:";
	cin >> *plength;
	cout << "\n Width: ";
	cin >> *pWidth;
	cout << "\n Height: ";
	cin >> *pHeight;
	cin.ignore();
	cout << "\n the % is : " << *pPercentNoPaint;
	cout << "\n The Dimension: " << *pDimens << endl;



}
void AskForDimensions(double *pRadius, double *pHeight, int *pPercentNoPaint, string *pDimens)
{
	cout << "\n Please, enter the Dimension for Circular room ";
	cout << "\n Radius: ";
	cin >> *pRadius;
	cout << "Height: ";
	cout << *pHeight;
	cout << "\n The % : " << *pPercentNoPaint << endl;
	cout << "\n The Dimension: " << *pDimens << endl;
}

int	HowManyGallons(double length, double width, double height, int coverage, int coats, string ceiling, int percentNoPaint)
{
	 Rectangular_Ceiling =  length * width;
	
	 Rectangular_Wall =  (length * height + width * height) * 2;


}
int HowManyGallons(double radius, double height, int coverage, int coats, string ceiling, int percentNoPaint)
{
	Circular_Ceiling =  PI * radius * radius;
	
	Circular_Wall =  2 * PI * radius * height;


}
