#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;

// 定义一个全局变量来记录全排列的数量
int permutationCount = 0;

// 交换数组中的两个元素的位置
void swap(vector<int>& nums, int i, int j) {
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

// 递归函数，用于生成全排列
void permute(vector<int>& nums, int start) {
    if (start == nums.size()) {
        // 当已经遍历完整个数组时，输出当前排列
        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl;
        permutationCount++;
        return;
    }

    // 对当前位置以及后面的位置进行递归调用
    for (int i = start; i < nums.size(); ++i) {
        swap(nums, start, i);
        permute(nums, start + 1);
        swap(nums, start, i); // 回溯，恢复数组原来的顺序
    }
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    //cout << "Enter the value of n: ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        nums[i] = i + 1;
    }

   // auto start = high_resolution_clock::now(); // 记录开始时间
    permute(nums, 0); // 调用递归函数求解全排列
    //auto stop = high_resolution_clock::now(); // 记录结束时间

    // auto duration = duration_cast<milliseconds>(stop - start); // 计算时间差
    // cout << "Total permutations: " << permutationCount << endl;
    // cout << "Time taken: " << duration.count() << " milliseconds" << endl;

    return 0;
}
