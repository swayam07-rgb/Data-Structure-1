#include<iostream>
using namespace std;
class student
{
public:
int rollno;
void display()
{
cin>>rollno;
cout<<"Roll no: "<<rollno<<endl;
}
};
int main()
{
student s1 ,s2 ,s3 ,s4 ,s5;
cout<<"Enter the rollno of s1: ";
s1.display();

cout<<"Enter the rollno of s2: ";
s2.display();

cout<<"Enter the rollno of s3: ";
s3.display();

cout<<"Enter the rollno of s4: ";
s4.display();

cout<<"Enter the rollno of s5: ";
s5.display();
return 0;
}
