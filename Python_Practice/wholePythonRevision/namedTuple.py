from collections import namedtuple
Points= namedtuple("points",['x', 'y' ,'z'])
points=Points(1,2,2)
print(type(points.x))
print(points.x, points.y,points.z)

# def moveZero(lst):
#     return [x for x in lst if x==0 ]+ [x for x in lst if x!=0]
# listt=[1,2,0,7,0,8,0]
# result=moveZero(listt)
# print(result)