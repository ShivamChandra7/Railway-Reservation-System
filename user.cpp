#include"user.h"
#include"login.h"
#include"traindetails.h"
#include"reservation.h"
#include"cancellation.h"
#include<bits/stdc++.h>

using namespace std;


    void user:: userlogin()
     {
    login a;
    int ch;
    cout<<"*****************************************************\n";
    cout<<"***********WELCOME TO THE USER MENU**\n";
    cout<<"****************************************************\n";
    char password[100];
    fstream f;
    f.open("id.txt",ios::in|ios::out|ios::binary);
    char id[100];
    cout<<"Enter your ID: ";
    cin.ignore();
    cin.getline(id,100);
    cout<<"Enter your password: ";
   // cin.ignore();
    cin.getline(password,100);
    while(f.read((char *) & a,sizeof(a)))
    {
        if((strcmp(a.id,id)==0)&&(strcmp(a.pass,password)==0))
        {
            do
            {
                cout<<"1.Reserve\n2.Cancell\n3.Enquiry\n4.Return to the main menu\n";
                cout<<"Enter your choice:";
                cin>>ch;
                cout<<endl;
                switch(ch)
                {
                case 1:
                    reserve();
                    break;
                case 2:
                    cancell();
                    break;
                case 3:
                    enquiry();
                    break;
                }
            }
            while(ch<=3);
            goto j;
        }
        else
        {
            d=1;
        }
    }
    if(d==1)
    {
        cout<<"Enter your user id d password correctly\n";
    }
    j:
    ;
    }
    void user:: reserve()
    {
         int ch;
    do
    {
        cout<<"1.Reserve\n2.Return to the main menu\n";
        cout<<"Enter your choice:";
        cin>>ch;
        cout<<endl;
        switch(ch)
        {
        case 1:
            res();
            break;
        }
    }
    while(ch==1);
    }

     void user:: res()
     {
    traindetails a;
    reser b;
    fstream f1,f2;
    time_t t;
    f1.open("t.txt",ios::in|ios::out|ios::binary);
    f2.open("p.txt",ios::in|ios::out|ios::binary|ios::app);
    int ch;
    b.getRes();
    while(f1.read((char *) &a,sizeof(a)))
    {
        if(a.tno==b.tno)
        {
            if(strcmp(b.clas,f)==0)
            {
                if(a.nf1>=b.nosr)

                {
                    amt=a.fare1;
                    addr=f1.tellg();
                    ad=sizeof(a.nf1);
                    f1.seekp(addr-(7*ad));
                    a.nf1=a.nf1-b.nosr;
                    f1.write((char *) & a.nf1,sizeof(a.nf1));
                    if(b.con==1)
                    {
                        cout<<"Concession category:MILITARY PERSONNEL\n";

                        b.amc=b.nosr*((amt*50)/100);
                    }
                    else if(b.con==2)
                    {
                        cout<<"Concession category:SENIOR CITIZEN\n";
                        b.amc=b.nosr*((amt*60)/100);
                    }
                    else if(b.con==3)
                    {
                        cout<<"Concession category:CHILDERN BELOW FIVE\n";
                        b.amc=0.0;
                    }
                    else if(b.con==4)
                    {
                        cout<<"You cannot get any concession\n";
                        b.amc=b.nosr*amt;
                    }
                    srand((unsigned) time(&t));
                    b.pnr=rand();
                    f2.write((char *) & b,sizeof(b));
                    b.displayRes();
                    cout<<"------------------------------------------------------\n";
                    cout<<"--------------Your ticket is reserved-----------\n";
		    //cout<<"Your PNR is: "<<b.pnr<<'\n';
                    cout<<"-------------End of reservation menu------------\n";
                }
                else
                {
                    cout<<"*********Sorry req seats not available********\n";

                }
            }
            else if(strcmp(b.clas,s)==0)
            {
                if(a.nf2>=b.nosr)
                {
                    amt=a.fare2;
                    addr=f1.tellg();
                    ad=sizeof(a.nf2);
                    f1.seekp(addr-(5*ad));
                    a.nf2=a.nf2-b.nosr;
                    f1.write((char *) & a.nf2,sizeof(a.nf2));
                    if(b.con==1)
                    {
                        cout<<"Concession category:MILITARY PRESONNEL\n";
                        b.amc=b.nosr*((amt*50)/100);
                    }
                    else if(b.con==2)
                    {
                        cout<<"Concession category:SENIOR CITIZEN\n";
                        b.amc=b.nosr*((amt*60)/100);
                    }
                    else if(b.con==3)
                    {
                        cout<<"Concession category:CHILDERN BELOW FIVE\n";
                        b.amc=0.0;
                    }
                    else if(b.con==4)
                    {
                        cout<<"You cannot get any concession\n";
                        b.amc=b.nosr*amt;
                    }
                    f2.write((char *) & b,sizeof(b));
                    b.displayRes();
                    cout<<"---------------------------------------\n";
                    cout<<"--------Your ticket is reserved--------\n";
                    cout<<"-----------End of reservation----------\n";
                }
                else


                {
                    cout<<"********Sorry req no of seats not available*******\n";
                }
            }
            goto h;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        cout<<"............Wrong train no......................\n";
        cout<<"......Enter the train no from the data base.....\n";
    }
    f1.close();
    f2.close();
h:
;
}
     void user:: enquiry()
{
    fstream f;
    f.open("t.txt",ios::in|ios::out|ios::binary);
    traindetails a;
    while(f.read((char *) & a,sizeof(a)))
    {
        a.displayDetails();
    }
}
     void user::cancell()
     {
         int ch;
    do
    {
        cout<<".................CANCELLATION MENU.........\n";
        cout<<"1.Cancell\n2.Return to the main menu\n";
        cout<<"Enter your choice:";
        cin>>ch;
        cout<<endl;
        switch(ch)
        {
        case 1:
            can();
            break;
        }
    }
    while(ch==1);
     }
     void user::can()
     {
    traindetails a;
    reser b;
    canc c;
    fstream f1,f2,f3;
    f1.open("t.txt",ios::in|ios::out|ios::binary);
    f2.open("p.txt",ios::in|ios::out|ios::binary);
    f3.open("cn.txt",ios::in|ios::out|ios::binary);
    cout<<"**********CANCELLATION MENU*********\n";
    c.getcancdet();
    while(f2.read((char *) & b,sizeof(b)))
    {
        if(b.pnr==c.pnr)
        {
            c.tno=b.tno;
            strcpy(c.tname,b.tname);
            strcpy(c.bp,b.bp);
            strcpy(c.dest,b.dest);
            c.nosc=b.nosr;
            for(int j=0; j<c.nosc; j++)
            {
                strcpy(c.pname[j],b.pname[j]);
                c.age[j]=b.age[j];
            }
            strcpy(c.clas,b.clas);
            if(strcmp(c.clas,f)==0)
            {
                while(f1.read((char *) & a,sizeof(a)))
                {

                    if(a.tno==c.tno)
                    {
                        a.nf1=a.nf1+c.nosc;
                        d=a.d;
                        m=a.m;
                        addr=f1.tellg();
                        ad=sizeof(a.nf1);
                        f1.seekp(addr-(7*ad));
                        f1.write((char *) & a.nf1,sizeof(a.nf1));
                        tamt=b.amc;
                        if((c.d==d)&&(c.m==m))
                        {
                            cout<<"You are cancelling at the date of departure\n";
                            c.amr=tamt-((tamt*60)/100);
                        }
                        else if(c.m==m)
                        {
                            cout<<"You are cancelling at the month of departure\n";
                            c.amr=tamt-((tamt*50)/100);
                        }
                        else if(m>c.m)
                        {
                            cout<<"You are cancelling one month before the date of departure\n";
                            c.amr=tamt-((tamt*20)/100);
                        }
                        else
                        {
                            cout<<"Cancelling after the departure\n";
                            cout<<"Your request cannot be completed\n";
                        }
                        goto h;
                        c.displaycancdet();
                    }
                }
            }
            else if(strcmp(c.clas,s)==0)
            {
                while(f1.read((char *) & a,sizeof(a)))
                {

                    if(a.tno==c.tno)
                    {
                        a.nf2=a.nf2+c.nosc;
                        d=a.d;
                        m=a.m;
                        addr=f1.tellg();
                        ad=sizeof(a.nf2);
                        f1.seekp(addr-(5*ad));
                        f1.write((char *) & a.nf2,sizeof(a.nf2));
                        tamt=b.amc;
                        if((c.d==d)&&(c.m==m))
                        {
                            cout<<"You are cancelling at the date of departure\n";
                            c.amr=tamt-((tamt*60)/100);
                        }
                        else if(c.m==m)
                        {
                            cout<<"You are cancelling at the month of departure\n";
                            c.amr=tamt-((tamt*50)/100);
                        }
                        else if(m>c.m)
                        {
                            cout<<"You are cancelling one month before the date of departure\n";
                            c.amr=tamt-((tamt*20)/100);
                        }
                        else
                        {
                            cout<<"Cancelling after the departure\n";
                            cout<<"Your request cannot be completed\n";
                        }
                        goto h;
                        c.displaycancdet();
                    }
                }
            }
        }
        else
        {
            flag=0;

        }
    }
h:
    if(flag==0)
    {
        cout<<"Enter the correct pnr no\n";
    }
    f1.close();
    f2.close();
    f3.close();
     }
     

