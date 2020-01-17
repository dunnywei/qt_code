#include <QApplication>
#include <QLabel>
int main(int argc,char* argv[])
{
    QApplication app(argc,argv);

   /*
	QLabel *label=new QLabel("hellow world");
	label->setWindowTitle("Mine");
	label->resize(400,400);
	label->show();
   */


	QLabel label("hellow world");
	label.setWindowTitle("Mine");
	label.resize(400,400);
	label.show();

    return app.exec();
}
