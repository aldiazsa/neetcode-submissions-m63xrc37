from collections import defaultdict
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = defaultdict(int)

        '''
        2 3 4 5  t-> 7

        diff = 7 -2 = 5
        hmap[2] = 0
        
        diff = 7- 3 = 4
        hmap[2] = 0
        hmap[3] = 1

        diff = 7 - 4 = 3
        hmap[diff], i

        '''

        for i in range(len(nums)):
            diff = target - nums[i]
            if diff in hashmap:
                return [hashmap[diff],i]
            hashmap[nums[i]] = i
        return -1 