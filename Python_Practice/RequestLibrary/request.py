import requests
import json
response=requests.get('https://api.github.com')
temp=response.text

print(temp)