#python program to check weather string is symmentical and palindrome
# symmetrical means both the halves of string is same
#palindrome if both the halves os string is equal
def palindrome(string):
    mid=(len(string)//2)
    start=0
    end=len(string)-1
    flag=0
    while(start<=mid):
        if(string[start]==string[end]):
            start+=1
            end-=1 
        else:
            flag=1
            break
    if(flag==0):
        print("String is Palindrome")
    else:
        print("String is Not Palindrome")

def symmetrical(string):
    mid=(len(string)//2)
    start=0
    end=len(string)-1
    flag=0
    while(start< mid and mid < end):
        if (string[start]==string[mid]):
            start+=1
            mid+=1
        else:
            flag=1
            break
    if(flag==0):
        print("String is symmetrical")
    else:
        print("String is Not symmetrical")


userString=input("Enter string: ")
palindrome(userString)
symmetrical(userString)

