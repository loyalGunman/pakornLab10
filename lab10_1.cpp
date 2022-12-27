#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main()
{
    double L,R,A;
	cout << "Enter initial loan: ";
    cin >> L;
	cout << "Enter interest rate per year (%): ";
    cin >> R;
	cout << "Enter amount you can pay per year: ";
    cin >> A;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
int i=1;
	    do
	    {
        if(L == 0)break;
        cout << fixed << setprecision(2); 
	    cout << setw(13) << left << i; 
	    cout << setw(13) << left << L;
	    cout << setw(13) << left << L*R/100;
	    cout << setw(13) << left << L+(L*R/100);
        if (L+(L*R/100) < A)
        {
            A = L+(L*R/100);
        }
	    cout << setw(13) << left << A;
	    cout << setw(13) << left << (L+(L*R/100))-A;
	    cout << "\n";
        L = (L+(L*R/100))-A;
        i++;
        }while(L > 1); 
        
	return 0;
	
	}