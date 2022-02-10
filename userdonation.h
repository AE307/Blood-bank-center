#ifndef USERDONATION_H
#define USERDONATION_H
#include<string>
#include<cstring>
#include<list>
using namespace std;
class userdonation
{
public:
    string where;
    string age;
    string weight;
    string illnes;
    string username;
public:
    userdonation();
    userdonation(string wh ,string ag ,string we ,string ill ,string un);
    void write_to_file();
    list<userdonation> read_from_file();
};

#endif // USERDONATION_H
