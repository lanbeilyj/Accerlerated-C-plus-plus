#include <stdexcept>
#include <vector>
#include "grade.h"
#include "median.h"
using namespace std;

double grade(double midterm,double fin,double homework)
{
	return grade(0.2*midterm+0.4*fin+0.4*homework);
}

double grade(double midterm,double fin,const vector<double>& hw)
{
	return grade(midterm,fin,median(hw));
}

string grade(double grade)
{
    static const double numbers[]={90,85,75,60,0};
    static const char *letters[]={"A","B","C","D","E"};
    static const size_t ngrades=sizeof(numbers)/sizeof(*numbers);
    for(size_t i=0;i<ngrades;++i)
    {
        if(numbers[i]<=grade)
            return letters[i];
    }
    return "?\?\?";
}
