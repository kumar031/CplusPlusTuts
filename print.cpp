#include<iostream>
#include<cstring>
//firmware version must be taken from devInfo

class string
{
public:
char * s;
uint32_t size;
public:
string(const char * s)//constructor
{
    size = strlen(s);
    this->s = new char[size+1];
    memcpy(this->s,s,size);
    std::cout<<size<<std::endl;
}
~string(){
    
    if (s != nullptr)
    {
    std::cout<<"deleting in destructor for"<<s<<std::endl;
      delete [] s;
    }
}
//will now make copy constructor and that too deep copy
string(const string &strng )
{
    size=strlen(strng.s);
    std::cout<<"====>>"<<strng.size<<std::endl<<"====>>"<<size<<std::endl;
    s = new char[size+1];
    memcpy(s,strng.s,size+1);
    //delete []strng.s;//this is not move constructor, so dont delete it.
    std::cout<<"copy constructor is called"<<std::endl;
    std::cout<<size<<std::endl;
}
};
int main()
{
    string ss("nitesh kumar srivastava");
    std::cout<<ss.s<<std::endl;
    string sc(ss);
    std::cout<<sc.s<<std::endl;
    return 0;
}