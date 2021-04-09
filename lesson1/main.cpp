#include <iostream>
#include <cmath>
#include <cstdint>
#include <limits>

class Power 
{
private:
	double m_x = 2;
	double m_y = 3;
public:
	void set(double x, double y)
	{
		m_x = x;
		m_y = y;
	};
	double calculate() 
	{
		return pow(m_x, m_y);
	};
};

class RGBA
{
	public:
		RGBA() {};
		RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha):m_red(red), m_green(green), m_blue(blue), m_alpha(alpha) {};
		void print()
		{
			std::cout << "RGBA = (" << static_cast<int>( m_red ) << ", " << static_cast<int>( m_green ) << ", " << static_cast<int>( m_blue ) << ", " << static_cast<int>( m_alpha ) << ")\n";
		};
	private:
	uint8_t m_red = 0;
	uint8_t m_green = 0;
	uint8_t m_blue = 0;
	uint8_t m_alpha = 255;
};

class Stack
{
	private:
		static const int size = 10;
		int array[size] = {0};
		int top = 0;
	public:
		void reset() {
			for (int i = 0; i < size; ++i)
				array[i] = 0;
			top = 0;
		};
		bool push(int value){
			if (top < size && top >= 0){
				*(array + top++) = value;
				return true;
			}
			return false;
		};
		int pop() {
			//std::cerr << "top = " << top << std::endl;
			if (top == 0){
				std::cout << "Stack is empty!\n";
				return std::numeric_limits<int>::min();
			}
			return *(array + --top);
		};

		void print() {
			std::cout << "(";
			for (int i = 0; i < top; ++i){
				std::cout << array[i];
				if (i!=top-1)
					std::cout << ",";
			}
			std::cout << ")\n";
		};
};

int main(int argc, char **argv)
{
	Power pow;
	std::cout << "Default result = " << pow.calculate() << std::endl;
	pow.set(1.234, 4.5);
	std::cout << "Result = " << pow.calculate() << std::endl;
	RGBA rgba;
	rgba.print();
	RGBA rgba1(12, 23, 91, 100);
	rgba1.print();
	// Cod from task
    Stack stack;
    stack.reset();
    stack.print();
    
    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();
    
	//std::cout << "From stack: "<< stack.pop() << std::endl;
	stack.pop();
    stack.print();
    
	//std::cout << "From stack: "<< stack.pop() << std::endl;
    stack.pop();
	//std::cout << "From stack: "<< stack.pop() << std::endl;
    stack.pop();
    stack.print();
	//std::cout << "From stack: "<< stack.pop() << std::endl;
	stack.pop();
    stack.print();
    // End imported code
    return 0;
}
	
	
