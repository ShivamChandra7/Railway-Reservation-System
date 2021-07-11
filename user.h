#ifndef __user
#define __user

#include"login.h"
#include"traindetails.h"
#include"cancellation.h"
#include"reservation.h"
#include<bits/stdc++.h>

using namespace std;

class user{
public:
	char f[10]="f";
	char s[10]="s";
	int addr,ad,flag,f1,d,m,i,amt;
	float tamt;
	void userlogin();
	void reserve();
	void cancell();
	void enquiry();
	void can();
	void res();

};

#endif
