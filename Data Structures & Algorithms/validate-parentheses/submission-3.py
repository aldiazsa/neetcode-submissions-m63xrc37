class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        opening_braket = {'}':'{', ']':'[', ')':'('}
        for c in s:
            if c in opening_braket:
                if stack and stack[-1] == opening_braket[c]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(c)

        print(f"stack: {stack}")
        if not stack:
            return True
        else:
            return False
                