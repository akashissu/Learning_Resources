/*
A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing "only lowercase" English letters, return true if sentence is a pangram, or false otherwise.

Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.

Example 2:

Input: sentence = "leetcode"
Output: false

*/


class Solution {
public:
    bool checkIfPangram(string sentence) {
       //Array 'seen' of type bool and size 26
        array<bool,26> seen{};          
        //currChar current character
        for(auto currChar : sentence)  // for each loop 
            seen[currChar-'a']=true;   //assigning true to index which are present in the array
      
        // after iteration checking do there is any character i.e., is not present in the sentence or not
        // ex : leetcode will feel 8 corresponding indexes with true and other will be false 
       //  and when we check status, other indexes will be false.
      // in case a sentene is pangram all index contain true value
 
         for(auto status : seen)  // for each loop to traverse array seen
             if(!status)          // if status is false, then  (!false)=(true) and false will be returned as the string is not pangram 
                 return false;
        return true;              // returning true if all index of array seen are true and hence the sentence is pangram 
    }
};
