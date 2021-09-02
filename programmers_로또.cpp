#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
    int high = 0, low = 0;
    
    int ranking[7] = {6,6,5,4,3,2,1};
    
    for(int i = 0; i < lottos.size(); i++){
        for(int j = 0; j < lottos.size(); j++){
            if(lottos[i] == win_nums[j]){
                low++;
                high++;
            }
        }
        if(lottos[i]==0)
            high++;
    }
    answer.push_back(ranking[high]);
    answer.push_back(ranking[low]);
    return answer;
}