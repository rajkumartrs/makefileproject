#include <iostream>
#include "functions.h"
int length(char*);

using namespace std;

int main()
{
 char str1[50];
 int len;
 cout<<"\n Enter the String: "<<endl;
 cin>>str1;
 len=length(str1);
 cout<<"\n Length of the string = "<<len<<endl;
 return 0;
}
