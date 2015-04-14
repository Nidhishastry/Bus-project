//
//  main.cpp
//  bus_1
//
//  Created by Kumar Divya  Rajat on 14/04/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include<iostream>
using namespace std;

int r=0,p=0,k=20;
float allsell=0;

class bus{
    
    char arriva[9],deprt[9],from[9],to[9],pname[99];
    int busn,dtym,tseat,fair,s;
public:
    void install();
    void show();
    void book();
    void exit();
    
    
}b[8];

void bus::install(void)
{
    
    
    cout<<"Enter Bus No:"<<endl;
    cin>>busn;
    cout<<"From: "<<endl;
    cin>>from;
    cout<<"To: "<<endl;
    cin>>to;
    cout<<"Departure: "<<endl;
    cin>>dtym;
    cout<<"Total seats: "<<endl;
    cin>>tseat;
    
    p++;
    
}

void bus::show(void)
{
    cout<<"Total buses in database :"<<endl;
    for(int i=0;i<p;i++)
    {
        cout<<"Bus No: ";
        cout<<b[i].busn<<endl;
        
        cout<<"From: ";
        cout<<b[i].from<<endl;
        
        cout<<"To: ";
        cout<<b[i].to<<endl;
        
        cout<<"Departure: ";
        cout<<b[i].dtym<<" O'clock"<<endl;
        
        cout<<"Seats: ";
        cout<<b[i].tseat<<endl<<endl<<endl;
        
    }
}


void bus::book(void)
{
    int number;
    float fair;
    cout<<"Enter Bus No: ";
    cin>>number;
    int n;
    for(n=0;n<p;n++)
    {
        if(b[n].busn==number)
        {
            if(b[n].tseat<=0)
            {
                cout<<"\tSORRY!"<<endl<<"\tNo  Seat Avleable\t";
            }
            else
            {
                cout<<endl<<"Total seat avleabile: "<<b[n].tseat;
                cout<<endl<<"Enter Passenger Name: ";
                cin>>pname;
                cout<<endl<<"How many seats: ";
                cin>>s;
                while((b[n].tseat=b[n].tseat-s)<0)
                {cout<<endl<<"Limit Exceed...Please re-enter ";
                    b[n].tseat=b[n].tseat+s;
                    cin>>s;
                    
                    
                }
                
                
                cout<<endl<<"Your parched is completed"<<endl;
               
               
                cout<<"Bus No: ";
                cout<<b[n].busn<<endl;
               
               
                cout<<"From: ";
                cout<<b[n].from<<" to "<<b[n].to<<endl;
               
               
                cout<<"Departure: ";
                cout<<b[n].dtym<<" O'clock"<<endl;
               
               
                cout<<"Total seat: ";
                cout<<s<<endl;
                fair=300*s;
                fair=fair+(fair*.7);
                allsell=allsell+fair;
               
               
                cout<<"Total Fair(with 7%vat): ";
                
                cout.setf(ios::showpoint);
                cout.precision(3);
                cout.setf(ios::fixed,ios::floatfield);
                cout.width(8);
                cout<<fair<<endl;
                
               
               
                cout<<"Thank You"<<endl<<endl;
                
            }
        }
    }
    
    
}

int main()
{
    
    
    
    
    int w,g=1;
    while(g){
        cout<<"*****************************************************"<<endl;
        cout<<"******* *******"<<endl;
        cout<<"* Bus Reservation System *"<<endl;
        cout<<"* BMSCE Transport Corp. *"<<endl;
        cout<<"******* *******"<<endl;
        cout<<"*****************************************************"<<endl;
        
        cout<<"\t\t\t 1.Install\n\t\t\t 2.Show\n\t\t\t 3.Book \n\t\t\t 4.Exit";
        cout<<"\n\t\t\t Enter your choice:-> ";
        cin>>w;
        switch(w){
            case 1:
                b[p].install();
                
                break;
            case 2:
                b[0].show();
                break;
            case 3:
                b[p].book();
                
                break;
            case 4:
            {
                g=0;
                
                cout<<endl<<"Total Sell:"<<allsell<<endl<<"******Thank You******"<<endl;
                break;
            }
        }
    }
    return 0;
}