#include <iostream>
using namespace std;
class Date
{
	int day;
	int month;
	int year;
public:
	Date();
	Date(int d);
	Date(int d, int m);
	Date(int d, int m, int y);
	void Print()const;
	void SetD(int t);
	void SetM(int t);
	void SetY(int t);
	void GetD();
	void GetM();
	void GetY();
	Date operator+(int a);
	Date operator-(int a);
	Date check(Date&);
	Date& operator+(const Date& a);
	Date& operator-(const Date& a);
	Date& operator+=(int a);
	Date& operator-=(int a);
	bool operator>(const Date& t);
	bool operator>=(const Date& t);
	bool operator<(const Date& t);
	bool operator<=(const Date& t);
	bool operator==(const Date& t);
	bool operator!=(const Date& t);

};

Date::Date()
{
	day = month = year = 0;
}

Date::Date(int d)
{
	day = d;
	month = year = 0;
}

Date::Date(int d, int m) :Date(d)
{
	month = m;
	year = 0;
}

Date::Date(int d, int m, int y) :Date(d, m)
{
	year = y;
}

void Date::Print()const
{
	if (month < 10)
		cout << day << "-" << month << "-" << year << endl;
	else
		cout << day << "-" << month << "-" << year << endl;
}

void Date::SetD(int t)
{
	cout << "Dni -  ";
	cin >> day;
}

void Date::SetM(int t)
{
	cout << "Mecyaz - ";
	cin >> month;
}

void Date::SetY(int t)
{
	cout << "God - ";
	cin >> year;
}

void Date::GetD()
{
	cout << "Dni - " << day << endl;
}

void Date::GetM()
{
	if (month < 10)
		cout << "Mecyaz - 0" << month << endl;
	else
		cout << "Mecyaz - " << month << endl;
}

void Date::GetY()
{
	cout << "God- " << year << endl;
}

Date Date::operator+(int a)
{
	Date temp;
	temp.day = day + a;
	temp.month = month;
	temp.year = year;
	check(temp);
	return temp;
}

Date Date::operator-(int a)
{
	Date temp;
	temp.day = day - a;
	temp.month = month;
	temp.year = year;
	check(temp);
	return temp;
}



Date Date::check(Date& temp)
{
	while (true)
	{
		if (temp.year % 4 == 0)
		{
			if (temp.month == 2 && temp.day > 29)
			{
				temp.month++;
				temp.day -= 29;
				return temp;
			}
		}
		if (temp.month == 1 && temp.day > 31)
		{
			temp.month++;
			temp.day -= 31;
		}
		else if (temp.month == 2 && temp.day > 28)
		{
			temp.month++;
			temp.day -= 28;
		}
		else if (temp.month == 3 && temp.day > 31)
		{
			temp.month++;
			temp.day -= 31;
		}
		else if (temp.month == 4 && temp.day > 30)
		{
			temp.month++;
			temp.day -= 30;
		}
		else if (temp.month == 5 && temp.day > 31)
		{
			temp.month++;
			temp.day -= 31;
		}
		else if (temp.month == 6 && temp.day > 30)
		{
			temp.month++;
			temp.day -= 30;
		}
		else if (temp.month == 7 && temp.day > 31)
		{
			temp.month++;
			temp.day -= 31;
		}
		else if (temp.month == 8 && temp.day > 31)
		{
			temp.month++;
			temp.day -= 31;
		}
		else if (temp.month == 9 && temp.day > 30)
		{
			temp.month++;
			temp.day -= 30;
		}
		else if (temp.month == 10 && temp.day > 31)
		{
			temp.month++;
			temp.day -= 31;
		}
		else if (temp.month == 11 && temp.day > 30)
		{
			temp.month++;
			temp.day -= 30;
		}
		else if (temp.month == 12 && temp.day > 31)
		{
			temp.month++;
			temp.day -= 31;
		}
		if (temp.year % 4 == 0)
		{
			if (temp.month == 2 && temp.day <= 0)
			{
				temp.month--;
				temp.day += 29;
				return temp;
			}
		}
		if (temp.month == 1 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 31;
		}
		else if (temp.month == 2 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 28;
		}
		else if (temp.month == 3 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 31;
		}
		else if (temp.month == 4 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 30;
		}
		else if (temp.month == 5 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 31;
		}
		else if (temp.month == 6 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 30;
		}
		else if (temp.month == 7 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 31;
		}
		else if (temp.month == 8 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 31;
		}
		else if (temp.month == 9 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 30;
		}
		else if (temp.month == 10 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 31;
		}
		else if (temp.month == 11 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 30;
		}
		else if (temp.month == 12 && temp.day <= 0)
		{
			temp.month--;
			temp.day += 31;
		}
		if (temp.month <= 0)
		{
			temp.year--;
			temp.month += 12;
		}
		else if (temp.month > 12)
		{
			temp.year++;
			temp.month -= 12;
		}
		else if (temp.day > 0 && temp.day < 32 && temp.month > 0 && temp.month < 13)
			break;
	}
	return temp;

}

Date& Date::operator+(const Date& a)
{
	day += a.day;
	month += a.month;
	year += a.year;
	check(*this);
	return *this;
}

Date& Date::operator-(const Date& a)
{
	day -= a.day;
	month -= a.month;
	year -= a.year;
	check(*this);
	return *this;
}

Date& Date::operator+=(int a)
{
	day += a;
	check(*this);
	return *this;
}

Date& Date::operator-=(int a)
{
	day -= a;
	check(*this);
	return *this;
}

bool Date::operator>(const Date& t)
{
	if (year > t.year)
	{
		return true;
	}
	else if (year == t.year)
	{
		if (month > t.month)
		{
			return true;
		}
		else if (month == t.month)
		{
			if (day > t.day)
			{
				return true;
			}
		}
	}
	return false;
}

bool Date::operator>=(const Date& t)
{
	if (year > t.year)
	{
		return true;
	}
	else if (year == t.year)
	{
		if (month > t.month)
		{
			return true;
		}
		else if (month == t.month)
		{
			if (day > t.day)
			{
				return true;
			}
			else if (day == t.day)
			{
				return true;
			}
		}
	}
	return false;
}

bool Date::operator<(const Date& t)
{
	if (year < t.year)
	{
		return true;
	}
	else if (year == t.year)
	{
		if (month < t.month)
		{
			return true;
		}
		else if (month == t.month)
		{
			if (day < t.day)
			{
				return true;
			}
		}
	}
	return false;
}

bool Date::operator<=(const Date& t)
{
	if (year < t.year)
	{
		return true;
	}
	else if (year == t.year)
	{
		if (month < t.month)
		{
			return true;
		}
		else if (month == t.month)
		{
			if (day < t.day)
			{
				return true;
			}
			else if (day == t.day)
			{
				return true;
			}
		}
	}
	return false;
}
bool Date::operator==(const Date& t)
{
	if (year == t.year && month == t.month && day == t.day)
		return true;
	else
		return false;
}

bool Date::operator!=(const Date& t)
{
	if (year != t.year && month != t.month && day != t.day)
		return true;
	else
		return false;
}
Date& operator--(Date& obj)
{
	obj.SetD(obj.GetD() - 1);
	obj.check(obj);
	return obj;
}
Date& operator--(Date& obj, int x)
{
	Date buff(obj);
	obj.SetD(obj.GetD() - 1);
	obj.check(obj);
	return buff;
}
Date& operator++(Date& obj)
{
	obj.SetD(obj.GetD() + 1);
	obj.check(obj);
	return obj;
}
Date& operator++(Date& obj, int x)
{
	Date buff(obj);
	obj.SetD(obj.GetD() + 1);
	obj.check(obj);
	return buff;
}

Date& operator+(int x, const Date& obj)
{
	Date buff;
	buff.SetD(obj.GetD() + x);
	buff.SetM(obj.GetM());
	buff.SetY(obj.GetY());
	buff.check(buff);
	return buff;
}
Date& operator-(int x, const Date& obj)
{
	Date buff;
	buff.SetD(obj.GetD() - x);
	buff.SetM(obj.GetM());
	buff.SetY(obj.GetY());
	buff.check(buff);
	return buff;
}
Date& operator-(const Date& a, const Date& b)
{
	Date buff;
	buff.SetD(a.GetD() - b.GetD());
	buff.SetM(a.GetM() - b.GetM());
	buff.SetY(a.GetY() - b.GetY());
	buff.check(buff);
	return buff;
}
Date& operator+(const Date& a, const Date& b)
{
	Date buff;
	buff.SetD(a.GetD() + b.GetD());
	buff.SetM(a.GetM() + b.GetM());
	buff.SetY(a.GetY() + b.GetY());
	buff.check(buff);
	return buff;
}
Date& operator+=(Date& obj, int a)
{
	obj.SetD(obj.GetD() + a);
	obj.check(obj);
	return obj;
}
Date& operator-=(Date& obj, int a)
{
	obj.SetD(obj.GetD() - a);
	obj.check(obj);
	return obj;
}
bool operator>(const Date& a, const Date& t)
{
	if (a.GetY() > t.GetY())
	{
		return true;
	}
	else if (a.GetY() == t.GetY())
	{
		if (a.GetM() > t.GetM())
		{
			return true;
		}
		else if (a.GetM() == t.GetM())
		{
			if (a.GetD() > t.GetD())
			{
				return true;
			}
		}
	}
	return false;
}
bool operator>=(const Date& a, const Date& t)
{
	if (a.GetY() > t.GetY())
	{
		return true;
	}
	else if (a.GetY() == t.GetY())
	{
		if (a.GetM() > t.GetM())
		{
			return true;
		}
		else if (a.GetM() == t.GetM())
		{
			if (a.GetD() > t.GetD())
			{
				return true;
			}
			else if (a.GetD() == t.GetD())
			{
				return true;

			}
		}
	}
	return false;
}
bool operator<(const Date& a, const Date& t)
{
	if (a.GetY() < t.GetY())
	{
		return true;
	}
	else if (a.GetY() == t.GetY())
	{
		if (a.GetM() < t.GetM())
		{
			return true;
		}
		else if (a.GetM() == t.GetM())
		{
			if (a.GetD() < t.GetD())
			{
				return true;
			}
		}
	}
	return false;
}
bool operator<=(const Date& a, const Date& t)
{
	if (a.GetY() < t.GetY())
	{
		return true;
	}
	else if (a.GetY() == t.GetY())
	{
		if (a.GetM() < t.GetM())
		{
			return true;
		}
		else if (a.GetM() == t.GetM())
		{
			if (a.GetD() < t.GetD())
			{
				return true;
			}
			else if (a.GetD() == t.GetD())
			{
				return true;

			}
		}
	}
	return false;
}
bool operator==(const Date& a, const Date& t)
{
	if (a.GetY() == t.GetY() && a.GetM() == t.GetM() && a.GetD() == t.GetD())
		return true;
	else
		return false;
}
bool operator!=(const Date& a, const Date& t)
{
	if (a.GetY() != t.GetY() && a.GetM() != t.GetM() && a.GetD() != t.GetD())
		return true;
	else
		return false;
}
int main()
{
	Date a(45, 5, 1990);
	Date b(67, 8, 2077);
	a - b;
	a.Print();
}