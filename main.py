def my_func(list):
    sum = 0
    for i in list:
        try:
            sum += i
        except TypeError:
            continue
    return sum


def test_my_func():
    testlist = [[1, 2, 3, 4], [1, 2, 'a', 4], [2+5j, 2, 3, 4]]
    solutionlist = [10, 7, 11+5j]
    count = 0
    for t in testlist:
        if my_func(t) == solutionlist[count]:
            print("Test passed#", count+1)
        else:
            print("Test failed#", count + 1)
        count += 1

test_my_func()



