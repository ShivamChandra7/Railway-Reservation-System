#include<bits/stdc++.h>
#include "reservation.h"

using namespace std;

void reser :: getRes(){
        cout<<"Enter the details as follows\n";
        cout<<"Train no: ";
        cin>>tno;
	cin.ignore();
        cout<<"Train name: ";
        cin.getline(tname,100);
        cout<<"Boarding point: ";
	//cin.ignore();
        cin.getline(bp,10);
        cout<<"Destination pt: ";
	//cin.ignore();
        cin.getline(dest,100);
        cout<<"No of seats required: ";
        cin>>nosr;
	cin.ignore();
        for(i=0; i<nosr ; i++)
        {
            cout<<"Passenger name: ";
            cin.getline(pname[i],100);
            cout<<"Passenger age: ";
            cin>>age[i];
	    cin.ignore();
        }
        cout<<"Enter the class f-first class s-second class: ";
	//cin.ignore();
        cin.getline(clas,10);
        cout<<"Date of travel:";
        cin>>d>>m>>y;
        cout<<"Enter the concession category\n";
        cout<<"1.Military\n2.Senior citizen\n";
        cout<<"3.Children below 5 yrs\n4.None\n";
        cin>>con;
        cout<<"............END OF GETTING DETAILS............\n";
}
void reser:: displayRes(){
	cout<<"...............................................\n";
        cout<<"...............................................\n";
	cout<<"PNR No: "<<pnr;
        cout<<"\nTrain no:"<<tno;
        cout<<"\nTrain name:";
        puts(tname);
        cout<<"Boarding point:";
       	puts(bp);
        cout<<"Destination pt:";
        puts(dest);
        cout<<"No of seats reserved: "<<nosr;
        for(i=0; i<nosr; i++)
        {	cout<<'\n';
            cout<<"Passenger name:";
            puts(pname[i]);
	    cout<<'\t';
            cout<<"Passenger age:"<<age[i];
        }

        cout<<"\nYour class:";
        puts(clas);
        cout<<"\nDate of reservation:"<<d<<"-"<<m<<"-"<<y;
        cout<<"\nYour concession category:"<<con;
        cout<<"\nYou must pay:"<<amc<<endl;
        cout<<"***********************************************\n";
        cout<<".........END OF RESERVATION.................\n";
        cout<<"***********************************************\n";
    }

