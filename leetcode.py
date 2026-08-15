class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if strs[0] > 0:
            self.min_num = 200

            for str in strs:
                if len(str) < self.min_num:
                    self.min_num = len(str)

            self.first_letter = strs[0][0]
            self.return_str = ''
            for num in range (0, self.min_num):
                for strings in strs:   
                    pass               

        else:
            return ""


            


        