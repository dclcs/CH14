#pragma once
#include <string>
#include <valarray>
using namespace std;
class Studenti :
	private std::string, private std::valarray<double>
{
private:
	typedef std::valarray<double> ArrayDb;
	std::ostream & arr_out(std::ostream & os) const;
public:
	Studenti() : string("NULL Student"), ArrayDb() {}
	explicit Studenti(const string &s ): string(s), ArrayDb(){}
	explicit Studenti(int n):string("NULLy"), ArrayDb(n){}
	Studenti(const string &s, int n): string(s), ArrayDb(n){}
	Studenti(const string &s, const ArrayDb &a):string(s), ArrayDb(a){}
	Studenti(const char* s, const double * pd, int n):
		string(s), ArrayDb(pd, n){}

	~Studenti() {}
	double Average() const;
	const std::string &Name() const;
	double & operator[](int i);
	double operator[](int i) const;

	//input
	friend std::istream & operator >> (std::istream &is,
		Studenti &stu);
	friend std::istream & getline(std::istream &is,
		Studenti & stu);
	//output
	friend std::ostream & operator << (std::ostream &os,
		const Studenti& stu);
};

