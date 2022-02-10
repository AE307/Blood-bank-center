#ifndef USERTRANSFUTION_H
#define USERTRANSFUTION_H
#include<string>
#include<cstring>
#include<list>
using namespace std;

class usertransfution
{
public:
    string blood_type;
    string where;
    string username;
    string pmethod;
public:
    usertransfution();
    usertransfution(string bt ,string wh ,string un ,string pm);
    void write_to_file();
    list<usertransfution> read_from_file();

};

#endif // USERTRANSFUTION_H
