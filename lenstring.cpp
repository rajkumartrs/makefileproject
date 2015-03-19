#include <iostream>
#include "functions.h"

using namespace std;

int length(char *s1)
{
 int l=0;
 while(*s1!='\0')
 {
  l++;
  s1++;
 }
 return l;
}
