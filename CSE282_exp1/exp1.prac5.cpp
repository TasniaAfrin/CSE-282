#include<iostream>
using namespace std;
struct Complex{
   float real;
   float img;
   }s1,s2;

   int main()
   {
       float a,b;
       cout<<"For 1st complex number,"<<endl;
       cout<<"Enter real part: ";
       cin>>s1.real;
       cout<<"Enter imagenary part: ";
       cin>>s1.img;
       cout<<"For 2nd complex number,"<<endl;
       cout<<"Enter real part: ";
       cin>>s2.real;
       cout<<"Enter imagenary part: ";
       cin>>s2.img;

       a= (s1.real)-(s2.real);
       b= (s1.img) - (s2.img);
       cout<<"\nSubtraction: "<<a<<"+"<<b<<"i";
       return 0;
   }
