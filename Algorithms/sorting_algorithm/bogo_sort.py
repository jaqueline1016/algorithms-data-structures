import random 

def is_sorted(list):
    for i in range(len(list)-1):
        if list[i] > list[i+1]:
            return False
    return True

def bogo_sort(list):
    attempts = 0
    while not is_sorted(list):
        print(attempts)
        random.shuffle(list)
        attempts += 1
    return list

numbers = [5, 3, 8, 6, 2]
sorted_numbers = bogo_sort(numbers)
print(sorted_numbers)

