import math
import os

if __name__ == '__main__':
    m = 5
    coor = [(0, 0), (1, 2), (2, 2), (4, 0)]
    # 0(n^2)
    print(f"Hey {os.getlogin()}")
    for i, val in enumerate(coor):
        for j, a_val in enumerate(coor):
            if j > i:
                diff1 = abs(a_val[0]-val[0])
                diff2 = abs(a_val[1]-val[1])
                if diff1 == diff2:
                    print(f"Found pair : {i} and {j}")
