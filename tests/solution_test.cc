#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

using namespace std;

void PrintVector(vector<int> & input){
    
    for(int i =0; i < input.size(); i++){
        cout << input[i] <<" ";
    }
    cout << endl;
}

TEST(NoRepeatWithoutSetTest, NoRepeatWithoutSetTest) {
  Solution solution;
  vector<int> input  = {1,2,3,2,3,4,4,4,4,4,4,4,4,5,5,5,5,5,1};
  vector<int> result  = {1, 2, 3, 4, 5};
  solution.NoRepeatWithoutSet(input);
  EXPECT_EQ(input, result);
}

TEST(ReverseVectorTest, ReverseVectorTest) {
  Solution solution;

  vector<int> input3 = {1,2,3,4,5,6,7,8};
  vector<int> result3 = {8,7,6,5,4,3,2,1};

  solution.ReverseVector(input3);
  EXPECT_EQ(input3, result3);
}

TEST(RemoveOddTest, RemoveOddTest) {
  Solution solution;

  vector<int> input4 = {1,2,3,4,5,6,7,8,9,10};
  vector<int> result4 = {2,4,6,8,10};
  
  solution.RemoveOdd(input4);
  EXPECT_EQ(input4, result4);
}

TEST(ConcatenatingTwoVectorsTest, ConcatenatingTwoVectorsTest) {
  Solution solution;

  vector<int> input5 = {1,2,3,4};
  vector<int> input6 = {3,4,5,6,7,8};
  vector<int> result6 = {1,2,3,4,3,4,5,6,7,8};
  
  EXPECT_EQ(solution.ConcatenatingTwoVectors(input5, input6), result6);
}

TEST(UnionTest, UnionTest) {
  Solution solution;

  vector<int> input7 = {1,2,3,4};
  vector<int> input8 = {3,4,5,6,7,8};
  vector<int> result8 = {1,2,3,4,5,6,7,8};
  
  EXPECT_EQ(solution.Union(input7, input8), result8);
}
