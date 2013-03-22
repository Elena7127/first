#include <QtGui/QApplication>
#include "Controller.h"


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Controller c;
	c.Start();

	return a.exec();
}
