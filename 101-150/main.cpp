#include <iostream>

#include "problem105.h"
#include "problem134.h"
#include "problem140.h"
#include "problem118.h"
#include "problem119.h"
#include "problem121.h"
#include "problem123.h"
#include "problem124.h"
#include "problem126.h"
#include "problem127.h"


using namespace std;


int main() {
    //problem134
    vector<int> gas{1, 2, 3, 4, 5};
    vector<int> cost{3, 4, 5, 1, 2};
    cout << canCompleteCircuit2(gas, cost) << endl;

    //problem 118
    vector<vector<int>> triangle = generate(5);
    for (auto &i : triangle) {
        for (auto &j : i) {
            cout << j << " ";
        }
        cout << "\n";
    }

    //problem119
    vector<int> indexrow = getRow(4);
    for (auto &i : indexrow)
        cout << i << " ";

    //problem121
    cout << "\n\nproblem121: \n";
    // std::vector<int> nums{7, 1, 5, 3, 6, 4};
    std::vector<int> nums121{7, 6, 4, 3, 1};
    cout << maxProfit2(nums121) << endl;


    //problem123
    cout << "\n\nproblem123: \n";
    // std::vector<int> nums{7, 1, 5, 3, 6, 4};
    std::vector<int> nums123{3,3,5,0,0,3,1,4};
    cout << maxProfitIII3(nums123) << endl;

    cout << "\n\nproblem140: \n";
    vector<std::string> input140{"cat", "cats", "and", "sand", "dog"};
    vector<string> res140 = wordBreakII("catsanddog", input140);
    for (auto &i : res140) {
        cout << i << "\n";
    }

    // problem126
    cout << "\n\nproblem126\n";
//    vector<string> wordlist126{"hot","dot","dog","lot","log","cog"};
//    string beginword126 = "hit", endword126 = "cog";
    vector<string> wordlist126{"a", "b", "c"};
    string beginword126 = "a", endword126 = "c";
    vector<vector<string>> res126 = findLadders(beginword126, endword126, wordlist126);
    for (auto &i : res126) {
        for (auto &j : i) {
            cout << j << " ";
        }
        cout << "\n";
    }


    cout << "\n\nproblem127\n";
    vector<string> wordlist127{"a", "b", "c"};
    string beginword127 = "a", endword127 = "c";
    cout << ladderLength(beginword127, endword127, wordlist127) << endl;

    return 0;
}