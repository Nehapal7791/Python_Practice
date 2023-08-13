# we are given a string and we have to reverse string word by word
# input = my name is abc
# output = abc is name my
# input = my name is abc
# output = cba si eman ym
def reverseStringAlphabetByAlphabet(string):
    newString=""
    i=len(string)-1
    while (i >= 0):
        newString=newString+string[i]
        i-=1
    print(newString)

def reverseSentenceByWords(string):
    words=string.split(" ")
    words=words[-1::-1]
    output=' '.join(words)
    print(output)

userString=input("Enter String: ")
reverseStringAlphabetByAlphabet(userString)
reverseSentenceByWords(userString)
