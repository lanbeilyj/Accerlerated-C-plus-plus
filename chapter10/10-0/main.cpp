#include <iostream>
#include <fstream>
 using namespace std;
 int main(int argc,char **argv)
 {
     int fail_count=0;
     for(int i=1;i<argc;++i)
     {
         cout<<endl<<endl<<"this is "<<i<<".txt"<<endl;
         ifstream in(argv[i]);
         if(in)
         {
             string s;
             while(getline(in,s))
                cout<<s<<endl;
         }
         else
         {
             cerr<<"cannot open file "<<argv[i]<<endl;
             ++fail_count;
         }
     }
     return fail_count;
 }
