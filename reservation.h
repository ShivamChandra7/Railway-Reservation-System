#ifndef __reser
#define __reser
#include<bits/stdc++.h>

using namespace std;

class reser{
	public:
    long long int pnr;
    int tno;
    char tname[100];
    char bp[10];
    char dest[100];
    char pname[10][100];
    int age[20];
    char clas[10];
    int nosr;
    int i;
    int d,m,y;
    int con;//concession catgory
    float amc; 
		void getRes();
		void displayRes();
};
#endif
