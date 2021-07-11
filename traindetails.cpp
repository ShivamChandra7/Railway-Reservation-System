#include<bits/stdc++.h>
#include "traindetails.h"

using namespace std;

void traindetails :: getDetails(){
	 cout<<"Enter the details as follows\n";
        cout<<"Train no:";
        cin>>tno;
	
        cout<<"Train name:";
	cin.ignore();
        cin.getline(tname,100);
	
        cout<<"Boarding point:";
	//cin.ignore();
        cin.getline(bp,100);
	
        cout<<"Destination pt:";
	//cin.ignore();
        cin.getline(dest,100);
	
        cout<<"No of seats in first class & fare per ticket:";
        cin>>nf1>>fare1;
        cout<<"No of seats in second class & fare per ticket:";
        cin>>nf2>>fare2;
        cout<<"Date of travel:";
        cin>>d>>m>>y;
}
void traindetails :: displayDetails(){
	// cout<<"TrainNo	TrainName	Boarding	Destination	Seats(I)	Fare(I)	Seats(II)	Fare(II)	Date\n\n";
	cout<<"TrainNo: "<<tno<<"\n"<<"TrainName: "<<tname<<"\n"<<"BoardinPoint: "<<bp<<"\n"<<"Destination: "<<dest<<"\n";
        cout<<"Seats(1st): "<<nf1<<"\tFare(1st): "<<fare1<<"\n"<<"Seats(2nd): "<<nf2<<"\t"<<"Fare(2nd): "<<fare2<<"\n";
	cout<<"Date: "<<d<<"-"<<m<<"-"<<y<<"\n"<<endl<<'\n';
}
