#include<iostream>
using namespace std;
int main(){
	int currentsallary,yearlyincrement,bonus,years,yearlyincrementpercent;
	string validity;
	cout<<"enter current sallary: ";
	cin>>currentsallary; 
	cout<<"Enter the increment you want to give to employs each year: ";
	cin>>yearlyincrementpercent;
	cout<<"enter the years: ";
	cin>>years;
	//cout<<"Enter 'yes' if employ is elligible for bonus: ";
	//cin>>validity;
		cout<<"\nyearly increment will be "<<yearlyincrementpercent<<"%: ";
	for(int i=1;i<=years;i++){
yearlyincrement=currentsallary*(yearlyincrementpercent/100);
coutd<<yearlyincrement;
currentsallary=currentsallary+yearlyincrement;
	cout<<"\nenter yes if user is elligible for bonus: ";
	cin>>validity;
	if("yes"){
	bonus=yearlyincrement*0.02;
	currentsallary=currentsallary+bonus;
	cout<<"\nsallary of employs after bonus: "<<bonus;	
	}
cout<<currentsallary;		
	}
	
}
