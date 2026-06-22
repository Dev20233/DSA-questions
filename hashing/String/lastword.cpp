class Solution {
public:
    int lengthOfLastWord(string s) {
        // humne ek funciton banaya lengthOfLastWord jisme hum 
        // string s ko pass karenge aur hume last word ka length return karna hai
        
        int i = s.size() - 1;
        // fir hume end word ka lenght chaiye toh hum end se count krenge 
        // toh hum puri strign ki length se -1 krdenge , kyuki 0 se start hota 
        int len = 0;
        // initillay length 0 hai 

        while(i >= 0 && s[i] == ' ')
        // ab maanlo end me kuch spaces hai ( hello world__ )toh fir spaces bhi count hongi word length ke andr 
        // hume ye nhi chaiye toh while use krenge ki left move krte raho tbtk jbtk index ki value koi charcter ho 
        {
            i--;
            // toh hum left move krte rhenge 
        }

        while(i >= 0 && s[i] != ' ')
        // fir ek aur while loop lagaya , jb spaces not equal to s[i ] ho 
        {
            len++;
            // jaise jaise hum move krte hai vaise hum lenght mai add krte jaate 
            i--;
            // left more krte rhete hai 
        }
        // jaise spaces mil jayegi hum vhi rruk jayenge aur len return krdenge 

        return len;
    }
};