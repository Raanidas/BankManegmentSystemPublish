#include <iostream>
 using namespace std;
 int main(){
 
    int a;
    char b;
    int c,d;
string e,statment;
int NewBalance;
    cout<<"==================Task 7 ==================="<<endl<<endl;
cout << "Enter account no.: ";
cin>> a;
cout << "Enter any account type (C for checking and S for saving): ";
cin>> b;
cout << "Enter any minimum balance required: ";
cin>> c;
cout << "Enter current balance: ";
cin>> d;

int interest;
if(c<d){
   if(b=='S'){
   NewBalance=d-10;
   }
   else{
    NewBalance=d-25;
   }
   statment="Service charges deducted!";
}

if(c>=d){
    if(b=='S'){
interest= d*0.04;
    }
    else{
interest =d*0.03;        
    }
 statment="Interest added!";
NewBalance =d+interest;
}

if(b=='S'){
     e="Save"; 
}
else{
     e="Check";
}
cout << "\n\n===============Details================" << endl;
cout << "\nAccount Number: "<<a << endl;
cout << "Account Type: "<<e << endl;
cout << "Current Balance: "<<d << endl;
cout << "New Balance: "<<NewBalance << endl;
cout << endl<<statment << endl;

return 0;
}