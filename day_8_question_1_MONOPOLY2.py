def is_monopoly(P, Q, R, S):
    
    if P > Q + R + S or Q > P + R + S or R > P + Q + S or S > P + Q + R:
        return "YES"
    else:
        return "NO"


T = int(input())


for _ in range(T):
    
    P, Q, R, S = map(int, input().split())
    
    print(is_monopoly(P, Q, R, S))
