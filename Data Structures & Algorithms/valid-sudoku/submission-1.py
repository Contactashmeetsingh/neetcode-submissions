class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        
        # boo = True
        for i in range(9):
            # print(board[i])
            ii = set()
            for j in range(9):
                if board[i][j] in ii and board[i][j] != ".":
                    return False

                ii.add((board[i][j]))



        for i in range(9):
            # print(board[i])
            jj = set()
            for j in range(9):
                if board[j][i] in jj and board[j][i] != ".":
                    return False

                jj.add((board[j][i]))

        index =[[1,1],[4,1],[7,1],[1,4],[4,4],[7,4],[1,7],[4,7],[7,7]]

        ones = [-1,0,1]

        print(board[1][4])
        for r,c in index:
            # print(r,c)
            ij = set()
            for i in ones:
                for j in ones:
                    print(board[c+i][r+j])
                    if board[c+i][r+j] in ij and board[c+i][r+j] != ".":
                        return False

                    ij.add(board[c+i][r+j])
        


                    

        # for i in range(9):
        #     # print(board[i])
            
        #     jj = set()
        #         # (row / 3) * 3 + (col / 3)

        #     for j in range(6):
        #         if (board[j][i]) in jj:
        #             return False

        #         jj.add((board[j][i]))


        # for i in board:
        #     for j in i:
        #         print (i)

        return True