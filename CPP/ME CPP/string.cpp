#include<string.h>
#include <iostream.h>
class string
{
    char *p;
    int len;
public:
    string()
    {
        len=0;
        p=0;
    }
    string(const char * s);
    string(const string & s);
    string()
    {
        delete p;
    }
};
string :: string(const char * s)
{
    len=strlen(s);
    p=new char[len+1]
    strcpy(p,s);
}
string :: string(const string & s)
{

}
