//
//  main.cpp
//  Bus reservation system.
//
//  Created by Kruthika Ramesha and Kumar Divya  Rajat on 14/04/15.
// 
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
    
    
}b[8];                                          //Array of 8 bus objects. A different way to initialize the number of 
                                                // the objects. This can also be done in the main function.
void bus::install(void)                        
{                                               // The install method. It is best used by the admin who can add new 
                                                // with all the properties such as Bus number, Source, Destination, 
                                                //departure time and total number of seats.
    cout<<"Enter Bus No:"<<endl;                // The bus number for a new instance of the class Bus.
    cin>>busn;
    cout<<"From: "<<endl;                       // The source for a new instance of the class Bus.
    cin>>from;
    cout<<"To: "<<endl;                          // The destination for a new instance of the class Bus.
    cin>>to;
    cout<<"Departure: "<<endl;                   // The departure time for a new instance of the class Bus.
    cin>>dtym;
    cout<<"Total seats: "<<endl;                 // The total number of seats  for a new instance of the class Bus.
    cin>>tseat;
    
    p++;                                         //Keeps count of the number of objects instantiated.
    
}

void bus::show(void)                            // A display function which shows all the buses in the database.
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


void bus::book(void)                  //The booking method of the Bus class. 
{
    int number;
    float fair;
    cout<<"Enter Bus No: ";
    cin>>number;
    int n;
    for(n=0;n<p;n++)                 
    {
        if(b[n].busn==number)            // Matches the bus number with the already created instances of bus class.
        {
            if(b[n].tseat<=0)           //Checks if seats are available.
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
                
                
                cout<<endl<<"Your ticket reservation is completed"<<endl;
               
                                                     //Prints the ticket details in human readable form.
                cout<<"Bus No: ";
                cout<<b[n].busn<<endl;
               
               
                cout<<"From: ";
                cout<<b[n].from<<" to "<<b[n].to<<endl;
               
               
                cout<<"Departure: ";
                cout<<b[n].dtym<<" O'clock"<<endl;
               
               
                cout<<"Total seat: ";
                cout<<s<<endl;
                fare=300*s;
                fare=fare+(fare*.7);
                allsell=allsell+fare;
               
               
                cout<<"Total Fare(with 7%vat): ";
                cout<<fare<<endl;
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
