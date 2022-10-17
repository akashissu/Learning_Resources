class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        maxarea=0
        l=0
        r=len(height)-1
        while l<r:
                w=r-l
                if height[l]<height[r]:
                    a=height[l]*w
                    if a>maxarea:
                        maxarea=a
                    l+=1
                else:
                    a=height[r]*w
                    if a>maxarea:
                        maxarea=a
                    r-=1
        return maxarea 
                    
