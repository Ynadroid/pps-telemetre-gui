#include <iostream>

#include <QApplication>
#include <QLabel>

int main(int argc,char** argv)
{
	//std::cout << "Hello !" << std::endl;

	QApplication app(argc,argv);

	QLabel * label = new QLabel("Hello by Qt");
	label->show();

	return app.exec();
}
