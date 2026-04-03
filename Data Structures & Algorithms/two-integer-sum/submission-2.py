from collections import defaultdict
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hmap = defaultdict(int)
        for i in range(len(nums)):
            diff = target - nums[i]
            print(f"diff: {diff}")
            if diff in hmap:
                return [hmap[diff], i]
            hmap[nums[i]] = i
            print(f"{hmap}")
        return 0