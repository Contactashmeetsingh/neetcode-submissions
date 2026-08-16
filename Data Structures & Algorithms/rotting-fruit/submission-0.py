class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        q = deque()
        fresh = 0
        time = 0
        def bfs(q, grid):
            nonlocal fresh, time
            while q and fresh > 0:
                for i in range(len(q)):
                    curr = q.popleft()
                    dir = [[1,0],[-1,0],[0,1],[0,-1]]
                    for i in range(4):
                        new_r = curr[0] + dir[i][0]
                        new_s = curr[1] + dir[i][1]
                        if 0 <= new_r < len(grid) and 0 <= new_s < len(grid[0]):
                            if grid[new_r][new_s] == 1:
                                grid[new_r][new_s] = 2
                                fresh -= 1 
                                q.append([new_r, new_s])
                time += 1
            return time if fresh == 0 else -1

        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 1:
                    fresh += 1
                elif grid[i][j] == 2:
                    q.append([i, j])
        
        if fresh == 0: return 0
        return bfs(q, grid)