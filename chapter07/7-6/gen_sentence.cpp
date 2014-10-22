#include "gen_sentence.h"
#include <cstdlib>
#include <iterator>
#include <stdexcept>
#include <algorithm>
using namespace std;

bool bracketed(const string& s)//whether a class
{
    return s.size()>1 && s[0]=='<' && s[s.size()-1]=='>';
}

int nrand(int n)
{
    if(n<=0 || n>RAND_MAX)
        throw domain_error("Argument to nrand is out of range.");
    const int bucket_size=RAND_MAX/n;
    int r;
    do
    {
        r=rand()/bucket_size;
    }while(r>=n);
    return r;
}

void gen_aux(const Grammar& g,const string& word,vector<string>& rules,vector<string>& ret)
{
    if(!bracketed(word))
    {
        ret.push_back(word);
    }
    else
    {
        Grammar::const_iterator it=g.find(word);
        if(it==g.end())
            throw logic_error("empty rule");
        const Rule_collection& c=it->second;
        const Rule& r=c[nrand(c.size())];
        for(Rule::const_reverse_iterator i=r.rbegin();i!=r.rend();++i)
        {
            rules.push_back(*i);
        }
    }
}

vector<string> gen_sentence(const Grammar& g)
{
    vector<string> ret;//generate the sentence
    vector<string> rules;//put the rules
    rules.push_back("<sentence>");

    while(!rules.empty())
    {
        //out from the stack
        string rule=rules.back();
        //del it from the stack
        rules.pop_back();

        gen_aux(g,rule,rules,ret);
    }

    return ret;
}

