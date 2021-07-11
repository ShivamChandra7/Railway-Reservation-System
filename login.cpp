#include<bits/stdc++.h>
#include<cstdlib>
#include "login.h"

using namespace std;

void login :: getID(){
	char ID[100];
	char password[100];
	cout<<"Enter ID: ";
	cin.ignore();
	cin.getline(ID,100);
	cout<<"Enter your password: ";
	//cin.ignore();
	cin.getline(password,100);
	strcpy(id,ID);
	strcpy(pass,password);
	}
void login :: displayID(){//file handling
	cout<<"Id:";
        puts(id);
        cout<<"Password:";
        puts(pass);
}
