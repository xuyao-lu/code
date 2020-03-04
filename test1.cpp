#include <iostream>
using namespace std;
int main()
{
    int grade;
    cin>>grade;
    switch(grade)
    {
    case 1:cout<<"你是一年级学生";break;
    case 2:cout<<"你是二年级学生";break;

    case 3:cout<<"你是三年级学生";break;
    default:cout<<"你是高年级学生";
    }

       return 0;
}

