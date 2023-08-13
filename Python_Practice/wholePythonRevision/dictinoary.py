# taking dictt from user and print it
def inputDictt():
    numberOfElement=int(input("Enter number of element: "))
    userDict={}
    for i in range(numberOfElement):
        key=int(input(f"Enter Key {i+1} : "))
        value=int(input(f"Enter Values {i+1} : "))
        userDict[key]=value
    return userDict

def Mergedictt(**dictt):
    mergedict = {}
    for dict_key , dict_value in dictt.items():
        mergedict.update(dict_value)
    return mergedict

def printKeyValue(**kwargs):
    for key, value in kwargs.items():
        print(f"{key},{value}")


dict1=inputDictt()
dict2=inputDictt()
resultDictt={}
resultDictt=Mergedictt(dictionary1=dict1,dictionary2=dict2)
print(resultDictt)

# print value and keys

user_data = {'name': 'John', 'age': 30}
printKeyValue(**user_data)

dict1 = {'a': 1, 'b': 2}
dict3 = {'e': 3, 'f': 4}
dict2 = {'c': 3, 'd': 4}
merged_dict = {**dict1, **dict2,**dict3}
print(merged_dict)



