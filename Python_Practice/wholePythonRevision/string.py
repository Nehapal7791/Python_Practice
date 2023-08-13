def separate_vowels_and_consonants(input_string):
    vowels = "aeiouAEIOU"
    consonant="bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"
    vowel_string = ""
    j=0
    k=0
    output=" "
    consonant_string = ""
    for char in input_string:
        if char in vowels:
            vowel_string += char
        elif char ==" ":
            continue
        else: 
            consonant_string += char
    for char in input_string:
        if char==" ":
            output+=" "
        elif j<len(vowel_string):
            output+=vowel_string[j] 
            j+=1
        else:
            output+=consonant_string[k]
            k+=1
    return output

input_string = "THIS IS A BEAUTIFUL DAY"
output=separate_vowels_and_consonants(input_string)
print(output)