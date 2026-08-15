class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        if grid == None:
            return 0

        row, column = len(grid), len(grid[0])
        visit = set()
        island = 0

        def bfs(r,c):
            q = collections.deque()
            visit.add((r,c))
            q.append((r,c))
            
            while q:
                ro ,col = q.popleft()
                struct = [[0,1],[1,0],[-1,0],[0,-1]]
                
                for rr,cc in struct:
                    rrr,ccc = ro + rr, col +cc

                    if rrr in range(row) and ccc in range(column) and grid[rrr][ccc] == "1" and (rrr,ccc) not in visit:
                        print(grid[rrr][ccc])
                        visit.add((rrr,ccc))
                        q.append((rrr, ccc))
                    


        for r in range(row):
            # print("\n")
            for c in range(column):
                # print(grid[r][c])
                if grid[r][c] == "1" and (r,c) not in visit:
                    bfs(r,c)
                    island += 1


        return island