#include<iostream>
#include<string>
using namespace std;
struct student{
  string name;
  int age;
};
void display(struct student s);
int main()
{
    struct student s1;
    cout<<"Enter name: "<<endl;
    getline(cin, s1.name);
    cout<<"Enter age: "<<endl;
    cin>>s1.age;
    display(s1);
    return 0;
}
void display(struct student s){
    cout<<"Displaying Information: "<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Age: "<<s.age<<endl;
    }
