#include<string>
#include<vector>
#include<algorithm>
 
using namespace std;
 
bool Standard(string A, string B)
{
    if (A + B > B + A)
        return true;
    return false;
}
 
string solution(vector<int> numbers)
{
    string answer = "";
    vector<string> array;
    
    for (int i = 0; i < numbers.size(); i++)
        array.push_back(to_string(numbers[i]));
    
    sort(array.begin(), array.end(), Standard);
    
    for (int i = 0; i < array.size(); i++)
        answer = answer + array[i];
    
    if (answer[0] == '0')
        answer = "0";
    
    return answer;
}