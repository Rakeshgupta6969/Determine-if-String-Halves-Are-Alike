class Solution {

    private:
 
    bool isvowel(char & ch){
    
 
     return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I'
     || ch == 'O' || ch == 'U');
 
    }
 
 
 public:
     bool halvesAreAlike(string s) {
      
      int n = s.size();
     
       int mid = n/2;
       int i = 0;
       int j = mid;
       
 
       int countl = 0;
       int countr  = 0;
       
       while(i<mid && j<n){
 
       if(isvowel(s[i])){
         countl++;  // total number of vowel in left 
       }
       if(isvowel(s[j])){
         countr++; // total number of vowel in right.
       }
 
       i++;
       j++;
 
       }
 
      
      return countl == countr;
 
 
     }
 };