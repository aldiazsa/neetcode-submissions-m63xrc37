from collections import defaultdict

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = defaultdict(int)
        top_k = []
        for num in nums:
            freq[num] +=1

        freq =  dict(sorted(freq.items(), key=lambda item: item[1], reverse=True))

        for i in range(k):
            top_k.append(list(freq)[i])
        
        print(f"{top_k}")

        return top_k