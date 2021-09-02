#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    
    int start = 0, idx = 0;
    char maxnum = NULL;
    
    for(int i = 0; i < number.size() - k; i++){
        maxnum = number[start];
        idx = start;
        
        for(int j = start; j <= i+k; j++){
            if(maxnum < number[j]){
                maxnum = number[j];
                idx = j;
            }
        }
        start = idx + 1;
        answer += maxnum;
    }
    return answer;
}