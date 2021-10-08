class Student
{
	private:
		static int total;

	public:
		int roll;
		int age;
		Student();
		

		static int getTotal()
		{
			return total;
		}

};


int Student::total = 0;

Student::Student()
		{
			total++;
		}
