
#include <iostream> 

        using namespace std; 
        
        
                /**
        double a = 30; 
        double b = 100000.0;  
        double pi = 3.1415926; 
        double pi_round = 3.14151926; 
        
     cout.precision (5); 
        
        cout << showpoint << "a1 = " << a << '\t' <<"b1 = " << b << '\t' << "pi1 = " << pi << '\t' << "pi_round1 = " 
<< pi_round <<'\n'; 

        cout << noshowpoint << "a2 = " << a << '\t' <<"b2 = " << b << '\t' << "pi2 = " << pi << '\t' << "pi_round2 = " << pi_round <<'\n'; 

        cout << fixed<< "a3 = " << a << '\t' <<"b3 = " << b << '\t' << "pi3 = " << pi << '\t' << "pi_round3 = " << 
pi_round <<'\n'; 
          
*/


/**
 
 while(true)  {
    int i;
   cin >> i;
       switch( i )
       {
                   case 1:
                   case 2:
                   case 3:
                           cout << "inside switch " << i << "\n";
                           continue;
                   default:
                           cout << "inside default\n";
                           break;
                }
               
 cout << "Bottom of while " << i << endl;
      break;
     }
 }
 */

 
  //generates random numbers 5 times. 
  /**
       for(int i = 0; i<5; i++) 
          cout << rand () << endl; 
   
   }
   */

  //Example two 
  //Generates random #'s but seeds the pseudo-random number generator with a value seed.        
/**
  #include <cstdlib> 
   #include <ctime> 
   
   int main() 
  {
       srand((unsigned)time(0)); 
       for( int i = 0; i < 5;i++ ) 
       { 
      cout << rand() << endl;  
      } 
  }  

*/
/**
//generates numbers in a specific range
#include <cstdlib> 
   #include <ctime> 
   #include <iostream> 
   using namespace std; 
   int main() 
   { 
       srand((unsigned)time(0)); 
       for(int index=0; index<5; index++) 
           cout << (rand()%10)+1<< endl;   
  } 
*/



        

 



      
 
 
 
 
 