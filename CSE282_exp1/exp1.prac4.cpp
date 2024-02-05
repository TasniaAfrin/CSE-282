#include<iostream>
using namespace std;
struct Distance{
  int feet;
  int inch;
  }d1,d2,sum;

  int main()
  {
      cout<<"For 1st distance, "<<endl;
      cout<<"Enter feet: ";
      cin>>d1.feet;
      cout<<"Enter inch: ";
      cin>>d1.inch;
      cout<<"\nFor 2nd distance, "<<endl;
      cout<<"Enter feet: ";
      cin>>d2.feet;
      cout<<"Enter inch: ";
      cin>>d2.inch;

    sum.feet= d1.feet+d2.feet;
    sum.inch= d1.inch+d2.inch;

    if(sum.inch>=12){
        int extra= sum.inch/12;
        sum.feet += extra;
        sum.inch = sum.inch%12;
    }
    cout<<"\nSum of distances "<<sum.feet<<"feet "<<sum.inch<<"inches."<<endl;
    return 0;
  }
