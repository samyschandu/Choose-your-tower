#include <iostream>   // for cin and cout
#include <iomanip>    // for setw() and setfill()
using namespace std;  // so that we don't need to preface every cin and cout with std::

int main() {
    int input_num,num_sec; //my two variables which are used in for looping the Hancock building
    
  cout << "Choose from among the following options:  "<<endl;
  cout << "1. Display original graphic  "<<endl;
  cout << "2. Display building          "<<endl;
  cout << "3. Exit the program          "<<endl;
  
  cin >> input_num ;//input_num is the input from the keyboard
  cout<<"Your choice -> "<<endl;
  // Get user input from the keyboard
  
  switch (input_num)
  //for avoiding writing conditional statement
  {
   
  case 1:
  //MY own graphic,Its a Tower.
     
       cout <<setw(8)<< "                   ()          \n";//This is the top of my tower


       cout <<setw(8)<< "                   /\\         \n";
       cout <<setw(8)<<"                  |==|         \n";
       cout<<setw(8)<<"                  ====         \n";
       cout<<setw(8)<<"                   XX          \n";
       cout<<setw(18)<<" ";
       for( int i=0; i<2; i++) {
            cout << "Xx";
       }//use of loops for making my tower
       cout<<endl;
       cout <<setw(18)<<" ";
       for( int i=0; i<2; i++) {
            cout <<"XX";
       }   
            cout<<endl;
         cout <<setw(18)<<" ";
       for( int i=0; i<2; i++) {
            cout <<"XX";
       }   
            cout<<endl;
         cout <<setw(18)<<" ";
       for( int i=0; i<2; i++) {
            cout <<"XX";   
       }
       cout<<endl;
       cout <<setw(17)<<" ";
       for( int i=0; i<2; i++) {
            cout <<"xXx";
       }   
       cout<<endl;
       cout<<setw(8)<<"                 XXXXXX           \n";
       cout<<setw(8)<<"                 XXXXXX           ";
       cout<<endl;
       cout <<setw(14)<<" ";
       for( int i=0; i<4; i++) {
            cout <<"xXx";
       }
       cout<<endl;
       cout<<"              XXXXXXXXXXXX     \n";
       cout <<setw(10)<<" ";
       for( int i=0; i<5; i++) {
            cout <<"xXXx";
       }
       cout<<endl;
       cout<<setw(3)<<"          XXXXXXXXXXXXXXXXXXXX\n";
       cout<<setw(2)<<"       XXXXXXXXXX     XXXXXXXXXX\n";
       cout <<"       xXXXXXXXX+"<<""       ""<<"     +XXXXXXXXx\n";
       cout<<"      XXXXXXXXXxxxxxxxxxXXXXXXXXX\n";
       cout <<"       xXXXXXXXX+"<<""       ""<<"     +XXXXXXXXx\n";
       cout <<"     XXxXXXXXXXX+"<<""       ""<<"     +XXXXXXXXxXX\n";
       cout<<setw(5)<<setfill('.');
            
                 
   break;     
        
  case 2://The Hancock building


    cout << "Number of building sections -> "<<endl;
    // Type a number and press enter
    cin >> num_sec ; // Get user input from the keyboard
    //This is the top part of the building which is hardcoded as it remains constant.
    cout <<setw(num_sec+4)<< "/\\" << endl;
    cout <<setw(num_sec+4)<< "||" << endl;
    cout <<setw(num_sec+4)<< "||" << endl;
    cout <<setw(num_sec+4)<< "--" << endl;
    cout <<setw(num_sec+5)<< "|++|" << endl;
    cout <<setw(num_sec+5)<< " ====" << endl;
    //The main for loop for the Number of lines i.e , number of rows in the building.
    for(int working_sec=1;working_sec<=num_sec;working_sec++){
       int Totl_rows= 2*working_sec;
       int n_spaces = 1;
       //The inside for loop for the patterns inside by looping through the spaces and spaces between 2 characters
       for(int working_row=1;working_row<=Totl_rows;working_row++){
          // conditional statement if considering the upper part of each section section
          if(working_row <=Totl_rows/2){ 
             cout<<setfill(' ')
             <<setw(3+(num_sec-working_sec))       //num_sec is the number of sections
             <<"|";                                //working_sec is the current section on which the loop is running on
             cout<<setw(n_spaces);                 //Totl_rows is the total number of rows in the building
             cout<<setfill(':');
             cout<<"\\";
             cout<<setw(Totl_rows-(2*n_spaces)+1);     // a general formula for the width of the building.
             cout<<setfill(':');
             cout<<"/";
             cout<<setw(n_spaces);
             cout<<"|"
             <<endl;
             n_spaces++; //n_spaces is the number of spaces
          }
          // for the lower part of the each section
          else{
             n_spaces--;                        //n_spaces is the extra whitspace in the ASCII art of hancock building
             cout<<setfill(' ');
             cout<<setw(3+(num_sec-working_sec));
             cout<<"|";
             cout<<setw(n_spaces);
             cout<<setfill(':');
             cout<<"/";
             cout<<setw(Totl_rows - (2*n_spaces)+1);
             cout<<"\\";
             cout<<setfill(':');
             cout<<setw(n_spaces);
             cout<<"|";
             cout<<endl;
          }    
       }
       cout<<setfill(' ')
       <<setw(3+(num_sec- working_sec)) << "/";//the slash and the backslash at the end of each section
       cout<<setfill('-')
       <<setw(Totl_rows +1)
       <<"\\"<<endl;
       
    }
    //the base of the tower
    // the dots are always 4 more than the twice of the number of sections we print
    //the + signs are always 6 more than the twice of the numer of sections we print 
   cout<<(" ");
   for( int i=0; i<((num_sec*2)+4); i++){ // a general formula for the number of dots at the end of the tower
      cout<<'.';
      
   }   
   cout<<endl;
   for( int i=0; i<((num_sec*2)+6); i++){  // ageneral formula for the number of + at the end of the tower
      cout<<'+';
     
   }
   cout<<endl<<endl;
   
        

        
        
        
        
        
        
        
        
        
        
        
    

    
   
   
   
   
   break; //so that the program does not get mixed up
   
   case 3:
        exit(0);   //exits the program
    break;
  }
  



}
