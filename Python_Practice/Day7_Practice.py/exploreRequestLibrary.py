import requests
from bs4 import BeautifulSoup
url="https://www.codewithharry.com/blogpost/python-action-plan-to-learn-in-2023/"

r=requests.get(url)
soup=BeautifulSoup(r.text,'html.parser')
print(soup.prettify())
for heading in soup.find_all("h1"):
    print(heading.text)


# headers={
#     "user-Agent":"Mozilla/5.0(iPhone;CPU iPhone OS 16_1_2 like Mac OS X) AppleWebKit/605.1.15 (KHTML,like)",
#     "Accept":"image/jpeg"
# }
# response=requests.get("http://httpbin.org/get",proxies=proxies)
# print(response.text)
# reponse=requests.get("https://httpbin.org/image",headers=headers)
# with open("myimage.jpg","wb") as f:
#     f.write(reponse.content)
# print(reponse.json())
# print(reponse.json().keys())
