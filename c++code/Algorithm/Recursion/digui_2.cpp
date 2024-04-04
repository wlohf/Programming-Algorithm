#include <iostream>
#include <vector>
#include <algorithm> // 包含用于算法操作的头文件

using namespace std;

// 交换数组中的两个元素的位置
void swap(vector<int>& nums, int i, int j) {
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

// 输出当前排列
void printSubset(const vector<int>& subset) {
    for (int num : subset) {
        cout << num << " ";  // 输出当前排列
    }
    cout << endl;  // 输出换行符
}

// 生成字典序法下一个排列
bool nextPermutation(vector<int>& nums) {
    int n = nums.size();
    
    // 1. 找到最大的索引 k，满足 nums[k] < nums[k + 1]
    int k = -1;
    for (int i = n - 2; i >= 0; --i) {
        if (nums[i] < nums[i + 1]) {
            k = i;
            break;
        }
    }
    
    if (k == -1) {
        // 已经是最后一个排列
        return false;
    }
    
    // 2. 找到最大的索引 l，满足 nums[k] < nums[l]
    int l = -1;
    for (int i = n - 1; i > k; --i) {
        if (nums[i] > nums[k]) {
            l = i;
            break;
        }
    }
    
    // 3. 交换索引 k 和索引 l 处的元素
    swap(nums, k, l);
    
    // 4. 将索引 k + 1 到末尾的元素反转
    reverse(nums.begin() + k + 1, nums.end()); // 使用 std::reverse 函数
    
    return true;
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    //cout << "Enter the value of n: ";  // 提示用户输入 n 的值
    cin >> n;  // 从标准输入流中读取用户输入的 n
    
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        nums[i] = i + 1;  // 初始化为从 1 到 n 的值
    }
    
    // 输出空行，表示没有选任何数的方案
    cout << endl;
    
    // 输出初始排列，即只选择一个数的方案
    for (int i = 0; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    // 使用字典序法生成所有可能的组合
    while (nextPermutation(nums)) {
        sort(nums.begin(), nums.end()); // 对排列进行升序排序
        printSubset(nums);
    }
    
    return 0;
}
