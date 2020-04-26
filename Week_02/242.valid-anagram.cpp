class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> location (26,0);
         for (size_t i=0; s[i] != '\0';i++) {
             location[s[i]-'a'] += 1;
         }

         for (size_t i=0; t[i] != '\0';i++) {
             location[t[i]-'a'] -= 1;
         }

         for (size_t i = 0; i < 26; i++)
         {
             if (location[i] != 0)
             {
                 return false;
             }
             
         }

         return true;
         
    }
};

//26个字母对应的数组，遍历a对应字母的出现次数写入，遍历b将b出现次数*-1写入，如果最后有不为0情况，则不一致，如果全部为0，则一致