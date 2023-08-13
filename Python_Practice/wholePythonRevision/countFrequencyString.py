def countfrequency(userString):
    length = len(userString) 
    dictt = {}
    count = 0 
    for i in range(length):
        if(userString[i]!=' '):
            key = userString[i] 
            if key in dictt:
                dictt[key] += 1
            else:
                dictt[key] = 1
    return dictt

userString=input("Enter a sentence for frequency count : ")

print(countfrequency(userString))









