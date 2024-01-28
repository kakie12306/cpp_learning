#include <iostream>
#include <QtWidgets/QApplication>

int main(int argc, char* argv[]) {
    std::cout << "test cmake qt\n";
    QApplication a(argc, argv);
    return a.exec();
}