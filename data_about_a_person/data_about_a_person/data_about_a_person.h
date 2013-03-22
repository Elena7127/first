#ifndef DATA_ABOUT_A_PERSON_H
#define DATA_ABOUT_A_PERSON_H

#include <QtGui/QMainWindow>
#include "ui_data_about_a_person.h"

class data_about_a_person : public QMainWindow
{
	Q_OBJECT

public:
	data_about_a_person(QWidget *parent = 0, Qt::WFlags flags = 0);
	~data_about_a_person();

private:
	Ui::data_about_a_personClass ui;
};

#endif // DATA_ABOUT_A_PERSON_H
