#include <iostream>
#include "src/lib/solution.h"

void PrintVector(vector<int> & input){
    
    for(int i =0; i < input.size(); i++){
        cout << input[i] <<" ";
    }
    cout << endl;
}

int main()
{
    Solution solution ;
    
    // remove duplicated elements without set     
    vector<int> input  = {1,2,3,2,3,4,4,4,4,4,4,4,4,5,5,5,5,5,1};

    // vector<int> result = solution.NoRepeatWithoutSet(input);
    solution.NoRepeatWithoutSet(input);
    PrintVector(input);

    // remove them with set
    vector<int> input2  = {1,2,3,2,3,4,4,4,4,4,4,4,4,5,5,5,5,5,1};

    solution.NoRepeatWithSet(input2);
    PrintVector(input2);

    // reverse vector
    vector<int> input3 = {1,2,3,4,5,6,7,8};
    solution.ReverseVector(input3);
    PrintVector(input3);

    // remove odd number
    vector<int> input4 = {1,2,3,4,5,6,7,8,9,10};
    solution.RemoveOdd(input4);
    PrintVector(input4);

    // concatenating two vectors
    vector<int> input5 = {1,2,3,4};
    vector<int> input6 = {3,4,5,6,7,8};

    vector<int> result = solution.ConcatenatingTwoVectors(input5, input6);
    PrintVector(result);

    // union of two vectors.
    vector<int> input7 = {1,2,3,4};
    vector<int> input8 = {3,4,5,6,7,8};

    vector<int> result2 = solution.Union(input7, input8);
    PrintVector(result2);

    return EXIT_SUCCESS;
}