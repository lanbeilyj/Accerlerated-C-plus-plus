#ifndef grammar_H
#define grammar_H
#include <list>
#include <map>
#include <string>
typedef std::list<std::string> Rule;
typedef std::list<Rule> Rule_collection;
typedef std::map<std::string,Rule_collection> Grammar;

Grammar read_grammar();

#endif // grammar_H
