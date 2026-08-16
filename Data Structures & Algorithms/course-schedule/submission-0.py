class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:

        visited = set()
        
        adjacency_list = {i :[]for i in range(numCourses)}
        for pre in prerequisites:
            e1,e2 = pre
            adjacency_list[e1].append(e2)

        def dfs(crs):
            if crs in visited:
                return False

            visited.add(crs)

            for i in adjacency_list[crs]:
                if not dfs(i) :
                    return False
                dfs(i)
            
            visited.remove(crs)
            adjacency_list[crs]  = []
            return True
            
        for i in range(numCourses):
            if not dfs(i):
                return False
        return True



