#include "userdonation.h"
#include<fstream>
#include <QMessageBox>
#include<QDebug>

userdonation::userdonation()
{

}
userdonation::userdonation(string wh,string ag ,string we ,string ill ,string un)
{
    this->where = wh;
    this->age = ag;
    this->weight = we;
    this->illnes = ill;
    this->username = un;
}
void userdonation::write_to_file()
{
    ofstream OutTextFile;
    OutTextFile.open("C:\\Users\\Lenovo\\Documents\\userdonation.txt", ios::app);
    OutTextFile<<this->where<<" "<<this->age<<" "<<this->weight<<" "<<this->illnes<<" "<<this->username<<'\n';
    OutTextFile.close();
}
