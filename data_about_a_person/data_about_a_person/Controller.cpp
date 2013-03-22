#include "Controller.h"


Controller::Controller(void)
{
}


Controller::~Controller(void)
{
}

void Controller::Start(){
	Person m;

	QWidget *MainWindow = new QWidget, 
		*Help = new QWidget,
		*Help1 = new QWidget,
		*Form = new QWidget;
	QLabel *Label = new QLabel(QString::fromLocal8Bit("��� ������� �������?"));
	QLineEdit *FS = new QLineEdit,
		*FN = new QLineEdit,
		*FP = new QLineEdit,
		*FG = new QLineEdit,
		*FE = new QLineEdit,
		*FM = new QLineEdit;
	QSpinBox *FA = new QSpinBox;
	QDateEdit *FD = new QDateEdit;

	QFormLayout *LayoutForm = new QFormLayout;
	QBoxLayout *MainLayout = new QHBoxLayout,
		*L = new QHBoxLayout,
		*MainLayoutForm = new QVBoxLayout,
		*MainLayoutMenu = new QVBoxLayout;
	QPushButton *Menu = new QPushButton(QString::fromLocal8Bit("����")),
		*Open = new QPushButton(QString::fromLocal8Bit("������� �� �����")),
		*Save = new QPushButton(QString::fromLocal8Bit("���������")),
		*Cancel = new QPushButton(QString::fromLocal8Bit("��������")),
		*Create = new QPushButton(QString::fromLocal8Bit("�������"));	
	QDialog *Data = new QDialog;

	MainWindow->resize(300,200);
	Menu->resize(50,30);
	MainLayout->addWidget(Menu);
	MainWindow->setLayout(MainLayout);
	MainWindow->setWindowTitle(QString::fromLocal8Bit("������ � ��������"));
	MainWindow->show();


	Data->setHidden(true);
	MainLayoutMenu->addWidget(Label);
	MainLayoutMenu->addWidget(Open);
	MainLayoutMenu->addWidget(Create);
	Data->setLayout(MainLayoutMenu);
	QObject::connect(Menu,SIGNAL(clicked()),Data,SLOT(show()));
	QObject::connect(Create,SIGNAL(clicked()),Form,SLOT(show()));
	
	LayoutForm->addRow(QString::fromLocal8Bit("������� "),FS);
	LayoutForm->addRow(QString::fromLocal8Bit("��� "),FN);
	LayoutForm->addRow(QString::fromLocal8Bit("�������� "),FP);
	LayoutForm->addRow(QString::fromLocal8Bit("��� "),FG);
	LayoutForm->addRow(QString::fromLocal8Bit("���� �������� "),FD);
	LayoutForm->addRow(QString::fromLocal8Bit("������� "),FA);
	LayoutForm->addRow(QString::fromLocal8Bit("�����������"),FE);
	LayoutForm->addRow(QString::fromLocal8Bit("�������� ��������� "),FM);
	L->addWidget(Save);
	L->addWidget(Cancel);
	Help->setLayout(LayoutForm);
	Help1->setLayout(L);
	MainLayoutForm->addWidget(Help);
	MainLayoutForm->addWidget(Help1);
	Form->setLayout(MainLayoutForm);

	/*QObject::connect(Save,SIGNAL(clicked()),m,SLOT(change()));*/

}
