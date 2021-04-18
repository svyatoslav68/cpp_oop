#ifndef FRACTION_H
#define FRACTION_H

class Fraction 
{
	public:
		Fraction(int dividend, int division);
		Fraction(unsigned int dividend, unsigned int division, bool sign);
		//Fraction(Fraction fr) = default;
		Fraction(const Fraction &fr) = default;
		Fraction(Fraction &fr) = default;
		unsigned int getDividend() const {return m_dividend;};
		unsigned int getDivision()  const {return m_division;};
		bool getSign() const  {return m_sign;};
		void setDividend(const unsigned int value);
		void setDivision(const unsigned int value);
		void setSign(const bool sign);
		Fraction &operator-();
		Fraction operator+(const Fraction &op) const;
		Fraction operator-(const Fraction &op) const;
		Fraction operator*(const Fraction &op) const;
		Fraction operator/(const Fraction &op) const;
		bool operator<(const Fraction &op) const;
		bool operator>(const Fraction &op) const;
		bool operator<=(const Fraction &op) const;
		bool operator>=(const Fraction &op) const;
		bool operator==(const Fraction &op) const;
		bool operator!=(const Fraction &op) const;
		void display();
		friend std::ostream &operator<<(std::ostream &s, Fraction &fr);
		friend std::istream &operator>>(std::istream &s, Fraction &fr);
		unsigned int gcd(unsigned int a, unsigned int b);
	private:
		unsigned int m_dividend; // Делимое
		unsigned int m_division; // Делитель
		bool m_sign;	// Знак дроби
		// Рекурсивная функция поиска наибольшего общего делителя
};

#endif // FRACTION_H
