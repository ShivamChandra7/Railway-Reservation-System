#include<bits/stdc++.h>
#include"traindetails.h"
#include"database.h"
#include "user.h"

using namespace std;

int main()
{
database D;
user U;
int ch;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<".......WELCOME TO RAILWAY RESERVATION SYSTEM..........\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    do
    {
        cout<<"^^^^^^^^^^^^^^^^^^^^^^MAIN MENU^^^^^^^^^^^^^^^^^^^^\n";
        cout<<"1.Admin mode\n2.User mode\n3.Exit\n";
        cout<<"Enter your choice:";
        cin>>ch;
        cout<<endl;
        switch(ch)
        {
        case 1:
            char password[100];
	    cout<<"Enter Password: ";
	    cin.ignore();
	    cin.getline(password,100);
	    D.checkPass(password);
	    break;
        case 2:
            U.userlogin();
            break;
        case 3:
            exit(0);
        }
    }
    while(ch<=3);
g:
    ;
    
}
