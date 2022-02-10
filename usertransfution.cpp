#include "usertransfution.h"
#include<fstream>
#include <QMessageBox>
#include<QDebug>
usertransfution::usertransfution()
{

}
usertransfution::usertransfution(string bt ,string wh ,string un ,string pm)
{
    this->blood_type=bt;
    this->where=wh;
    this->username=un;
    this->pmethod=pm;
}
void usertransfution::write_to_file()
{
    ofstream OutTextFile;
    OutTextFile.open("C:\\Users\\Lenovo\\Documents\\usertransfusion.txt", ios::app);
    OutTextFile<<this->blood_type<<" "<<this->where<<" "<<this->username<<" "<<this->pmethod<<'\n';
    OutTextFile.close();
}
