class Solution:
    def reverseWords(self, s: str) -> str:
        rev_list = []
        str_list = s.split()
        n = len(str_list)
        for _ in range(n):
            rev_list.append(str_list.pop())
        rev_str = " ".join(rev_list)
        return rev_str
        
s = Solution()
print(s.reverseWords("The sky is blue"))