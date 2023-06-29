#include <iostream> 
#include<conio.h>
#include <fstream> 
#include <cstdio>
using namespace std; 
class Computer_details
{
private:
    /* data */
    char *type, *processor;
    unsigned int ram,harddisk,usb_port_count,hdmi_port_count,battery_backup_time;


public:
   void setComputer_details(char *typ,char *processorr, unsigned int ramm,unsigned int hardisk,unsigned int usb,unsigned int hdmi,unsigned int battery){
        type = typ;
        processor=processorr;
        harddisk = hardisk;
        usb_port_count = usb;
        hdmi_port_count = hdmi;
        ram = ramm;
        battery_backup_time = battery;

    }
    char* gettype(){
        return type;
    }
    char* getproceesor(){
        return processor;
    }
    unsigned  int getram(){
        return ram;
    }
    unsigned int getusb(){
        return usb_port_count;
    }
    unsigned int gethdmi(){
        return hdmi_port_count;
    }
    unsigned int getbatterybac(){
        return battery_backup_time;
    }
    unsigned int getsize(){
        return harddisk;
    }
   
};
class Purchase_details
{
private:
    /* data */
    char *person_name,*email,*contact_person,*company_phone,*company_name,*company_email,*purchasing_date;
    unsigned int quantity;
    long long int user_mobilenumber,selle_phone;
public:
   void setPurchase_details(char *person,char *company_phone,char *mail,char *conta_person,char *company_nam,char *com_email,long long int user_phone,char *purchasing_dat,unsigned int quantityy){
        person_name = person;
        email = mail;
        contact_person=conta_person;
        company_name = company_nam;
        company_email = com_email;
        purchasing_date = purchasing_dat;
        user_mobilenumber = user_phone;
        quantity = quantityy;
       

    }
    char* getname(){
        return person_name;
    }
    char* getuser_email(){
        return email;
    }
    long long int getusermobile(){
        return user_mobilenumber;
    }
     long long int getseller_phone(){
        return user_mobilenumber;
    }
    char* getpurchasing_date(){
        return purchasing_date;
    }
    unsigned int getquantity(){
        return quantity;
    }
    char* getcompanyname(){
        return company_name;
    }
    char* getcontactpersonname(){
        return contact_person;
    }
    char* getcontactpersonemail(){
        return company_email;
    }
    char* getcontactpersonphone(){
        return company_email;
    }
    
   
};
class Information:public Purchase_details,public Computer_details
{
    
    
private:
 
public:
    Information(char *person,char *company_phone,char *mail,char *conta_person,char *company_nam,char *com_email,unsigned int user_phone,char *purchasing_dat,unsigned int quantityy,char *typ,char *processorr, unsigned int ramm,unsigned int hardisk,unsigned int usb,unsigned int hdmi,unsigned int battery){
             setPurchase_details(person,company_phone,mail,conta_person,company_nam,com_email, user_phone,purchasing_dat, quantityy);
            setComputer_details(typ,processorr, ramm, hardisk, usb,hdmi,battery);
           
    }
   
};
 void write(Information information){
ofstream file;
file.open("computer_details.txt");
file<<"****Computer Information Portal****\n";
file<<"****Customer Information****\n";

file<<"Customer name : "<<information.getname()<<"\n";
file<<"Customer email : "<<information.getuser_email()<<"\n";
file<<"Customer phone number : "<<information.getusermobile()<<"\n";
file<<"****System Information****\n";

file<<"Date of Purchase  : "<<information.getpurchasing_date()<<"\n";
file<<"Number of System Purchased : "<<information.getquantity()<<"\n";

file<<"Type (Laptop/Desktop)  : "<<information.gettype()<<"\n";
file<<"System Comapny name : "<<information.getcompanyname()<<"\n";
file<<"System Processor : "<<information.getproceesor()<<"\n";
file<<"System Ram : "<<information.getram()<<"gb\n";
file<<"System Size of harddisk : "<<information.getsize()<<"\n";
file<<"Number of usb port : "<<information.getusb()<<"\n";
file<<"Number of hdmi port : "<<information.gethdmi()<<"\n";
file<<"Battery backup : "<<information.getbatterybac()<<"hr\n";

file<<"****Contactperson details****\n";
file<<"Seller name : "<<information.getcontactpersonname()<<"\n";
file<<"Seller  email : "<<information.getcontactpersonemail()<<"\n";


file.close();
}
void read(){
    ifstream file;
    file.open("computer_details.txt");
    char x[100];
    file.seekg(0,ios::beg);
    while (!file.eof())
    {
       file.getline(x,1000,'\n');
       cout<<x<<endl;
    }
    
} 
void modify(){
    ofstream file;
    file.open("vehicle.txt");
    char person[100], company_phone[100],mail[100],conta_person[100],company_nam[100],com_email[100],typ[10],processorr[100],purchasing_dat[100];
   unsigned int quantityy,ramm,hardisk,usb,hdmi,battery;
     unsigned long long int user_phone,seller_phnn ;
   cout<<"Computer Information Portal"<<endl;
   cout<<"Enter Your Name "<<endl;
   cin>>person;
   cout<<"Enter Your Mobile Number "<<endl;
   cin>>user_phone;
   cout<<"Enter Your Email"<<endl;
   cin>>mail;
   cout<<"Enter the date of purchase "<<endl;
   cin>>purchasing_dat;
   cout<<"Enter the quantiy of system you are purchasing"<<endl;
   cin>>quantityy;
   cout<<"Enter the type of System You Have buyed (Laptop/DeskTop)"<<endl;
   cin>>typ;
   cout<<"Enter the name of company of which  System You Have buyed (Laptop/DeskTop)"<<endl;
   cin>>company_nam;
   
   cout<<"Enter the processor of System You Have buyed "<<endl;
   cin>>processorr;
   cout<<"Enter the Ram of System You Have buyed "<<endl;
   cin>>ramm;
   cout<<"Enter the Size of harddisk  of System You Have buyed "<<endl;
   cin>>hardisk;
   cout<<"Enter the number of usb port of System You Have buyed "<<endl;
   cin>>usb;
   cout<<"Enter the number of hdmi port of System You Have buyed "<<endl;
   cin>>hdmi;
   cout<<"Enter the battery backup  of System You Have buyed "<<endl;
   cin>>battery;
   cout<<"Enter the name of person from whom you have purchased the system "<<endl;
   cin>>conta_person;
cout<<"Enter mobile number  of person from whom you have purchased the system "<<endl;
   cin>>com_email;
   Information information(person,company_phone, mail,conta_person,company_nam,com_email,user_phone,purchasing_dat,quantityy,typ,processorr, ramm,hardisk,usb,hdmi,battery);

file<<"****Computer Information Portal****\n";
file<<"****Customer Information****\n";

file<<"Customer name : "<<information.getname()<<"\n";
file<<"Customer email : "<<information.getuser_email()<<"\n";
file<<"Customer phone number : "<<information.getusermobile()<<"\n";
file<<"****System Information****\n";

file<<"Date of Purchase  : "<<information.getpurchasing_date()<<"\n";
file<<"Number of System Purchased : "<<information.getquantity()<<"\n";

file<<"Type (Laptop/Desktop)  : "<<information.gettype()<<"\n";
file<<"System Comapny name : "<<information.getcompanyname()<<"\n";
file<<"System Processor : "<<information.getproceesor()<<"\n";
file<<"System Ram : "<<information.getram()<<"gb\n";
file<<"System Size of harddisk : "<<information.getsize()<<"\n";
file<<"Number of usb port : "<<information.getusb()<<"\n";
file<<"Number of hdmi port : "<<information.gethdmi()<<"\n";
file<<"Battery backup : "<<information.getbatterybac()<<"hr\n";

file<<"****Contactperson details****\n";
file<<"Seller name : "<<information.getcontactpersonname()<<"\n";
file<<"Seller  email : "<<information.getcontactpersonemail()<<"\n";


    file.close();
    int result = remove("computer_details.txt");

   
    result = rename("vehicle.txt","computer_details.txt");
     
 
}
int main(int argc, const char** argv) {
   // Information information();
   char person[100], company_phone[100],mail[100],conta_person[100],company_nam[100],com_email[100],typ[10],processorr[100],purchasing_dat[100];
   unsigned quantityy,ramm,hardisk,usb,hdmi,battery;
     unsigned long long int user_phone,seller_phnn ;
   cout<<"Computer Information Portal"<<endl;
   cout<<"Enter Your Name "<<endl;
   cin>>person;
   cout<<"Enter Your Mobile Number "<<endl;
   cin>>user_phone;
   cout<<"Enter Your Email"<<endl;
   cin>>mail;
   cout<<"Enter the date of purchase "<<endl;
   cin>>purchasing_dat;
   cout<<"Enter the quantiy of system you are purchasing"<<endl;
   cin>>quantityy;
   cout<<"Enter the type of System You Have buyed (Laptop/DeskTop)"<<endl;
   cin>>typ;
   cout<<"Enter the name of company of which  System You Have buyed (Laptop/DeskTop)"<<endl;
   cin>>company_nam;
   
   cout<<"Enter the processor of System You Have buyed "<<endl;
   cin>>processorr;
   cout<<"Enter the Ram of System You Have buyed "<<endl;
   cin>>ramm;
   cout<<"Enter the Size of harddisk  of System You Have buyed "<<endl;
   cin>>hardisk;
   cout<<"Enter the number of usb port of System You Have buyed "<<endl;
   cin>>usb;
   cout<<"Enter the number of hdmi port of System You Have buyed "<<endl;
   cin>>hdmi;
   cout<<"Enter the battery backup  of System You Have buyed "<<endl;
   cin>>battery;
   cout<<"Enter the name of person from whom you have purchased the system "<<endl;
   cin>>conta_person;
cout<<"Enter mobile number  of person from whom you have purchased the system "<<endl;
   cin>>com_email;
   
    Information information(person,company_phone, mail,conta_person,company_nam,com_email,user_phone,purchasing_dat,quantityy,typ,processorr, ramm,hardisk,usb,hdmi,battery);
write(information);
int a;
cout<<"Enter 1 to read data \n Enter 2 to modify data \n Enter 3 to delete data\n Enter 4 to exit\n"<<endl;
cin>>a;
while (a!=0)
{
   
switch (a)
{
case 1:
read();
    break;
    case 2:
    modify();
    break;
    case 3:
    remove("computer_details.txt");
    break;

default:
    break;
}
cin>>a;
}

    return 0;
}