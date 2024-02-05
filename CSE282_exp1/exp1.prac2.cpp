#include<iostream>
using namespace std;
struct student
{
    int roll, age;
    char name[10];
}s[5];
int main()
{
    int i;
    for(int i=0; i<5; i++)
    {
        s[i].roll= i+1;
        cout<<"Enter roll no.: ";
        cin>>s[i].roll;
        cout<<"Enter name: ";
        cin>>s[i].name;
        cout<<"Enter age: ";
        cin>>s[i].age;

    }
    cout<<"\nDisplaying Information: "<<endl;
    for(int i=0; i<5; i++){
    if(s[i].roll==2){
            cout<<"Roll no.: "<<s[i].roll<<endl;
        cout<<"Name: "<<s[i].name<<endl;
    cout<<"Age: "<<s[i].age<<endl;
    }
    }
    return 0;
}
