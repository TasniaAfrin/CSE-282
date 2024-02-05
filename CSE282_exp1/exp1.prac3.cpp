#include<iostream>
using namespace std;
struct Marks{
   int roll;
   int chem_marks, math_marks, phy_marks;
   char name[10];
   }m[5];
   int main()
   {float percentage;
       for(int i=0; i<5; i++){
        cout<<"Enter roll no.: ";
        cin>>m[i].roll;
        cout<<"Enter name: ";
        cin>>m[i].name;
        cout<<"Enter chemistry marks: ";
        cin>>m[i].chem_marks;
        cout<<"Enter math marks: ";
        cin>>m[i].math_marks;
        cout<<"Enter physics mark: ";
        cin>>m[i].phy_marks;
       }
       for(int i=0; i<5; i++){
            cout<<"\nRoll no. : "<<m[i].roll;
        float percentage = (((m[i].chem_marks+m[i].math_marks+m[i].phy_marks)/300.0)*100.0);

       cout<<"\nPercentage: "<<percentage<<endl;
       }
       return 0;
   }
