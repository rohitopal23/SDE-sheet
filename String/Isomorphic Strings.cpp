bool areIsomorphic(string str1, string str2)
{
    if(str1.size() != str2.size())  return false;
    // Your code here
    int mp1[300] = {0};
    int mp2[300] = {0};
    
    for(int i=0; i<str1.size(); i++){
        if(mp1[str1[i]] == 0){
            mp1[str1[i]] = str2[i];
        }else if(mp1[str1[i]] != str2[i]){
            return false;
        }
        
        if(mp2[str2[i]] == 0){
            mp2[str2[i]] = str1[i];
        }else if(mp2[str2[i]] != str1[i]){
            return false;
        }
    }
    
    return true;
    
}
