#include <iostream>
using namespace std;

#include "Pair.cpp"


int main() 
{


	//Double typename template Use
	Pair<int, string> p;

	p.setX(5);
	p.setY("Shreyansh");

	cout<<p.getX()<<" "<<p.getY()<<endl;


	//Single typename template Use
	/*

	Pair<string> p;

	p.setX("Shreyansh");
	p.setY("Raj");


	cout<<p.getX()<<" "<<p.getY()<<endl;

	*/


	//Single typename template use but its is nested.
	/*

	Pair< Pair<string> > p;

	Pair<string> p2;

	p2.setX("Shreyansh");
	p2.setY("Raj");

	p.setX(p2);
	p.setY(p2);

	cout<<p2.getX()<<" "<<p2.getY()<<endl;

	*/

	return 0;
}