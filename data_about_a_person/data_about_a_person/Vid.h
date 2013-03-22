#ifndef VID_H
#define VID_H

#include <QtGui/QMainWindow>
#include <qdatetime.h>
#include <qstring.h>

class Vid
{
public:
	Vid(void);
	virtual ~Vid(void);
	public slots:
		void change();
};

#endif

