#include "Studenti.h"

std::ostream & Studenti::arr_out(std::ostream & os) const
{
	int lim = ArrayDb::size();
	int i;
	if (lim > 0)
	{
		for (i = 0; i < lim; i++)
		{
			os << ArrayDb::operator[](i) << " ";
			if (i % 5 == 4) os << endl;
		}
		if (i % 5 != 0) os << endl;
	}
	else
		os << " empty array ";
	return os;
}

double Studenti::Average() const
{
	if (ArrayDb::size() > 0)
		return ArrayDb::sum() / ArrayDb::size();
	else
	{
		return 0;
	}
}

const std::string & Studenti::Name() const
{
	return (const string &)*this;
}

double & Studenti::operator[](int i)
{
	return ArrayDb::operator[](i);
}

double Studenti::operator[](int i) const
{
	return ArrayDb::operator[](i);
}

std::istream & operator>>(std::istream & is, Studenti & stu)
{
	is >> (string &)stu;
	return is;
}

std::istream & getline(std::istream & is, Studenti & stu)
{
	getline(is, (string &)stu);
	return is;
}

std::ostream & operator<<(std::ostream & os, const Studenti & stu)
{
	os << "Scores for " << (const string &) stu << ":\n";
	stu.arr_out(os);
	return os;
}
