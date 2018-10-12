#include <QtCore/QCoreApplication>
#include <QSqlDriver>
#include <QSqlDatabase>

#include <iostream>
int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	QSqlDatabase db  = QSqlDatabase::addDatabase("QMYSQL3");
	db.setHostName("140.143.19.197"); 
	db.setPort(3306);
	//db.setHostName("localhost"); 
	db.setDatabaseName("mysql");
	db.setUserName("root");
	db.setPassword("root123");
	bool ok = db.open();

	int zzz = 0;

	std::cout << "Hello MySql" << std::endl;
	return a.exec();
}
