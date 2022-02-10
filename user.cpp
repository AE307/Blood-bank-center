#include "user.h"
#include<fstream>
#include <QMessageBox>
#include<QDebug>
user::user()
{

}
user::user(string fn, string ln, string ps , string un , string bt , int ag , string ge)
{
    this->password = ps;
    this->first_name = fn;
    this->last_name = ln;
    this->username = un;
    this->blood_type = bt;
    this->age =ag;
    this->gender=ge;
}

void user::write_to_file()
{
    ofstream OutTextFile;
    OutTextFile.open("C:\\Users\\Lenovo\\Documents\\users.txt", ios::app);
    OutTextFile<<this->first_name<<" "<<this->last_name<<" "<<this->password<<" "<<this->username<<" "
              <<this->blood_type<<" "<<this->age<<" "<<this->gender<<'\n';
    OutTextFile.close();
}
