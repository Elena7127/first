#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <qdialog.h>
#include "Model.h"
#include <qwidget.h>
#include <QtGui/QMainWindow>
#include <qpushbutton.h>
#include <qboxlayout.h>
#include <qlabel.h>
#include <qdialog.h>
#include <qlineedit.h>
#include <qspinbox.h>
#include <qformlayout.h>
#include <qdatetimeedit.h>

class Controller: public QDialog
{
	Q_OBJECT
public:
	Controller(void);
	virtual ~Controller(void);
	void Start();

};

#endif

