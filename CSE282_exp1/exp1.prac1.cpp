#include<iostream>
using namespace std;
struct student
{
    int roll, age;
    float marks;
    char name[10];
};

int main()
{
    struct student s;
    cout<<"Enter name: ";
    cin>>s.name;
    cout<<"\nEnter roll no.: ";
    cin>>s.roll;
    cout<<"\nEnter age: ";
    cin>>s.age;
    cout<<"\nEnter marks: ";
    cin>>s.marks;

    cout<<"\nDisplaying Information: "<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll: "<<s.roll<<endl;
    cout<<"Age: "<<s.age<<endl;
    cout<<"Marks: "<<s.marks<<endl;
    return 0;
}
