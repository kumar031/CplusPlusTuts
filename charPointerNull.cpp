// Online C++ compiler to run C++ program online
#include <iostream>
void checkNull(char* c){
     //if (!c)
    if (c==nullptr)
    {
        std::cout<<"got null pointer"<<std::endl;
    }else if (c=="")
    {
        std::cout<<"got 2 inverted comma "<<std::endl;
    }else
    {
         std::cout<<"got string "<<std::endl;
    }
}
int main() {
   // checkNull(nullptr);
    checkNull("");//inverted comma is not nullpointer
   // checkNull("nitesh");
}
//===============================================
/*
output =  got 2 inverted comma
*/
