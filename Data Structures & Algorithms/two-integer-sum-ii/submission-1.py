class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        r = len(numbers)-1
        l = 0
        while l < r:
            suma = numbers[l] + numbers[r]
            if target == suma:
                return [l+1,r+1]
            elif suma > target:
                r-=1
            else:
                l+=1
        return []
            


