#ifndef __database
#define __database
#include<bits/stdc++.h>
#include "traindetails.h"
#include "login.h"

using namespace std;

class database{
	private :
	const char apass[9]="admin123";
		
	public :
		void checkPass(char password[]);
		void manage();
		void adminmenu();
		void displaypassdetail();
};
#endif



