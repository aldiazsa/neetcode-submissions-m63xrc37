class Solution:
    def minWindow(self, s: str, t: str) -> str:
        countT = {}
        substring = {}
        l = 0
        res = [-1,-1]
        resLen = len(s) + 1
        have = 0
        


        if len(t) == 0: return ''

        for c in t:
            countT[c] = 1 + countT.get(c, 0)
        
        need = len(countT)
        
        for r in range(len(s)):
            c = s[r]
            substring[c] = 1 + substring.get(c, 0)
            
            if c in countT and substring[c] == countT[c]:
                have += 1
            
            while have == need:
                if (r - l + 1) < resLen:
                    resLen = r - l + 1
                    res = [l, r]
                
                substring[s[l]] -= 1
                if s[l] in countT and substring[s[l]] < countT[s[l]]:
                    have -= 1
                l += 1                
        l, r = res

        if res != (len(s) + 1):
            return s[l : r + 1]
        else: 
            return ''
        
        