#include <vector>
#include <iostream>
using namespace std;

bool isPrime(int num){
    if(num == 0 || num == 1)
        return false;
    
    // [2, n] 사이에 약수가 존재하는지 확인
    for(int i = 2; i < num; i++){
        if(num%i==0) // 약수가 존재하면
            return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;

    for(int i = 0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size(); j++){
            for(int k = j+1; k < nums.size(); k++){
                int n = nums[i] + nums[j] + nums[k];
                if(isPrime(n) == true)
                    answer++;
            }
        }
    }

    return answer;
}