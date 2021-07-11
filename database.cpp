#include<bits/stdc++.h>
#include "database.h"
#include "traindetails.h"
#include "login.h"
#include"reservation.h"
#include<iterator>
using namespace std;

/*database :: database(){
	this->apass="admin123";
}*/

void database :: checkPass(char password[]){
	if(!strcmp(password,apass)){
		adminmenu();
	}
	else
		cout<<"Invalid Password!!!\n";
	return;
}
void database :: manage(){
	int ch;
	fstream f;
	login a;
    char c;
	cout<<".........WELCOME TO THE USER MANAGEMENT MENU........\n";
	do
	{
        cout<<"1.Create ID data base\n2.Add ID\n";
        cout<<"3.Display details\n4.Return to the main menu\n";
        cout<<"Enter your choice:";
        cin>>ch;
        cout<<endl;
        switch(ch)
        {
        case 1:
            f.open("id.txt",ios::out|ios::binary);
            do
            {
                a.getID();
                f.write((char *) & a,sizeof(a));
                cout<<"Do you want to add one more record\n";
                cout<<"y-Yes\nn-No\n";
                cin>>c;
            }while(c=='y');
            f.close();
            break;
        case 2:
            f.open("id.txt",ios::in|ios::out|ios::binary|ios::app);
	    do{
            	a.getID();
            	f.write((char *) & a,sizeof(a));
	    	cout<<"Do you want to add one more record\n";
            	cout<<"y-Yes\nn-No\n";
		cin>>c;
	    }while(c=='y');
            f.close();
            break;
        case 3:
            f.open("id.txt",ios::in|ios::out|ios::binary);
            f.seekg(0);
            while(f.read((char *) & a,sizeof(a)))
            {
                a.displayID();
            }
            f.close();
	    cout<<'\n';
            break;
        }
    }
    while(ch<=3);
 	}
void database :: adminmenu(){
	cout<<"...........ADMINISTRATOR MENU...........\n";
        cout<<"1.Create detail data base\n2.Add details\n";
        cout<<"3.Display details\n4.User management\n";
        cout<<"5.Display passenger details\n6.Return to main menu\n";
        cout<<"Enter your choice:";
	char c;
    int ch;
	fstream f;
       
	traindetails a;
	database d;
    
     do{
         cin>>ch;
        cout<<endl;
        switch(ch)
        {
            case 1:
                f.open("t.txt",ios::out|ios::binary);
                do
                {
                    a.getDetails();
                    f.write((char *) & a,sizeof(a));
                    cout<<"Do you want to add one more record?\n";
                    cout<<"y-for Yes\nn-for No\n";
                    cin>>c;
                }while(c=='y');
		goto k;
                //f.close();
               // break;
            case 2:
		do{
			f.open("t.txt",ios::in|ios::out|ios::binary|ios::app);
                	a.getDetails();
                	f.write((char *) & a,sizeof(a));
			cout<<"Do you want to add one more record?\n";
                        cout<<"y-for Yes\nn-for No\n";
			cin>>c;
		}while(c=='y');
			goto k;
                	//f.close();
                //break;
            case 3:
                f.open("t.txt",ios::in|ios::out|ios::binary|ios::app);
                f.seekg(0);
                while(f.read((char *) & a,sizeof(a)))
                {
                    a.displayDetails();
                }
		goto k;
                //f.close();
               // break;
            case 4:
                d.manage();
		goto k;
                //break;
            case 5:
                d.displaypassdetail();
		goto k;
                //break;
            }
        }while(ch<=5);
k:
        f.close();
	}
void database :: displaypassdetail(){ //diplays passenger detail
    fstream f;
    reser b;
    f.open("p.txt",ios::in|ios::out|ios::binary);
    f.seekg(0);
    while(f.read((char *) & b,sizeof(b)))
    {
        b.displayRes();
    }
    f.close();
}
