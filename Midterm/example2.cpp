#include <iostream>
using namespace std;

//Pass-by-Value 
int square1(int n)  
{   
    n *= n;  
    return n;  
}  


 
 
//Pass-by-Reference with Reference Arguments  
void square3(int &n)  
{  n *= n; } 

void ref_demo()  
{  
    //Call-by-Value  
    int n1=8;  
   square1(n1); 
    cout << "Square of n1: " << n1 << "\n";  
       
    
       
    //Call-by-Reference with Reference Arguments  
    int n3=8;  
    square3(n3);  
    cout << "Square of n3: " << n3 << "\n";  
}
