lst = [6, 7, 4, 9, 9, 0, -5, -8, 7, 90, -2, -1, 0]


def max_element(lst):
    start_element = lst[0]
    for i in range(len(lst)):
        if (i < (len(lst)-1)) and (lst[i+1] > start_element):
            start_element = lst[i+1]

    return start_element
  
maxElement = max_element(lst)
print(maxElement)
