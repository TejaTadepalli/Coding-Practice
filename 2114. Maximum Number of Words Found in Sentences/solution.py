class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        return max(s.count(' ') for s in sentences) + 1       #adding 1 as we will miss one value
