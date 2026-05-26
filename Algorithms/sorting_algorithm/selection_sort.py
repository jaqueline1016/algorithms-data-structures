
def selection_sort(list):
    sorted_list = []

    for i in range(0, len(list)):
        index_to_move = index_of_min(list)
        sorted_list.append(list.pop(index_to_move))
    return sorted_list

def index_of_min(list):
    min_index = 0

    for i in range(1, len(list)):
        if list[i] < list[min_index]:
            min_index = i
    return min_index

numbers = [5, 3, 8, 6, 2]
sorted_numbers = selection_sort(numbers)
print(sorted_numbers)
