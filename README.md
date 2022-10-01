# The-paint-estimator
Help, The_Paint_Estimator

Hello, Everyone.
Can anybody help me on this, please.

In the main function, you will need to declare the variables needed.  After you write your course header function, WriteHeader, open a do-while or while loop.  Then you will call these functions:

1. AskForNameAndShape, in which you will ask for the customer's name and then ask him/her whether the room is rectangular or circular.  The function has a void return and is passed the customer’s name and shape (rectangular or circular) by reference.  Shape may be represented by an int, a string or even a bool.   Your choice.  Comment to explain your choice.

     2. AskForPaintInfo, in which you ask the user the number of coats to paint, the coverage of the paint chosen (in square feet per gallon) and whether or not to paint the ceiling (the user enters true /false or 1/2 or a string, your choice).  The functions also has a void return and is passed the number of coats, the paint coverage and whether to paint the ceiling using references. 

	If the shape is rectangular, call the rectangle-based AskForDimensions and HowManyGallons.
	If the shape is circular, call the circle-based overloaded functions.
3. AskForDimensions, which asks the user for the appropriate dimensions and a description of the data:
		Rectangular: length, width,  height , and a description string like: "Your room is length feet by width feet and height feet high.";  You may want to use stringstream to build the string.

	These are two overloaded functions with this name, one for the rectangular room, one for the circular room.  This functions also ask the user to provide an estimate of wall space that consists of doors and windows. (in %).  Both functions have void returns and are passed the dimensions and percent of the walls not to paint, and description using pointers. 

     4. HowManyGallons, which is passed the dimensions, the paint info, and the percent of walls not to be painted.  It returns an int, the number of full gallons to buy.  The function calculates the wall area to be painted, the ceiling area (if any) and using the number of coats and the paint coverage, calculates the exact amount of paint and then figures out how many whole gallons to buy.
	This function is also overloaded.  There will be one function for the rectangular shape, and one fore the circular room.  They will be passed the dimensions, the paint coverage, the number of coats, whether the ceiling will be painted and the percentNoPaint.

To summarize the functions:


void	WriteHeader	( )	

int	HowManyGallons	(double length, double width, double height, int coverage int coats, string ceiling, int percentNoPaint)	
int 	HowManyGallons	(double radius, double height, int coverage int coats, string ceiling, int percentNoPaint)	


void 	AskForNameAndShape	(string &rName, int rShape)	
void 	AskForDimensions	(double *pRadius, double *pHeight, int *pPercentNoPaint, string *pDimens)	
void 	AskForDimensions	(double *plength,, double *pWidth, double *pHeight, int *pPercentNoPaint, string *pDimens)
void 	AskForPaintInfo	(int &rCoats, int &rCoverage, string &rCeiling)	Gets info on the paint used
void 	Goodbye	( )	Say goodbye
void 	DoAgain	( )	Ask if the user want to calculate more rooms.
In main, after the calculations are returned, display the results to your customer:  The customer's name, the shape and dimensions of the room, whether the ceiling is to be painted,  how much will be subtracted for doors and windows, the number of coats and the paint coverage.  Then report the exact amount of paint required, and the number of whole gallon cans of paint needed.  Present this information in a nicely formatted manner.  You may write this report as a string, perhaps using stringstream, or simply using cout. Write your results to 2 decimal places of precision.


Ask the customer if they want to estimate another room.  When the customer has finished, write a good-bye message to the customer before exiting.



