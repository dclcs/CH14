#include <iostream>
#include "Studenti.h"
using namespace std;

void set(Studenti & sa, int n);
const int pupils = 3;
const int quizzes = 5;
template <typename T>
class HasFriend
{
private:
	T item;
	static int ct;
public:
	HasFriend(const T & i) : item(i) { ct++ };
	~HasFriend(){}
	friend void counts();
	friend void reports(HasFriend<T> &);
};

template <typename T>
int HasFriend<T>::ct = 0;

void counts()
{}
int main()
{
	/*
	
	Studenti ada[pupils] =
	{ Studenti(quizzes), Studenti(quizzes), Studenti(quizzes) };

	for (int i = 0; i < pupils; i++)
	{
		set(ada[i], quizzes);
	}
	cout << "\nStudent List\n";
	for ( int i = 0;   i < pupils;   i++)
	{
		cout << ada[i].Name() << endl;
	}
	cout << "\nResult:";
	for (int i = 0; i < pupils; i++)
	{
		cout << endl << ada[i];
		cout << "average: " << ada[i].Average() << endl;
	}
	cout << "Done.\n";
	getchar();
	*/


	return 0;
}

void set(Studenti & sa, int n)
{
	cout << "Please enter the student's name: ";
	getline(cin, sa);
	cout << "Please enter " << n << " quize scores:\n";
	for (int i = 0; i < n; i++)
	{
		cin >> sa[i];
	}
	while (cin.get() != '\n')
	{
		continue;
	}

	
}
