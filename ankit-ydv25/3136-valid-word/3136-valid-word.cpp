class Solution {
public:
    bool isValid(string word) {
        int vowel=0;
        int conso = 0;
        int num = 0;
        if(word.length()<3) return false;
        for(int i=0;i<word.length();i++)
        {
            if(word[i]=='a'|| word[i]=='e'|| word[i]=='i'|| word[i]=='o'|| word[i]=='u'|| word[i]=='A'|| word[i]=='E'|| word[i]=='I'|| word[i]=='O'|| word[i]=='U' ) {  
                             vowel++;
            }
            else if(word[i]>= 'A' && (int)word[i]<='Z' || word[i]>='a' && word[i]<= 'z')
            {
                conso++;
            }
            else if((int)word[i] >= 48 && (int)word[i] <= 57)
            {
                num++;
            }
            else{
                return false;
            }
        }
        if(vowel < 1 || conso < 1)
        {
            return false;
        }
        return true;
    }
};