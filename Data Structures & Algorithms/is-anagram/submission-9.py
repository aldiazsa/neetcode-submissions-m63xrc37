class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): return False
        freq = {}

        for i in range(len(s)):
            freq[s[i]] = 1 + freq.get(s[i],0)
            freq[t[i]] = freq.get(t[i],0) - 1

        for item in freq:
            if freq[item] != 0:
                return False
        return True