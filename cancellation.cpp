#include<bits/stdc++.h>
#include"cancellation.h"

using namespace std;

void canc :: getcancdet()
    {
        cout<<"Enter the details as follows\n";
        cout<<"Pnr no:";
        cin>>pnr;
        cout<<"Date of cancellation: ";
        cin>>d>>m>>y;
        cout<<"...........END OF GETTING DETAILS...........\n";
    }
void canc ::displaycancdet()
    {
        cout<<"...........................................\n";
        cout<<"...........................................\n";
        cout<<"Pnr no: "<<pnr;
        cout<<"\nTrain no: "<<tno;
        cout<<"\nTrain name: ";
        puts(tname);
        cout<<"Boarding point: ";
        puts(bp);

        cout<<"Destination pt: ";
        puts(dest);
        cout<<"\nYour class: ";
        puts(clas);
        cout<<"no of seats to be cancelled: "<<nosc;
        for(i=0; i<nosc; i++)
        {
            cout<<"Passenger name: ";
            puts(pname[i]);
            cout<<"passenger age: "<<age[i];
        }
        cout<<"\nDate of cancellation: "<<d<<"-"<<m<<"-"<<y;
        cout<<"\nYou can collect: "<<amr<<"rs"<<endl;
        cout<<"*****************************************\n";
        cout<<".........END OF CANCELLATION.............\n";
        cout<<"*****************************************\n";
    }

