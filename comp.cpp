#include<iostream>
#include<string>
#include<fstream>
#include <climits>
using namespace std;

class computer{
public:
    string type[50],processor[50],time[50];
    int ram[50],usb[50],hdmi[50],hardisk[50];
};
class person{
public:
    string pname[50],mobile[50],email[50],date[50];
};
class company{
public:
  string cname[50],pname[50],mobile[50],email[50],date[50];
  int quantity[50];
};
int main(){
person s1;
company s2;
computer s3;
int y,n1,n2,n3,a,m=0,j;
unsigned int z;
cout<<"welcome to the electronic market:"<<endl;
cout<<"do you want to purchase:"<<endl;
cout<<"1.PURCHASE AS A PERSON:"<<endl;
cout<<"2.PURCHASE AS A COMPANY:"<<endl;
cin>>y;
while (cin.fail()||y<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;

        cin>>y;
    }
ofstream file;
file.open("store.txt");
if(y==1){
    cout<<"enter the number of entities:"<<endl;
    cin>>n1;
    for(int i=0;i<n1;i++){
    file<<endl;
    cout<<"detailes of a person id:"<<i+1<<endl;
    file<<"detailes of a person id:"<<i+1<<endl;
    cout<<"name of person:"<<endl;
    cin>>s1.pname[i];
    file<<"name of the person:"<<s1.pname[i]<<endl;
    cout<<"mobile of person:"<<endl;
    cin>>s1.mobile[i];
    file<<"mobile of the person:"<<s1.mobile[i]<<endl;
    cout<<"email of the person:"<<endl;
    cin>>s1.email[i];
    file<<"email of the person:"<<s1.email[i]<<endl;
    cout<<"date of purchase:"<<endl;
    cin>>s1.date[i];
    file<<"date of purchase:"<<s1.date[i]<<endl;

    file<<"computer detailes:"<<endl;
    cout<<"type:"<<endl;
    cout<<"1.desktop\n2.laptop"<<endl;
    cin>>z;
    while (cin.fail()||z<=0||z>2)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>z;
    }
    if (z==1)
    {
        s3.type[i] = "desktop";
        s3.time[i] = "NA";
    }
    if (z==2)
    {
        s3.type[i] = "laptop";
        cout<<"battery backup of the device(in hrs):"<<endl;
        cin>>s3.time[i];
        //file<<"battery backup of the device:"<<s3.time[i]<<endl;
    }
    file<<"type(desktop/laptop):"<<s3.type[i]<<endl;
    cout<<"processor(Intel/Ryzen):"<<endl;
    cin>>s3.processor[i];
    file<<"processor :"<<s3.processor[i]<<endl;
    cout<<"ram in GB:"<<endl;
    cin>>s3.ram[i];
    while (cin.fail()||s3.ram[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.ram[i];
    }
    file<<"ram in GB:"<<s3.ram[i]<<endl;
    cout<<"hardisk in TB:"<<endl;
    cin>>s3.hardisk[i];
    while (cin.fail()||s3.hardisk[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.hardisk[i];
    }
    file<<"hardisk in TB :"<<s3.hardisk[i]<<endl;
    cout<<"number of usb ports:"<<endl;
    cin>>s3.usb[i];
    while (cin.fail()||s3.usb[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.usb[i];
    }
    file<<"number of usb ports :"<<s3.usb[i]<<endl;
    cout<<"number of hdmi ports:"<<endl;
    cin>>s3.hdmi[i];
    while (cin.fail()||s3.hdmi[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.hdmi[i];
    }
    file<<"number of hdmi ports:"<<s3.hdmi[i]<<endl;
    file<<"battery backup of the device:"<<s3.time[i]<<endl;
}
}
if(y==2){
    cout<<"enter the number of entities:"<<endl;
    cin>>n2;
    for(int i=0;i<n2;i++){
    cout<<"detailes of a company id:"<<i+1<<endl;
    file<<"detailes of a company id:"<<i+1<<endl;
    cout<<"name of the company:"<<endl;
    cin>>s2.cname[i];
    file<<"name of the company :"<<s2.cname[i]<<endl;

    cout<<"name of the contact person:"<<endl;
    cin>>s2.pname[i];
    file<<"name of the contact person:"<<s2.pname[i]<<endl;

    cout<<"mobile number:"<<endl;
    cin>>s2.mobile[i];
    file<<"mobile number of company:"<<s2.mobile[i]<<endl;

    cout<<"email of the company:"<<endl;
    cin>>s2.email[i];
    file<<"email of the company :"<<s2.email[i]<<endl;

    cout<<"date of purchase :"<<endl;
    cin>>s2.date[i];
    file<<"date of the purchase:"<<s2.date[i]<<endl;

    cout<<"quantity of the product:"<<endl;
    cin>>s2.quantity[i];
    // file<<"quantity of the product:"<<s2.quantity[i]<<endl;

    file<<"computer detailes:"<<endl;
    cout<<"type:"<<endl;
    cout<<"1.desktop\n2.laptop"<<endl;
    cin>>z;
    while (cin.fail()||z<=0||z>2)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>z;
    }
    if (z==1)
    {
        s3.type[i] = "desktop";
        s3.time[i] = "NA";
    }
    if (z==2)
    {
        s3.type[i] = "laptop";
        cout<<"battery backup of the device(in hrs):"<<endl;
        cin>>s3.time[i];
        //file<<"battery backup pf the device:"<<s3.time[i]<<endl;
    }
    file<<"type(desktop/laptop):"<<s3.type[i]<<endl;

    cout<<"processor(Intel/Ryzen):"<<endl;
    cin>>s3.processor[i];
    file<<"processor :"<<s3.processor[i]<<endl;

    cout<<"ram in GB:"<<endl;
    cin>>s3.ram[i];
    while (cin.fail()||s3.ram[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.ram[i];
    }
    file<<"ram in GB:"<<s3.ram[i]<<endl;
    cout<<"hardisk in TB:"<<endl;
    cin>>s3.hardisk[i];
    while (cin.fail()||s3.hardisk[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.hardisk[i];
    }
    file<<"hardisk in TB :"<<s3.hardisk[i]<<endl;
    cout<<"number of usb ports:"<<endl;
    cin>>s3.usb[i];
    while (cin.fail()||s3.usb[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.usb[i];
    }
    file<<"number of usb ports :"<<s3.usb[i]<<endl;
    cout<<"number of hdmi ports:"<<endl;
    cin>>s3.hdmi[i];
    while (cin.fail()||s3.hdmi[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.hdmi[i];
    }

    file<<"quantity of the product:"<<s2.quantity[i]<<endl;

    file<<"battery backup of the device:"<<s3.time[i]<<endl;

}
}
file.close();

int s,p,k,t,f;
loop:
cout<<endl;
cout<<"1.ADD DATA"<<endl;
cout<<"2.MODIFY DATA"<<endl;
cout<<"3.DELETE DATA"<<endl;
cout<<"4.VIEW DATA "<<endl;
cout<<"5.EXIT"<<endl;
cin>>a;
switch(a){
 case 1:{
    ofstream my;
    my.open("store.txt");
    cout<<"enter the number of entities you want to add"<<endl;
    cin>>m;
    while (cin.fail()||m<0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>m;
    }
    //my<<endl;
    //my<<"added info:"<<endl;
    if(y==1)
    {
    for(int i=n1;i<n1+m;i++){
    cout<<"detailes of a person id:"<<i+1<<endl;
    cout<<"name of person:"<<endl;
    cin>>s1.pname[i];
    cout<<"mobile of person:"<<endl;
    cin>>s1.mobile[i];
    cout<<"email of the person:"<<endl;
    cin>>s1.email[i];
    cout<<"date of purchase:"<<endl;
    cin>>s1.date[i];
    cout<<"select type:"<<endl;
    cout<<"1.desktop\n2.laptop"<<endl;
    cin>>z;
    while (cin.fail()||z<=0||z>2)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>z;
    }
    if (z==1)
    {
        s3.type[i] = "desktop";
        s3.time[i] = "NA";
    }
    if (z==2)
    {
        s3.type[i] = "laptop";
        cout<<"battery backup of the device(in hrs):"<<endl;
        cin>>s3.time[i];
    }
    cout<<"processor(Intel/Ryzen):"<<endl;
    cin>>s3.processor[i];
    cout<<"ram in GB:"<<endl;
    cin>>s3.ram[i];
    while (cin.fail()||s3.ram[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.ram[i];
    }
    //file<<"ram in GB:"<<s3.ram[i]<<endl;
    cout<<"hardisk in TB:"<<endl;
    cin>>s3.hardisk[i];
    while (cin.fail()||s3.hardisk[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.hardisk[i];
    }
    //file<<"hardisk in TB :"<<s3.hardisk[i]<<endl;
    cout<<"number of usb ports:"<<endl;
    cin>>s3.usb[i];
    while (cin.fail()||s3.usb[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.usb[i];
    }
    //file<<"number of usb ports :"<<s3.usb[i]<<endl;
    cout<<"number of hdmi ports:"<<endl;
    cin>>s3.hdmi[i];
    while (cin.fail()||s3.hdmi[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.hdmi[i];
    }
}
n1 = n1+m;
for (int i = 0; i < n1; i++)
{
    my<<"detailes of a person id:"<<i+1<<endl;
    my<<"name of the person:"<<s1.pname[i]<<endl;
    my<<"mobile of the person:"<<s1.mobile[i]<<endl;
    my<<"email of the person:"<<s1.email[i]<<endl;
    my<<"date of purchase:"<<s1.date[i]<<endl;
    my<<"computer detailes:"<<endl;
    my<<"type(desktop/laptop):"<<s3.type[i]<<endl;
    my<<"processor :"<<s3.processor[i]<<endl;
    my<<"ram in GB:"<<s3.ram[i]<<endl;
    my<<"hardisk in TB :"<<s3.hardisk[i]<<endl;
    my<<"number of usb ports :"<<s3.usb[i]<<endl;
    my<<"number of hdmi ports:"<<s3.hdmi[i]<<endl;
    my<<"battery backup of the device:"<<s3.time[i]<<endl;
    my<<endl;
}
}
if(y==2){
    for(int i=n2;i<n2+m;i++){
    cout<<"company id"<<i+1<<endl;
    cout<<"name of the company:"<<endl;
    cin>>s2.cname[i];

    cout<<"name of the contact person:"<<endl;
    cin>>s2.pname[i];

    cout<<"mobile number:"<<endl;
    cin>>s2.mobile[i];

    cout<<"email of the company:"<<endl;
    cin>>s2.email[i];

    cout<<"date of purchase :"<<endl;
    cin>>s2.date[i];

     cout<<"quantity of the product:"<<endl;
     cin>>s2.quantity[i];

    cout<<"type:"<<endl;
    cout<<"1.desktop\n2.laptop"<<endl;
    cin>>z;
    while (cin.fail()||z<=0||z>2)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>z;
    }
    if (z==1)
    {
        s3.type[i] = "desktop";
        s3.time[i] = "NA";
    }
    if (z==2)
    {
        s3.type[i] = "laptop";
        cout<<"battery backup of the device(in hrs):"<<endl;
        cin>>s3.time[i];
    }
    cout<<"processor(Intel/Ryzen):"<<endl;
    cin>>s3.processor[i];

    cout<<"ram in GB:"<<endl;
    cin>>s3.ram[i];
    while (cin.fail()||s3.ram[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.ram[i];
    }
    //file<<"ram in GB:"<<s3.ram[i]<<endl;
    cout<<"hardisk in TB:"<<endl;
    cin>>s3.hardisk[i];
    while (cin.fail()||s3.hardisk[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.hardisk[i];
    }
    //file<<"hardisk in TB :"<<s3.hardisk[i]<<endl;
    cout<<"number of usb ports:"<<endl;
    cin>>s3.usb[i];
    while (cin.fail()||s3.usb[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.usb[i];
    }
    //file<<"number of usb ports :"<<s3.usb[i]<<endl;
    cout<<"number of hdmi ports:"<<endl;
    cin>>s3.hdmi[i];
    while (cin.fail()||s3.hdmi[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.hdmi[i];
    }
}
n2 = n2+m;
for(int i=0;i<n2;i++){
    my<<"company id:"<<i+1<<endl;
    my<<"name of the company :"<<s2.cname[i]<<endl;
    my<<"name of the contact person:"<<s2.pname[i]<<endl;
    my<<"mobile number of company:"<<s2.mobile[i]<<endl;
    my<<"email of the company :"<<s2.email[i]<<endl;
    my<<"date of the purchase:"<<s2.date[i]<<endl;
    //my<<"quantity of the product:"<<s2.quantity[i]<<endl;
    my<<"computer detailes:"<<endl;
    my<<"type(desktop/laptop):"<<s3.type[i]<<endl;
    my<<"processor :"<<s3.processor[i]<<endl;
    my<<"ram in GB:"<<s3.ram[i]<<endl;
    my<<"hardisk in TB :"<<s3.hardisk[i]<<endl;
    my<<"number of usb ports :"<<s3.usb[i]<<endl;
    my<<"number of hdmi ports:"<<s3.hdmi[i]<<endl;
    my<<"quantity of the product:"<<s2.quantity[i]<<endl;
    my<<"battery backup of the device:"<<s3.time[i]<<endl;
    my<<endl;
}}
my.close();
goto loop;}
break;
case 2:{
ofstream me;
me.open("store.txt");
if(y==1){
if (n1!=0){
cout<<"enter the person id you want to update:"<<endl;
cout<<"from 1 to "<<n1<<endl;
cin>>k;
while (cin.fail()||k<0||k>n1)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout<<"enter the person id you want to update:"<<endl;
        cout<<"from 1 to "<<n1<<endl;
        cin>>k;
    }
cout<<"enter 1 if you want to update name of the person"<<endl;
cout<<"enter 2 if you want to update mobile number"<<endl;
cout<<"enter 3 if you want to update email"<<endl;
cout<<"enter 4 if you want to update date of purchase"<<endl;
cout<<"enter 5 if you want to update computer details"<<endl;
cin>>s;
for(int i=0;i<n1;i++)
{
if(k==(i+1))
{
    switch(s){
    case 1:
    cout<<"name of the person:"<<endl;
    cin>>s1.pname[i];
    break;

    case 2:
    cout<<"enter the person mobile:"<<endl;
    cin>>s1.mobile[i];
    break;

    case 3:
    cout<<"enter the email:"<<endl;
    cin>>s1.email[i];
    break;

    case 4:
    cout<<"enter the date of purchase:"<<endl;
    cin>>s1.date[i];
    break;


    case 5:
    cout<<"updating computer details"<<endl;
    cout<<"type:"<<endl;
    cout<<"1.desktop\n2.laptop"<<endl;
    cin>>z;
    while (cin.fail()||z<=0||z>2)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input


        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>z;
    }
    if (z==1)
    {
        s3.type[i] = "desktop";
        s3.time[i] = "NA";
    }
    if (z==2)
    {
        s3.type[i] = "laptop";
        cout<<"battery backup of the device(in hrs):"<<endl;
        cin>>s3.time[i];
    }

    cout<<"processor(Intel/Ryzen):"<<endl;
    cin>>s3.processor[i];

    cout<<"ram in GB:"<<endl;
    cin>>s3.ram[i];
    while (cin.fail()||s3.ram[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.ram[i];
    }
    //file<<"ram in GB:"<<s3.ram[i]<<endl;
    cout<<"hardisk in TB:"<<endl;
    cin>>s3.hardisk[i];
    while (cin.fail()||s3.hardisk[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.hardisk[i];
    }
    //file<<"hardisk in TB :"<<s3.hardisk[i]<<endl;
    cout<<"number of usb ports:"<<endl;
    cin>>s3.usb[i];
    while (cin.fail()||s3.usb[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.usb[i];
    }
    //file<<"number of usb ports :"<<s3.usb[i]<<endl;
    cout<<"number of hdmi ports:"<<endl;
    cin>>s3.hdmi[i];
    while (cin.fail()||s3.hdmi[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.hdmi[i];
    }
  break;
}}
//me<<"updated information:"<<endl;
me<<"person info id: "<<i+1<<endl;
me<<"name of the person:"<<s1.pname[i]<<endl;
me<<"mobile number of the person:"<<s1.mobile[i]<<endl;
me<<"email of the person:"<<s1.email[i]<<endl;
me<<"date of purchase:"<<s1.date[i]<<endl;
me<<"computer detailes"<<endl;
me<<"type:Desktop/Laptop:"<<s3.type[i]<<endl;
me<<"processor(intel/reyzen):"<<s3.processor[i]<<endl;
me<<"ram in GB:"<<s3.ram[i]<<endl;
me<<"hardisk in TB:"<<s3.hardisk[i]<<endl;
me<<"usb port count:"<<s3.usb[i]<<endl;
me<<"hdmi port count:"<<s3.hdmi[i]<<endl;
me<<"battery backup time in hrs:"<<s3.time[i]<<endl;
me<<endl;;
}}
if (n1==0)
{
    me<<"file is empty"<<endl;
    cout<<"file is empty"<<endl;
}
}
if(y==2){
if (n2!=0){
cout<<"enter the company id you want to modify:"<<endl;
cout<<"from 1 to "<<n2<<endl;
cin>>p;
while (cin.fail()||p<0||p>n2)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout<<"enter the company id you want to modify:"<<endl;
        cout<<"from 1 to "<<n2<<endl;
        cin>>p;
    }
cout<<"enter 1 if to want to update company name:"<<endl;
cout<<"enter 2 if you want to update name of the person"<<endl;
cout<<"enter 3 if you want to update mobile number"<<endl;
cout<<"enter 4 if you want to update email"<<endl;
cout<<"enter 5 if you want to update date of purchase"<<endl;
cout<<"enter 6 if you want to update quantity of the products"<<endl;
cout<<"enter 7 if you want to update computer details"<<endl;
cin>>k;
for(int i=0;i<n2;i++){
    if(p==(i+1)){
     switch(k){
     case 1:
      cout<<"name of the company:"<<endl;
      cin>>s2.cname[i];
      break;
 case 2:
    cout<<"name of the person:"<<endl;
    cin>>s2.pname[i];
    break;
 case 3:
    cout<<"enter the company mobile:"<<endl;
    cin>>s2.mobile[i];
    break;
 case 4:
    cout<<"enter the email of the company:"<<endl;
    cin>>s2.email[i];
    break;
 case 5:
    cout<<"enter the date of purchase:"<<endl;
    cin>>s2.date[i];
    break;
case 6:
    cout<<"quantity of the product:"<<endl;
    cin>>s2.quantity[i];
    break;
 case 7:
    cout<<"updating computer details"<<endl;
   cout<<"type:"<<endl;
   cout<<"1.desktop\n2.laptop"<<endl;
    cin>>z;
    while (cin.fail()||z<=0||z>2)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>z;
    }
    if (z==1)
    {
        s3.type[i] = "desktop";
        s3.time[i] = "NA";
    }
    if (z==2)
    {
        s3.type[i] = "laptop";
        cout<<"battery backup of the device(in hrs):"<<endl;
        cin>>s3.time[i];
    }

    cout<<"processor(Intel/Ryzen):"<<endl;
    cin>>s3.processor[i];

    cout<<"ram in GB:"<<endl;
    cin>>s3.ram[i];
    while (cin.fail()||s3.ram[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.ram[i];
    }
    //file<<"ram in GB:"<<s3.ram[i]<<endl;
    cout<<"hardisk in TB:"<<endl;
    cin>>s3.hardisk[i];
    while (cin.fail()||s3.hardisk[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.hardisk[i];
    }
    //file<<"hardisk in TB :"<<s3.hardisk[i]<<endl;
    cout<<"number of usb ports:"<<endl;
    cin>>s3.usb[i];
    while (cin.fail()||s3.usb[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.usb[i];
    }
    //file<<"number of usb ports :"<<s3.usb[i]<<endl;
    cout<<"number of hdmi ports:"<<endl;
    cin>>s3.hdmi[i];
    while (cin.fail()||s3.hdmi[i]<=0)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout << "Enter a valid input\n";
        //cout<<"enter the vehicle id you want to delete:"<<endl;
        //cout<<"from 1 to "<<n<<endl;
        cin>>s3.hdmi[i];
    }
break;
}}}
for (int i = 0; i <n2; i++){
me<<"company id:"<<i+1<<endl;
me<<"name of the company:"<<s2.cname[i]<<endl;
me<<"name of the person:"<<s2.pname[i]<<endl;
me<<"mobile number of the company:"<<s2.mobile[i]<<endl;
me<<"email of the company:"<<s2.email[i]<<endl;
me<<"date of purchase:"<<s2.date[i]<<endl;
//me<<"quantity of the product:"<<s2.quantity[i]<<endl;
me<<"computer deailes"<<endl;
me<<"type:Desktop/Laptop:"<<s3.type[i]<<endl;
me<<"processor(intel/reyzen):"<<s3.processor[i]<<endl;
me<<"ram in GB:"<<s3.ram[i]<<endl;
me<<"hardisk in TB:"<<s3.hardisk[i]<<endl;
me<<"usb port count:"<<s3.usb[i]<<endl;
me<<"hdmi port count:"<<s3.hdmi[i]<<endl;
me<<"quantity of the product:"<<s2.quantity[i]<<endl;
me<<"battery backup time in hrs:"<<s3.time[i]<<endl;
me<<endl;
}}
if (n2==0)
{
    me<<"file is empty"<<endl;
    cout<<"file is empty"<<endl;
}
}
me.close();
goto loop;}
break;

 case 3:{
    ofstream bsl;
    bsl.open("store.txt");
    bsl<<endl;
    //bsl<<"deleted info:"<<endl;
    if(y==1){
     if (n1!=0){
    cout<<"enter the person id you want to delete:"<<endl;
    cout<<"from 1 to "<<n1<<endl;
    cin>>t;
    while (cin.fail()||t<0||t>n1)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout<<"enter the person id you want to delete:"<<endl;
        cout<<"from 1 to "<<n1<<endl;
        cin>>t;
    }

    for(int i=0;i<n1;i++){
    if(t==(i+1)){
      for (i = t-1; i<n1; i++)
      {
s1.pname[i] = s1.pname[i+1];
s1.mobile[i] = s1.mobile[i+1];
s1.email[i] = s1.email[i+1];
s1.date[i] = s1.date[i+1];
s3.type[i]= s3.type[i+1];
s3.processor[i] = s3.processor[i+1];
s3.ram[i] = s3.ram[i+1];
s3.hardisk[i] = s3.hardisk[i+1];
s3.usb[i] = s3.usb[i+1];
s3.hdmi[i] =s3.hdmi[i+1];
s3.time[i] =s3.time[i+1];
n1 = n1-1;
      }}}
      for (int i = 0; i < n1; i++)
      {
bsl<<"person info id: "<<i+1<<endl;
bsl<<"name of the person:"<<s1.pname[i]<<endl;
bsl<<"mobile number of the person:"<<s1.mobile[i]<<endl;
bsl<<"email of the person:"<<s1.email[i]<<endl;
bsl<<"date of purchase:"<<s1.date[i]<<endl;
bsl<<"computer detailes"<<endl;
bsl<<"type:Desktop/Laptop:"<<s3.type[i]<<endl;
bsl<<"processor(intel/reyzen):"<<s3.processor[i]<<endl;
bsl<<"ram in GB:"<<s3.ram[i]<<endl;
bsl<<"hardisk in TB:"<<s3.hardisk[i]<<endl;
bsl<<"usb port count:"<<s3.usb[i]<<endl;
bsl<<"hdmi port count:"<<s3.hdmi[i]<<endl;
bsl<<"battery backup time in hrs:"<<s3.time[i]<<endl;
bsl<<endl;
}}
if (n1==0)
{
    bsl<<"file is empty"<<endl;
    cout<<"file is empty"<<endl;
}
}
if(y==2){
    if (n2!=0)
{
cout<<"enter the company id you want to delete:"<<endl;
cout<<"from 1 to "<<n2<<endl;
cin>>f;
while (cin.fail()||f<0||f>n2)
    {
        cin.clear(); // clear input buffer to restore cin to a usable state
        cin.ignore(INT_MAX, '\n'); // ignore last input
        cout << "invalid input\n";
        //cout << "You can only enter positive numbers.\n";
        cout<<"enter the company id you want to delete:"<<endl;
        cout<<"from 1 to "<<n2<<endl;
        cin>>f;
    }
for(int i=0;i<n2;i++){
if(f==(i+1)){
for (i = f-1; i<n2; i++)
{
s2.cname[i] = s2.cname[i+1];
s2.pname[i] = s2.pname[i+1];
s2.mobile[i] = s2.mobile[i+1];
s2.email[i] = s2.email[i+1];
s2.date[i] = s2.date[i+1];
s2.quantity[i] = s2.quantity[i+1];
s3.type[i]= s3.type[i+1];
s3.processor[i] = s3.processor[i+1];
s3.ram[i] = s3.ram[i+1];
s3.hardisk[i] = s3.hardisk[i+1];
s3.usb[i] = s3.usb[i+1];
s3.hdmi[i] =s3.hdmi[i+1];
s3.time[i] =s3.time[i+1];
n2 = n2-1;
}}}
for (int i = 0; i < n2; i++)
{
bsl<<"company id:"<<i+1<<endl;
bsl<<"name of the company:"<<s2.cname[i]<<endl;
bsl<<"name of the person:"<<s2.pname[i]<<endl;
bsl<<"mobile number of the company:"<<s2.mobile[i]<<endl;
bsl<<"email of the company:"<<s2.email[i]<<endl;
bsl<<"date of purchase:"<<s2.date[i]<<endl;
bsl<<"computer detailes"<<endl;
//bsl<<"quantity of the product:"<<s2.quantity[i]<<endl;
bsl<<"type:Desktop/Laptop:"<<s3.type[i]<<endl;
bsl<<"processor(intel/reyzen):"<<s3.processor[i]<<endl;
bsl<<"ram in GB:"<<s3.ram[i]<<endl;
bsl<<"hardisk in TB:"<<s3.hardisk[i]<<endl;
bsl<<"usb port count:"<<s3.usb[i]<<endl;
bsl<<"hdmi port count:"<<s3.hdmi[i]<<endl;
bsl<<"quantity of the product:"<<s2.quantity[i]<<endl;
bsl<<"battery backup time in hrs:"<<s3.time[i]<<endl;
bsl<<endl;
}}
if (n2==0)
{
    bsl<<"file is empty"<<endl;
    cout<<"file is empty"<<endl;
}}
goto loop;}
break;

 case 4:
    {
ifstream messi;

cout<<"Displaying information from the file:"<<endl;
string x;

messi.open("store.txt");
while(messi.eof()==0)
{
    getline(messi,x);
    cout<<x<<endl;
}
goto loop;}
break;

case 5:{
break;
}
}
return 0;
}