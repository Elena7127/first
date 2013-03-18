/*
 * File:   main.cpp
 * Author: lagutina
 *
 * Created on 20 Февраль 2013 г., 14:07
 */

#include <QtGui/QApplication>
#include "LabelTextNumber.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    LabelTextNumber label;
    label.setTextNumber("Hello!", 15);
    label.setWindowTitle("First Example");
    label.resize(200,200);
    label.move(300, 200);
    label.show();

    return app.exec();
}
