#include "Student.h"
using namespace std;
//friend function
std::istream & operator>>(std::istream & is, Student & stu)
{
	// TODO: �ڴ˴����� return ���
	is >> stu.name;
	return is;
}

std::istream & getline(std::istream & is, Student & stu)
{
	// TODO: �ڴ˴����� return ���
	getline(is, stu.name);
	return is;
}

std::ostream & operator<<(std::ostream & os, const Student & stu)
{
	// TODO: �ڴ˴����� return ���
	os << "Scores for " << stu.name << ":\n";
	stu.arr_out(os);
	return os;
}
//private function
std::ostream & Student::arr_out(std::ostream & os) const
{
	// TODO: �ڴ˴����� return ���
	int i;
	int lim = scores.size();
	if (lim > 0)
	{
		for ( i = 0; i < lim; i++)
		{
			os << scores[i] << " ";
			if (i % 5 == 4)
				os << endl;
		}
		if (i % 5 != 0)
			os << endl;
	}
	else
		os << " empty array";
	return os;
}
//public function
double Student::Average() const
{
	if (scores.size() > 0) {
		return scores.sum() / scores.size();
	}
	else
		return 0;
}

const std::string & Student::Name() const
{
	// TODO: �ڴ˴����� return ���
	return name;
}

double & Student::operator[](int i)
{
	// TODO: �ڴ˴����� return ���
	return scores[i];
}

double Student::operator[](int i) const
{
	return scores[i];
}
