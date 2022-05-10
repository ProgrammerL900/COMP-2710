// Header files section

#include <iostream>

#include <fstream>

#include <string>

using namespace std;

// function prototype

void sortTwoFiles(ifstream& in1, ifstream& in2, ofstream& out);

// start main function

int main()

{

     // variables declartion

     ifstream iFile1;

     ifstream iFile2;

     ofstream oFile;

     string iFileName1;

     string iFileName2;

     string oFileName;

     // prompt the user for the first input file

     cout << "Enter the first input file: ";

     cin >> iFileName1;

     // prompt the user for the second input file

     cout << "Enter the second input file: ";

     cin >> iFileName2;

     // prompt the user for the output file

     cout << "Enter the output file: ";

     cin >> oFileName;

     // try to open the input file 1

     iFile1.open(iFileName1);

     if(iFile1.fail())

     {

          // display an error message and exit the program

          cout << iFileName1 << " file is not opened!" << endl;

          system("pause");

          exit(1);

     } // end if

     // try to open the input file 2

     iFile2.open(iFileName2);

     if(iFile2.fail())

     {

          // display an error message and exit the program

          cout << iFileName2 << " file is not opened!" << endl;

          system("pause");

          exit(1);

     } // end if

     // try to open the output file

     oFile.open(oFileName);

     if(oFile.fail())

     {

          // display an error message and exit the program

          cout << oFileName << " file is not opened!" << endl;

          system("pause");

          exit(1);

     } // end if

     // call the sortTwoFiles function

     sortTwoFiles(iFile1, iFile2, oFile);

     // close all the files

     iFile1.close();

     iFile2.close();

     oFile.close();

     // pause the system for a while

     system("pause");

     return 0;

} // end of main function

// sortTwoFiles function definitions

void sortTwoFiles(ifstream& in1, ifstream& in2,ofstream& out)

{

     // local variables

     int x;

     int y;

     // get the starting integers from both files

     in1 >> x;

     in2 >> y;

     // verify whether any of the files is reached its end

     while(!in1.eof() && !in2.eof())

     {        

/* verify whether the integer in the first file is less than or equal to the integer in the second file */

          if(x <= y)

          {

              out << x << endl;

              in1 >> x;

          }

/* if the integer in the first file is greater than the integer in the second file */

          else

          {

              out << y << endl;

              in2 >> y;

          }

     } // end while

    // display the remaining integers in the second file

     if(x <= y)

     {

          while(!in2.eof())

          {

              out << y << endl;

              in2 >> y;

          }

     }

     // display the remaining integers in the first file

     else

     {

          while(!in1.eof())

          {

              out << x << endl;

              in1 >> x;

          }

     } 

} 