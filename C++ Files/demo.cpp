#include <stdc++.h> 
using namespace std; 
  
#include "Student2.cpp"
  
int main()  
{  

	Student s1;
	s1.age = 10;
	s1.roll = 10;

	cout<<s1.age<<" "<<s1.roll<<endl;
	//cout<<Student::total<<endl;
	cout<<Student::getTotal()<<endl;



	Student s2;
	s2.age = 20;
	s2.roll = 20;

	cout<<s2.age<<" "<<s2.roll<<endl;
    //cout<<Student::total<<endl;
	cout<<Student::getTotal()<<endl;

    return 0;  
}  
