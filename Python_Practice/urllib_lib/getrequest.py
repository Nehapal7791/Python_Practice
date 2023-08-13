import urllib3
import certifi
url='https://jsonplaceholder.typicode.com/posts/'
# obj=urllib3.PoolManager()
# response=obj.request("GET",url)
http = urllib3.PoolManager(ca_certs=certifi.where())
response=http.request("GET",url)
print(response.status)
print(response.data.decode('utf-8'))

# head request is a get request withou a message body

# headresponse=http.request("HEAD","https://jsonplaceholder.typicode.com/posts/1")
# print(headresponse.headers['Server'])
# print(headresponse.headers['Date'])
# print(headresponse.headers['Content-Type'])
