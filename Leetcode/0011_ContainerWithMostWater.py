class Solution:
    def maxArea(self, heights: List[int]) -> int:
        l = 0
        r = len(heights) - 1
        maxArea = 0
        while (l < r):
            width = r - l
            leftHeight = heights[l]
            rightHeight = heights[r]
            if (leftHeight < rightHeight):
                maxArea = max(leftHeight * width, maxArea)
                l += 1
            else:
                maxArea = max(rightHeight * width, maxArea)
                r -= 1
        return maxArea
