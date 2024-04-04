#include <iostream>
#include <deque>
#include <vector>
#include <string>
using namespace std;

// 转换牌面值，将'X'转换为"10"
string convertCard(char c) {
    if (c == 'X') return "10";
    return string(1, c);
}

// 主要游戏逻辑
void marbleGame(deque<string>& A, deque<string>& B) {
    vector<string> table; // 牌桌上的牌
    bool A_turn = true; // 轮流标志

    while (!A.empty() || !B.empty()) {
        string currentCard;
        if (A_turn && !A.empty()) {
            currentCard = A.front();
            A.pop_front();
        } else if (!A_turn && !B.empty()) {
            currentCard = B.front();
            B.pop_front();
        }

        // 放牌到桌上
        table.push_back(currentCard);
        
        // 检查是否有相同的牌，从尾部开始检查
        for (int i = table.size() - 2; i >= 0; --i) {
            if (table[i] == currentCard) {
                // 赢牌，将中间的牌反序放入赢家手中
                if (A_turn) {
                    while (table.size() > i) {
                        A.push_back(table.back());
                        table.pop_back();
                    }
                } else {
                    while (table.size() > i) {
                        B.push_back(table.back());
                        table.pop_back();
                    }
                }
                break; // 只处理最近的一对相同牌
            }
        }

        // 切换玩家
        A_turn = !A_turn;
    }

    // 输出赢家的牌序列
    if (!A.empty()) {
        for (auto& card : A) cout << card;
    } else {
        for (auto& card : B) cout << card;
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string inputA, inputB;
    cin >> inputA >> inputB;

    deque<string> A, B;
    for (char& c : inputA) A.push_back(convertCard(c));
    for (char& c : inputB) B.push_back(convertCard(c));

    marbleGame(A, B);

    return 0;
}
