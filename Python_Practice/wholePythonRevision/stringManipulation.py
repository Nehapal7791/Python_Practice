input_string="THIS IS A BEAUTIFUL DAY"
def remove_vowels(input_string):
    vowels = "aeiouAEIOU"
    j=0
    k=0
    vowel_string = ""   
    consonant_string=""
    ans=""
    for char in input_string:
        if char in vowels:
            vowel_string += char
        elif char==" ":
            continue
        else:
            consonant_string+=char
    for char in input_string:
        if char==" ":
            ans+=" "
        elif j<len(vowel_string):
            ans+=vowel_string[j]
            j+=1
        else:
            ans+=consonant_string[k]
            k+=1
    return ans
input_string = "THIS IS A BEAUTIFUL DAY"
output_string = remove_vowels(input_string)
print(output_string)

