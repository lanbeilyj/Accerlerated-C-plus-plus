#ifndef grammar_H
#define grammar_H
#include <vector>
#include <map>
#include <string>
typedef std::vector<std::string> Rule;
typedef std::vector<Rule> Rule_collection;
typedef std::map<std::string,Rule_collection> Grammar;

Grammar read_grammar();

#endif // grammar_H
