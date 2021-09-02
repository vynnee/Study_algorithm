#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int n = 0;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(')n++;
        else n--;
        if(n < 0)answer = false;
    }
    
    if(n != 0) answer = false;

    return answer;
}