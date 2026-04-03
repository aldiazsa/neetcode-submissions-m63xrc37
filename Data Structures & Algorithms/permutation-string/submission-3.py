class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        s1_len = len(s1)
        s2_len = len(s2)
        
        if s1_len > s2_len: return False
        
        s1_cnt = Counter(s1)
        window = Counter()

        for r in range(s2_len):
            window[s2[r]] += 1
            
            if r >= s1_len:
                left_char = s2[r-s1_len]
                window[left_char] -= 1
                if window[left_char] == 0:
                    del window[left_char]

            if (r >=s1_len-1) and (window == s1_cnt):
                return True
        return False
                
