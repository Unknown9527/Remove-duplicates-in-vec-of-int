#include "solution.h"
#include <map>

// according to the homework descrption, this function should have void as its return type
// in other words, this function modifies the input vector directly. 
void Solution::NoRepeatWithoutSet(vector<int>  & input) { 
    
    // sort and remove the duplicated elements in the input vector.
    sort( input.begin(), input.end() );
    input.erase( unique( input.begin(), input.end() ), input.end() );

}

// vector<int> Solution::NoRepeatWithoutSet(vector<int>  & input) { 
    
//     // this copies the input vector into a temporate result vector
//     vector<int> result = input;

//     // sort and remove the duplicated elements in the result vector
//     sort( result.begin(), result.end() );
//     result.erase( unique( result.begin(), result.end() ), result.end() );

//     return result;
// }

void Solution::NoRepeatWithSet (vector<int> & input){

    // pass vector's elements to the set constructor. 
    // it creates a set using the elements from the input vector.
    set<int> s( input.begin(), input.end() );

    // get the set's elements to the input vector.
    input.assign( s.begin(), s.end() );
}

void Solution::ReverseVector (vector<int> & input){
    reverse(input.begin(), input.end());
}

void Solution::RemoveOdd(vector<int> & input){

    input.erase(remove_if(input.begin(), input.end(),
    [](const int& x){ // lambda function
        return x % 2 == 1; 
    }), 
    input.end());
}

vector<int> Solution::ConcatenatingTwoVectors(vector<int> & input1, vector<int> & input2){

    // copy input1 to the result.
    vector<int> result = input1;

    // insert the elements in the input2 vector into the result vector
    result.insert( result.end(), input2.begin(), input2.end() );

    return result;
}


vector<int> Solution::Union(vector<int> & input1, vector<int> & input2){

    vector<int> result = ConcatenatingTwoVectors(input1,input2);
    NoRepeatWithSet(result);
    return result;
}

