class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        if grid == None:
            return 0

        row, column = len(grid), len(grid[0])
        visit = set
        island = 0

        for r in range(row):
            for c in range(column):
                print (r,"and",c)