# def gen(n):
#     for i in range(n):
#         yield i
# g=gen(4)
# print(g)
# print(g.__next__())

# """factorial generator"""
# def factorial(n):
#     if n==0:
#         yield 1
#     else:
#         res=1
#         for i in range(1,n+1):
#             res=res*i
#             yield res

# gen=factorial(3)
# print(gen)
# print(gen.__next__())
# print(gen.__next__())
# print(gen.__next__())
# for i in gen:
#     print(i)


""" fibonacci generator """
def fib(limit):
    a, b = 0, 1
    while a < limit:
        yield a
        a, b = b, a + b
gen = fib(8)
# print(gen)
print(gen.__next__())
print(gen.__next__())
print(gen.__next__())
for value in iter(gen, 55):
    print(value)



