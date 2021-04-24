#ifndef PAIRS_H
#define PAIRS_H
#include <string>

using namespace std;

template <class T>
class Pair1
{
	public:
		Pair1(T first, T second):m_first(first),m_second(second){};
		const T first() const {return m_first;}
		const T second() const {return m_second;}
	private:
		T m_first;
		T m_second;
};

template <class T1, class T2>
class Pair
{
	public:	
		Pair(T1 first, T2 second):m_first(first),m_second(second){};
		const T1 first() const {return m_first;}
		const T2 second() const {return m_second;}
	private:
		T1 m_first;
		T2 m_second;
};

template <class T>
class StringValuePair:public Pair<string, T>
{
	public:
		StringValuePair(string first, T second):Pair<string, T>(first, second) {}
};


/*template <class T>
class StringValuePair<string, T>:public Pair<string, T>
//class StringValuePair:public Pair<std::string, T>
{
};*/

#endif //PAIRS_H
