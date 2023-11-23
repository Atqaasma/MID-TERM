#include<iostream>
using namespace std;
int main(){
double currentsallary, yearlyincrementpercentage, bonus, years, incrementedsallary;
string validity;
cout<<"enter current sallary: ";
cin>>currentsallary;
cout<<"increment (in percentage) employs get each year: ";
cin>> yearlyincrementpercentage;
cout<<"Enter years: ";
cin>>years;

for(int i=1; i<=years ; i++){
currentsallary=currentsallary+currentsallary*(yearlyincrementpercentage/100);
cout<<"\nIncremented sallary: "<<currentsallary;
cout<<"\nEnter 'yes' if employ is valid for bonus in "<<i<<"st/nd/rd year:";
cin>>validity;
if(validity=="yes"){
    currentsallary=currentsallary+(currentsallary*0.02);
}
cout<<"\nSallary in "<<i<<"st/nd/rd year is: "<<currentsallary;
}
	
}
