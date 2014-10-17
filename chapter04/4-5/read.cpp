//read.cpp
#include "read.h"

using std::string;using std::vector;using std::istream;using std::cout;

int read(istream& in,vector<string>& words)
{
	string word;
	cout<<"input words:";
	while(in>>word)
		words.push_back(word);

	int maxlen=0;
	for(vector<string>::const_iterator it=words.begin();
		it!=words.end();++it)
	{
		string::size_type tmp;
		tmp=(*it).size();
		if(maxlen<tmp)
			maxlen=tmp;
	}
	return maxlen;
}