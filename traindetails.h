#ifndef __traindetails
#define __traindetails
#include<bits/stdc++.h>

using namespace std;

class traindetails{
	public:
		 int tno;
    char tname[100];

    char bp[100];
    char dest[100];
    int nf1,fare1;
    int nf2,fare2;
    int d,m,y;//fare First Class ,fare Second Class
		void getDetails();
		void displayDetails();
};
#endif
