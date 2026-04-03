class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded_str = []
        for word in strs:
            encoded_str.append(f"{len(word)}#{word}")        
        return ''.join(encoded_str)

    def decode(self, s: str) -> List[str]:
        if len(s) == 0: return []

        decoded = []
        rd_index = 0
        while ( rd_index < len(s) ):
            pound_pos = s.find("#",rd_index)
            word_size = int(s[rd_index:pound_pos])
            decoded.append( s[pound_pos+1:(pound_pos + 1 + word_size)])
            rd_index = pound_pos + 1 + word_size
        return decoded

