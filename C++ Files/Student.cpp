class Student {

	public:	
		const int age;
		char *name;
		int marks;
		int &x; //age reference variable

		//Initialization List
		Student(int age) : age(age), x(this->marks) {

			//this->age = age;
		}

		// Student(int age, char *name) {

		// 	this -> age = age;

		// 	//Shallow Copy
		// 	//this -> name = name;

		// 	//Deep Copy
		// 	this -> name = new char[strlen(name)+1];
		// 	strcpy(this -> name, name);	

		// }

		// Student(Student const &s) {

		// 	this -> age = s.age;

		// 	this -> name = new char[strlen(s.name)+1];
		// 	strcpy(this -> name, s.name);
		// }

		void Display() {

			cout<<age<<" "<<name<<endl;
		}


};