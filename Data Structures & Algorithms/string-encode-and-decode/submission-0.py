class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded_str = []
        for word in strs:
            encoded_str.append(str(len(word)))
            encoded_str.append("#")
            encoded_str.append(word)            
        return ''.join(encoded_str)

    def decode(self, s: str) -> List[str]:
        print(f"{s}")
        decoded = []
        pound_pos = 0
        rd_index = 0
        while ( rd_index < len(s) ):
            pound_pos = s.find("#",rd_index)
            print(f"rd_index: {rd_index} pound: {pound_pos}")
            word_size = int(s[rd_index:pound_pos])
            decoded.append( s[pound_pos+1:(pound_pos + 1 + word_size)])
            rd_index = pound_pos + 1 + word_size
            print(f"{decoded}")
        return decoded
