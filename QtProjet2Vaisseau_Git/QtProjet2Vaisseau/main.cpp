#include "QtProjet2Vaisseau.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtProjet2Vaisseau w;
	w.show();
	return a.exec();
}
