#include <iostream>
using namespace std;

#include <stack>
#include <string>


int main() 
{
	string str = "[1+(2*3)+{2/4}*(3+5)]"; 
	stack<char> s;


	for(char ch: str) {

		if(ch=='(' || ch=='{' || ch=='[') {
			s.push(ch);
		}

		else if(ch==')' || ch=='}' || ch==']') {

			if(s.empty()) {
				cout<<"Not Balanced"<<endl;
				exit(0);
			}

			char x = s.top();
			s.pop();

			if(ch==')' && x=='(') {
				continue;
			}
			else if(ch=='}' && x=='{') {
				continue;
			}
			else if(ch==']' && x=='[') {
				continue;
			}
			else {
				cout<<"Not Balanced"<<endl;
				exit(0);
			}
		}
	}


	if(s.empty()) {
		cout<<"Balanced"<<endl;
	}
	else {
		cout<<"Not Balanced"<<endl;
	}



	return 0;
}