#coding=utf-8

def twoSum(numbers, target):
    i,j = 0,len(numbers) - 1
    while i!=j:
        if numbers[i] + numbers[j] > target:
            j-=1
        elif numbers[i] + numbers[j] < target:
            i+=1
        else:
            break
    if i!=j:
        return [i+1,j+1]
    else:
        raise ValueError("Not as expected.")

if __name__ == '__main__':
    print twoSum([2,7,11,15], 9)
