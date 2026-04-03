class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        # s1_len = len(s1)
        # s2_len = len(s2)
        
        # if s1_len > s2_len: return False
        
        # s1_cnt = Counter(s1)
        # window = Counter()

        # for r in range(s2_len):
        #     window[s2[r]] += 1
        n, m = len(s1), len(s2)
        if n > m:
            return False

        need = Counter(s1)
        window = Counter()

        # r is the right boundary of the window
        for r in range(m):
            # add the new character to the window
            window[s2[r]] += 1

            # shrink from the left if window is too big
            if r >= n:
                left_char = s2[r - n]
                window[left_char] -= 1
                if window[left_char] == 0:
                    del window[left_char]

            # once we have a full window, compare
            if r >= n - 1 and window == need:
                return True

        return False