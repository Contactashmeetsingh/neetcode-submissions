class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        # print([f for f in matrix])
        
        rows = len(matrix) 
        # print(rows)
        cols = len(matrix[0])       # Counts how many items are 
        # print(cols)

        total_elements = rows * cols
        print(f"total elemtns{total_elements}")

        # direction= [[1,0],[0,-1],[-1,0],[1,0]]
        res = []
        
        right_len=cols
        down_len = rows
        left_len = 0
        up_len = 0

        x,y = 0, 0


        while (len(res) < total_elements):
            print(f"lenght of res{len(res)}")
            for i in range(left_len,right_len):
                res.append(matrix[up_len][i])
                
            up_len+=1

            for i in range(up_len,down_len):
                res.append(matrix[i][right_len-1])
                
            right_len-=1

            if len(res) == total_elements:
                break

            for i in range(right_len-1,left_len-1,-1):
                
                res.append(matrix[down_len-1][i])
                
            down_len-=1

            for i in range(down_len-1,up_len-1, -1):
                print(matrix[i][left_len])
                res.append(matrix[i][left_len])
                x-=1
                
                
            left_len+=1

        return res