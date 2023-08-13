from re import split
my='''
Lorem ipsum dolor sit amet, consectetur adipiscing elit.
Sed vehicula gravida dolor, at commodo felis facilisis id.
Ut consectetur magna vitae enim finibus pellentesque.
Pellentesque habitanttttttttttttttt morbi tristique senectus et netus et malesuada fames ac turpis egestas.
1234-5678-9012-3456
Email: john.doe@example.com
Phone: (123) 456-7890
Website: www.example.com
'''
ex="my name is"

# findall ,search,split,sub,finditer.
# pattern=re.compile(r'.OF') # row string include all escape character to print
# pattern=re.compile(r'^L',re.MULTILINE)    #start with
# pattern=re.compile(r'as$',re.MULTILINE)  #end with
# pattern=re.compile(r'nt*')#zero or more occurrence
# pattern=re.compile(r'nt+')# one or more occurrence
# pattern=re.compile(r'nt{2}')#exactly specified no of occurence
# pattern=re.compile(r'nt{1}|.com') #either or
# matches=pattern.finditer(my)
# for match in matches:
#     print(match)

# p=re.compile(r'\d{3}-\d{4}')
print(split('\W+', 'On 12th Jan 2016, at 11:02 AM'))
print(split('\d+', 'On 12th Jan 2016, at 11:02 AM'))
# print(p)
#  #special sequences



