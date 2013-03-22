#ifndef MODEL_H
#define MODEL_H

#include <QtGui/QMainWindow>
#include <qdatetime.h>
#include <qstring.h>



using namespace::std;

class Person
{
private:
	QString Surname,Name,Patronymic,Gender;
	QDate Birthday;
	int Age;
	QString Education, MaritalStatus;
public:
	Person(void);
	void SetSurname(QString s){this->Surname = s;};
	void SetName(QString s){this->Name = s;};
	void SetPatronymic(QString s){this->Patronymic = s;};
	void SetGender(QString s){this->Gender = s;};
	void SetBirthday(QDate s){this->Birthday = s;};
	void SetAge(int s){this->Age = s;};
	void SetEducation(QString s){this->Education = s;};
	void SetMaritalStatus(QString s){this->MaritalStatus = s;};
	QString GetSurname(){return Surname;};
	QString GetName(){return Name;};
	QString GetPatronymic(){return Patronymic;};
	QString GetGender(){return Gender;};
	QDate GetBirthday(){return Birthday;};
	int GetAge(){return Age;};
	QString GetEducation(){return Education;};
	QString GetMaritalStatus(){return MaritalStatus;};
	virtual ~Person(void);
	//friend istream &operator >> (istream &p,Person& m);
	signals:
		void changed();
};
#endif

