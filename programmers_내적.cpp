#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    
    int s[a.size()];
    
    for(int i = 0; i < a.size(); i++){
        s[i] = a[i] * b[i];
        answer += s[i];
    }
    
    return answer;
}