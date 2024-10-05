def is_pseudo_sorted(arr, n):
    def is_sorted(arr):
        return all(arr[i] <= arr[i + 1] for i in range(len(arr) - 1))
    
    if is_sorted(arr):
        return "YES"
    
    for i in range(n - 1):
        if arr[i] > arr[i + 1]:
            arr[i], arr[i + 1] = arr[i + 1], arr[i]
            if is_sorted(arr):
                return "YES"
            arr[i], arr[i + 1] = arr[i + 1], arr[i]
            break
    
    return "NO"

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    index = 0
    T = int(data[index])
    index += 1
    
    results = []
    
    for _ in range(T):
        N = int(data[index])
        index += 1
        A = list(map(int, data[index:index + N]))
        index += N
        
        result = is_pseudo_sorted(A, N)
        results.append(result)
    
    for result in results:
        print(result)

if __name__ == "__main__":
    main()
