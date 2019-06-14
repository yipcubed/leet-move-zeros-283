#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int zero_index = 0;
        while (zero_index < len && nums[zero_index] != 0)
            ++zero_index;
        for (int i = zero_index + 1; i < len; ++i) {
            if (nums[i] != 0) {
                nums[zero_index] = nums[i];
                nums[i] = 0;
                while (zero_index < len && nums[zero_index] != 0) {
                    ++zero_index;
                }
            }
        }
    }
};

void print(vector<int>& v) {
  cout << "[";
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";
  }
  cout << "]" << endl;;
}

int main() {
  Solution S;

  vector<int> v1{0,1,0,3,12};
  print(v1);
  S.moveZeroes(v1);
  print(v1);

  vector<int> v2{7,1,0,3,12};
  print(v2);
  S.moveZeroes(v2);
  print(v2);

  vector<int> v3{7,1,4,3,12};
  print(v3);
  S.moveZeroes(v3);
  print(v3);

  vector<int> v4{0, 0};
  print(v4);
  S.moveZeroes(v4);
  print(v4);

  std::cout << "Done!\n";
}