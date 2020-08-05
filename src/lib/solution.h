#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
  void NoRepeatWithoutSet(vector<int> & input);

  void NoRepeatWithSet(vector<int> & input);

  void ReverseVector(vector<int> & input);

  void RemoveOdd(vector<int> & input);

  
  vector<int> ConcatenatingTwoVectors(vector<int> & input1, vector<int> & input2);

  vector<int>  Union(vector<int> & input1, vector<int> & input2);
};

#endif