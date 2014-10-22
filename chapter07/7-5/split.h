#ifndef split_H
#define split_H
#include <list>
#include <string>

bool space(char c);
bool not_space(char c);

std::list<std::string> split(const std::string& s);

#endif // split_H
