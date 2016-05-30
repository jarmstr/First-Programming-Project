# include <iostream>

using namespace std;

int main()
{
    int feet1, feet2, inches1, inches2;
    float sum_of_feets, sum_of_inches, total;
    
    cout<< "Please Enter the first feet and inches: ";  
    cin>>feet1;
    cin>>inches1;
    cout<< "\nPlease Enter the second feet and inches:";  
    cin>>feet2;
    cin>>inches2;
    sum_of_feets = (feet1 + feet2)+(inches1 + inches2) / 12;
    sum_of_inches = (inches1 + inches2) % 12;
    total = sum_of_feets + (sum_of_inches/12.0);
    cout<< "\nTotal measurement is = "<<  total <<endl;
    cout<< " feet = "<< sum_of_feets<< " inches = " << sum_of_inches <<endl;
   // cout <<"you have entered "<<a<<endl;
system ("PAUSE");
return 0;
}

