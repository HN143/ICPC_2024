# myList = [1, 2, 3, 4]
# myTuple = ("hihi", "haha")
# mySet = {1, 2, 5, 5, 7}

# myDict = {1: "one", 2: "true"}

# myList.extend([9])
# myList.reverse()


# print("myList", myList)
# print("myTuple: ", myTuple)
# print("mySet: ", mySet)
# print("MyDict: ", myDict)

# print([[i+j for i in "abc"] for j in "def"])
# def f(value):
#     value[0] = 44
# v = [1,2,3]
# f(v)
# print(v)

# a = 165
# b = sum(list(map(int, str(a))))
# print(b)

# x = [i**+1 for i in range(3)] # i**+1 -> i mũ 1
# print(x)


# places = ['B', "M", "D"]
# places1 = places #places1 trỏ đến places -> 1 trog 2 thay đổi -> còn lại thay đổi
# places2 = places[:] #sao chép all phần tử trong places sang places2
# places1[1] = "P"
# places2[2] = "H"
# print(places)

# a = {1:5, 2:3, 3:4}
# print(a)
# print(a.pop(4,9))

# s = {2,5,6,6,7}
# s

# a = {3, 4, {7, 5}}
# print(a[2][0])

# a = [1, 4, 3, 5]
# b = [3, 1, 5, 2, 4]
# print(a == b)
# print(set(a) == set(b))

# a = {5, 6, 7, 8}
# b = {7, 8, 9, 10}
# print(len(a+b))

# a = {1: "A", 2: "b", 3: "c"}
# print(a.get(5, 4))

# a  = (2, 3, 1, 5)
# a.sort()
# print(a)

# a = frozenset(set([5, 6, 7]))
# print(a)

list1 = [1,2, 3, 4]
list2 = ["a", "b", "c", "d", "e"]

for i in list1:
  for j in list2:
    print(i + j, " ")
