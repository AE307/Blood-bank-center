#ifndef USER_H
#define USER_H
#include<string>
#include<cstring>
#include<list>
using namespace std;

class user
{
public:
    string username;
    string first_name;
    string last_name;
    string password;
    string blood_type;
    int age;
    string gender;

public:
    user();
    user(string fn, string ln, string ps , string un , string bt , int ag , string ge);

    void write_to_file();
    list<user> read_from_file();
};

#endif // USER_H
