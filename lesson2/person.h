#ifndef PERSON_H
#define PERSON_H

class Person
{
	public:
		enum t_sex {
			m,
			f
		};
	protected:
		std::string m_name;
		int m_age;
		t_sex m_sex;
		int m_weight;
	public:
		//Person() = default;
		Person(std::string name, int age, t_sex sex, int weight);
		void setName(std::string name);
		void addAge(int years = 1);
		void setAge(int years);
		void setWeight(int kg);
	};

class Student: public Person
{
	private:
		int m_curs;
	public:
		Student() = default;
		Student(std::string name, int age, t_sex sex, int weight, int curs);
		~Student();
		static int count;
		void setCurs(int curs);
		void printInfoStudent() const;
};

#endif // PERSON_H
