/* FILE NAME: TowerOfHanoi_plain.cpp
 * AUTHOR: Laura Wilson
 * version: 4/1/2022
 * compile: g++ TowerOfHanoi_plain.cpp
 * 
 * run: ./a.out TowerOfHanoi_plain.cpp
 *  
 */ 
#include <iostream>
#include<time.h>
using namespace std;

// tower of HANOI function implementation
void moveDisk(int n, char Original, char Aux, char Dest) {
	if(n==0)
		return;

	moveDisk(n-1, Original, Dest, Aux);

	cout << "Move Disk " << n << " " << "from " << Original << " to "<< Dest << endl;

	moveDisk(n-1, Aux, Original, Dest);
}

// main 
int main() {

int n;

time_t start, end;

//ask for disks
cout << "Enter the number of disks:";
//stores amount
cin >> n;

   // call method
time (&start);

moveDisk(n, 'A', 'B', 'C');

time (&end);

//calculates time 
double elapse = difftime (end, start);

//output
cout << "The elapsed time is " << elapse << " seconds" << " for moving " << n << " disks " << endl;

//returns 0 if not 
return 0;

}